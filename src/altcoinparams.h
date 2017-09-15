/*
definitions below is now params for altcoin Tcash .
this file will be overwrite through some script to switch to other altcoins
definitions below has replaced params in :
chainparams.cpp,
consensus/consensus.h
main.cpp
util.h
*/
#ifndef BITCOIN_ALTCOINPARAMS_H
#define BITCOIN_ALTCOINPARAMS_H
/*
common
*/
const static char* TIME_STAMP =  "This is the beginning,2017,08,29";
const static char* PUBLIC_KEY = "04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f";
// PUBLIC_KEY 不用修改



/*
Main Net
*/

/*chainparams.cpp*/
const static int HALVING_INTERVAL =  100;
const static int POW_TARGET_TIMESPAWN = 60 * 60 * 24 * 365 ;
const static int POW_TARGET_SPACING = 2 * 60;
const static bool POW_ALLOW_MIN_DIFFICULTY_BLOCKS = false;
const static int MESSAGE_START_0 = 0x81;
const static int MESSAGE_START_1 = 0x1d;
const static int MESSAGE_START_2 = 0x25;
const static int MESSAGE_START_3 = 0x35;
const static int DEFAULT_PORT = 25535;

const static int NTIME =  1503995185;
const static int NNOUNCE = 33327120;
const static int NBITS = 0x1d0fffff;
const static int NREWORD = 100;

const static char* HASH_GENESIS_BLOCK = "0000000d42baca7fd3cbaff62578cb1de20e48fb26a5083d8d6b9ea631f32a7a";
const static char* HASH_MERKLE_ROOT = "0583fa232455f218e718d3618219adad4657b5e13e58197490e025d818fcc965";



/*DNSSEEDS*/
//const static char*DNSSEEDS1= "120.92.35.170";
//const static char*DNSSEEDS2="120.92.35.170";
const static char*DNSSEEDS1= "127.0.0.1";
const static char*DNSSEEDS2="127.0.0.1";

const static int nPUBKEY_ADDRESS = 36;
const static int nSECRET_KEY = 39;
const static int nSCRIPT_ADDRESS = 37;

const static bool MINING_REQUIRES_PEERS = false;
const static char* POW_LIMIT = "0x0000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
/*TODO: CHECKPOINTS*/

/*consensus/consensus.h*/
const static int ALT_COINBASE_MATURITY =3;

/*main.cpp*/
const static int REWORD_OF_MINING = 251257;

/*util.h*/
// directory name  named after the altcoin
const static char* DATA_FILE_NAME =  "ebo";
const static char* DATA_FILE_NAME_UNIX =  ".ebo";

/*TODO:qt default data path*/

const static int RPC_PORT =  25534;

#endif // BITCOIN_ALTCOINPARAMS_H
