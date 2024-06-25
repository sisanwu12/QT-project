//
// Created by hj on 2023/6/7.
//

#include "ConvertUtil.h"

#ifdef __ANDROID__
    #include <locale>
    #include <bits/codecvt.h>
#else
    #include <codecvt>
#endif

#include "string.h"

std::wstring ConvertUtil::utf8ToWstring(const std::string& src)
{
    std::locale sys_locale("");

    const char* srcData = src.c_str();
    const char* srcEnd = src.c_str() + src.size();
    const char* srcNext = 0;

    auto* dstData = new wchar_t[src.size() + 1];
    wchar_t* dstEnd = dstData + src.size() + 1;
    wchar_t* dstNext = 0;

    wmemset(dstData, 0, src.size() + 1);
    typedef std::codecvt<wchar_t, char, mbstate_t> convert_facet;
    mbstate_t inState = {0, 0};

    auto result = std::use_facet<convert_facet>(sys_locale)
                      .in(inState, srcData, srcEnd, srcNext, dstData, dstEnd, dstNext);
    if (result == convert_facet::ok) {
        std::wstring dst = dstData;
        delete[] dstData;

        return dst;
    } else {
        delete[] dstData;
    }

    return L"";
}

std::string ConvertUtil::wstringToUtf8(const std::wstring& src)
{
    std::locale sys_locale("");

    const wchar_t* fromData = src.c_str();
    const wchar_t* fromEnd = src.c_str() + src.size();
    const wchar_t* fromNext = 0;

    int wchar_size = 4;
    char* dstData = new char[(src.size() + 1) * wchar_size];
    char* dstEnd = dstData + (src.size() + 1) * wchar_size;
    char* dstNext = 0;

    memset(dstData, 0, (src.size() + 1) * wchar_size);

    typedef std::codecvt<wchar_t, char, mbstate_t> convert_facet;
    mbstate_t outState = {0, 0};
    auto result = std::use_facet<convert_facet>(sys_locale)
                      .out(outState, fromData, fromEnd, fromNext, dstData, dstEnd, dstNext);
    if (result == convert_facet::ok) {
        std::string dst = dstData;
        delete[] dstData;

        return dst;
    } else {
        delete[] dstData;
    }

    return "";
}

std::string ConvertUtil::toString(int val)
{
    char buffer[20] = {0};
    snprintf(buffer, sizeof(buffer), "%d", val);

    return std::string(buffer);
}

std::string ConvertUtil::toString(long long val)
{
    char buffer[20] = {0};
    snprintf(buffer, sizeof(buffer), "%lld", val);

    return std::string(buffer);
}
