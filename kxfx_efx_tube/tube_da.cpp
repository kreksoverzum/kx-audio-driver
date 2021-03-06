// EF-X Library
// Copyright (c) Martin Borisov, 2004.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// kX DSP Generated file

// 10kX microcode
// Patch name: 'tube'

char *fuzz_copyright="Copyright Martin Borisov (c), EF-X 2004.";
// NOTE: The present DSP microcode dump is protected by the 
// license agreement bundled with the appropriate software 
// package containing this microcode,
// regardless the particular copyright notice is present in the dump.

char *fuzz_engine="kX 3538";
char *fuzz_comment="martintiger@abv.bg";
char *fuzz_created="06/30/2004";
char *fuzz_guid="5cc0af29-f438-47da-86d5-ac0cdf427b72";

char *fuzz_name="EFX TubeDrive";
int fuzz_itramsize=0,fuzz_xtramsize=0;

dsp_register_info fuzz_info[]={
	{ "in",0x4000,0x7,0xffff,0x0 },
	{ "out",0x8000,0x8,0xffff,0x0 },
	{ "level",0x8001,0x1,0xffff,0x2192e29f },
	{ "drive",0x8002,0x1,0xffff,0xa },
	{ "b_b0",0x8003,0x1,0xffff,0x9594789 },
	{ "b_b1",0x8004,0x1,0xffff,0x0 },
	{ "b_b2",0x8005,0x1,0xffff,0xf6a6b876 },
	{ "b_a1",0x8006,0x1,0xffff,0x6c5ff6ec },
	{ "b_a2",0x8007,0x1,0xffff,0xd2b28f13 },
	{ "b_state1",0x8008,0x1,0xffff,0x0 },
	{ "b_state2",0x8009,0x1,0xffff,0x0 },
	{ "b_state3",0x800a,0x1,0xffff,0x0 },
	{ "b_state4",0x800b,0x1,0xffff,0x0 },
	{ "l_b0",0x800c,0x1,0xffff,0x4510f5b },
	{ "l_b1",0x800d,0x1,0xffff,0x8a21eb6 },
	{ "l_b2",0x800e,0x1,0xffff,0x4510f5b },
	{ "l_a1",0x800f,0x1,0xffff,0x55fcdc4b },
	{ "l_a2",0x8010,0x1,0xffff,0xd8bee647 },
	{ "l_state1",0x8011,0x1,0xffff,0x0 },
	{ "l_state2",0x8012,0x1,0xffff,0x0 },
	{ "l_state3",0x8013,0x1,0xffff,0x0 },
	{ "l_state4",0x8014,0x1,0xffff,0x0 },
	{ "l_state11",0x8015,0x1,0xffff,0x0 },
	{ "l_state12",0x8016,0x1,0xffff,0x0 },
	{ "l_state13",0x8017,0x1,0xffff,0x0 },
	{ "l_state14",0x8018,0x1,0xffff,0x0 },
	{ "t1",0x8019,0x3,0xffff,0x0 },
	//{ "tmp_in",0x801a,0x3,0xffff,0x0 },
	{ "dc",0x801b,0x1,0xffff,0x0 },
	{ "pos",0x801c,0x1,0xffff,0x26666666 },
	{ "neg",0x801d,0x1,0xffff,0xd9999999 },
};

dsp_code fuzz_code[]={
	{ 0x0,0x8019,0x801b,0x4000,0x204f },
	{ 0x0,0x2040,0x2040,0x8009,0x8005 },
	{ 0x7,0x8009,0x8008,0x8008,0x8004 },
	{ 0x7,0x8008,0x8019,0x800b,0x8007 },
	{ 0x7,0x800b,0x800a,0x800a,0x8006 },
	{ 0x0,0x800a,0x2056,0x8019,0x8003 },
	{ 0x6,0x800a,0x2056,0x800a,0x2040 },
	{ 0x0,0x8019,0x800a,0x2040,0x2040 },
	{ 0xc,0x8019,0x8019,0x8002,0x2040 },
	{ 0x0,0x8019,0x8019,0x2040,0x2040 },
	{ 0x0,0x8019,0x8019,0x2040,0x2040 },
	{ 0x0,0x2040,0x2040,0x8012,0x800e },
	{ 0x7,0x8012,0x8011,0x8011,0x800d },
	{ 0x7,0x8011,0x8019,0x8014,0x8010 },
	{ 0x7,0x8014,0x8013,0x8013,0x800f },
	{ 0x0,0x8013,0x2056,0x8019,0x800c },
	{ 0x6,0x8013,0x2056,0x8013,0x2040 },
	{ 0x0,0x8019,0x8013,0x2040,0x2040 },
	{ 0x0,0x2040,0x2040,0x8016,0x800e },
	{ 0x7,0x8016,0x8015,0x8015,0x800d },
	{ 0x7,0x8015,0x8019,0x8018,0x8010 },
	{ 0x7,0x8018,0x8017,0x8017,0x800f },
	{ 0x0,0x8017,0x2056,0x8019,0x800c },
	{ 0x6,0x8017,0x2056,0x8017,0x2040 },
	{ 0x0,0x8019,0x8017,0x2040,0x2040 },
	{ 0x4,0x8019,0x2040,0x8019,0x2041 },
	{ 0x0,0x8000,0x2040,0x8019,0x8001 },
};

#define LOW_B0	0x800c
#define LOW_B1	0x800d
#define LOW_B2	0x800e
#define LOW_A1	0x800f
#define LOW_A2	0x8010

#define DRIVE_P 0x8002
#define MASTER_P 0x8001

#define B_B0	0x8003
#define B_B1	0x8004
#define B_B2	0x8005
#define B_A1	0x8006
#define B_A2	0x8007

#define DC_P    0x801b