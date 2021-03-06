#include <stdint.h>

#ifndef CACHESIM_H
#define CACHESIM_H

struct cache_stats_t {
    uint64_t accesses;

    uint64_t reads;
    uint64_t read_misses;
    uint64_t read_misses_combined;

    uint64_t writes;
    uint64_t write_misses;
    uint64_t write_misses_combined;

    uint64_t misses;
	uint64_t write_backs;
	uint64_t vc_misses;
    uint64_t vc_accesses;

    uint64_t subblock_misses;

	uint64_t bytes_transferred; 
   
	double   hit_time;
    double   miss_penalty;
    double   miss_rate;
    double   avg_access_time;
};

static const uint64_t DEFAULT_C = 15;   /* 32KB Cache */
static const uint64_t DEFAULT_B = 5;    /* 64-byte blocks */
static const uint64_t DEFAULT_S = 3;    /* 8 blocks per set */
static const uint64_t DEFAULT_V = 4;    /* 4 victim blocks */
static const uint64_t DEFAULT_K = 3;	/* 8 byte sub-blocks */


uint64_t C;
uint64_t B;
uint64_t S;
uint64_t V;
uint64_t K;



/** Argument to cache_access rw. Indicates a load */
static const char     READ = 'r';
/** Argument to cache_access rw. Indicates a store */
static const char     WRITE = 'w';
#endif /* CACHESIM_H */
