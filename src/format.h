#ifndef FORMAT_H
#define FORMAT_H

#include <stdint.h>
#include <math.h>

struct block1{
  uint32_t bx[8];
  uint32_t orbit[8];
  uint32_t mu1f[8];
  uint32_t mu1s[8];
  uint32_t mu2f[8];
  uint32_t mu2s[8];
};

struct masks{
  static const  uint32_t phiext = 0x1ff;
  static const  uint32_t pt = 0x1ff;
  static const  uint32_t qual = 0xf;
  static const  uint32_t etaext = 0x1ff;
  static const  uint32_t etaextv = 0xff;
  static const  uint32_t etaexts = 0x100;
  static const  uint32_t   iso = 0x3;
  static const  uint32_t   chrg = 0x1;
  static const  uint32_t   chrgv = 0x1;
  static const  uint32_t   index = 0x7f;
  static const  uint32_t   phi = 0x3ff;
  static const  uint32_t   eta = 0x1ff;
  static const  uint32_t   etav = 0xff;
  static const  uint32_t   etas = 0x100;
  static const  uint32_t  rsv = 0x3;
};

struct shifts{
  static const  uint32_t  phiext = 0;
  static const  uint32_t  pt = 10;
  static const  uint32_t  qual = 19;
  static const  uint32_t  etaext = 23;
  static const  uint32_t  iso =	0;
  static const  uint32_t  chrg = 2;
  static const  uint32_t  chrgv	= 3;
  static const  uint32_t  index	= 4;
  static const  uint32_t  phi = 11;
  static const  uint32_t  eta =	21;
  static const  uint32_t  rsv =	30;
};

struct header_shifts{
  static const uint32_t bxmatch=24;
  static const uint32_t mAcount=16;
  static const uint32_t orbitmatch=8;
  static const uint32_t mBcount=0;
};


struct header_masks{
  static const uint32_t bxmatch = 0xff<<header_shifts::bxmatch;
  static const uint32_t mAcount = 0xf<<header_shifts::mAcount;
  static const uint32_t orbitmatch = 0xff<<header_shifts::orbitmatch;
  static const uint32_t mBcount = 0xf;
};

struct gmt_scales{
  static const float pt_scale = 0.5;
  static const float phi_scale = 2.*M_PI/576.;
  static const float eta_scale = 0.0870/8; //9th MS bit is sign
  static const float phi_range = M_PI;
};
#endif