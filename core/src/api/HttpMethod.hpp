// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#pragma once

#include <functional>

namespace ledger { namespace core { namespace api {

enum class HttpMethod : int {
    GET,
    POST,
    PUT,
    DEL,
};

} } }  // namespace ledger::core::api

namespace std {

template <>
struct hash<::ledger::core::api::HttpMethod> {
    size_t operator()(::ledger::core::api::HttpMethod type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std