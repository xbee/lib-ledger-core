// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#pragma once

#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class BitcoinLikeAddress;
struct BitcoinLikeNetworkParameters;

class BitcoinLikeExtendedPublicKey {
public:
    virtual ~BitcoinLikeExtendedPublicKey() {}

    virtual std::shared_ptr<BitcoinLikeAddress> derive(const std::string & path) = 0;

    virtual std::string toBase58() = 0;

    static std::shared_ptr<BitcoinLikeExtendedPublicKey> fromBase58(const BitcoinLikeNetworkParameters & params, const std::string & address);
};

} } }  // namespace ledger::core::api