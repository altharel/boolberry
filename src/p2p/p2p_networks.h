// Copyright (c) 2012-2013 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

namespace nodetool
{
#ifndef TESTNET
  const static boost::uuids::uuid P2P_NETWORK_ID = { { 0x11 ,0x10, 0x01, 0x11 , 0x01, 0x00 , 0x01, 0x01, 0x10, 0x11, 0x00, 0x10, 0x12, 0x11, 0x01, 0x10} }; //Bender's nightmare
#else
  const static boost::uuids::uuid P2P_NETWORK_ID = { { 0x11 ,0x10, 0x01, 0x11 , 0x01, 0x00 , 0x01, 0x01, 0x10, 0x11, 0x02, 0x10, 0x11, 0x11, 0x01, 0x10} }; //Another Bender's nightmare
#endif
}
