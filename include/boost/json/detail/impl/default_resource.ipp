//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/cppalliance/json
//

#ifndef BOOST_JSON_DETAIL_IMPL_DEFAULT_RESOURCE_IPP
#define BOOST_JSON_DETAIL_IMPL_DEFAULT_RESOURCE_IPP

#include <boost/json/detail/default_resource.hpp>

namespace boost {
namespace json {
namespace detail {

// these are here so that ~memory_resource
// is emitted in the library instead of
// the user's TU.

default_resource::
~default_resource()
{
}

} // detail
} // json
} // boost

#endif