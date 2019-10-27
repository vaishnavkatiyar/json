//
// Copyright (c) 2018-2019 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/vinniefalco/json
//

// Test that header file is self-contained.
#include <boost/json/fixed_storage.hpp>

#include <boost/beast/_experimental/unit_test/suite.hpp>

namespace boost {
namespace json {

class fixed_storage_test : public beast::unit_test::suite
{
public:
    void run() override
    {
        make_storage<fixed_storage>(65536);
        pass();
    }
};

BEAST_DEFINE_TESTSUITE(boost,json,fixed_storage);

} // json
} // boost
