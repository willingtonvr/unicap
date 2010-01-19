/*
    unicap
    Copyright (C) 2004  Arne Caspari

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __DCAM_ISOCH_TABLE_H__
#define __DCAM_ISOCH_TABLE_H__

#include <unicap.h>

struct _dcam_isoch_mode dcam_isoch_table[]=
{
	// Format 0
	{ -1, -1, -1 }, // Mode0, 1.875
	{ -1, -1, -1 }, // Mode0, 3.75
	{ 160*120*3, 20*3, S100 }, // mode0, 7.5
	{ 160*120*3, 40*3, S100 }, // mode0, 15
	{ 160*120*3, 80*3, S100 }, // mode0, 30
	{ 160*120*3, 160*3, S100 }, // Mode0, 60

	{320*240*2, 20*2, S100 }, // Mode1, 1.875            //6
	{320*240*2, 40*2, S100 }, //3.75
	{320*240*2, 80*2, S100 }, //7.5
	{320*240*2, 160*2, S100 }, //15
	{320*240*2, 320*2, S100 }, //30
	{320*240*2, 640*2, S200 }, // 60

	{640*480*1.5, 80*1.5,  S100 }, // Mode2, 1.875             //12
	{640*480*1.5, 160*1.5, S100 },//3.75
	{640*480*1.5, 320*1.5, S100 },//7.5
	{640*480*1.5, 640*1.5, S100 },//15
	{640*480*1.5, 1280*1.5, S200 },//30
	{640*480*1.5, 2560*1.5, S400 }, // 60

	{640*480*2, 80*2,  S100 }, // Mode3, 1.875             //18
	{640*480*2, 160*2, S100 },//3.75
	{640*480*2, 320*2, S100 },//7.5
	{640*480*2, 640*2, S200 },//15
	{640*480*2, 1280*2, S400 },//30
	{640*480*2, 2560*2, S800 }, // 60

	{640*480*3, 80*3,  S100 }, // Mode4
	{640*480*3, 160*3, S100 },//3.75
	{640*480*3, 320*3, S100 },//7.5
	{640*480*3, 640*3, S200 },//15
	{640*480*3, 1280*3, S400 },//30
	{640*480*3, 2560*3, S800 },//60

	{640*480, 80,  S100 }, // Mode5
	{640*480, 160, S100 },//3.75
	{640*480, 320, S100 },//7.5
	{640*480, 640, S100 },//15
	{640*480, 1280, S200 },//30
	{640*480, 2560, S400 },//60
	
	{ -1, -1, -1}, // Mode6
	{640*480*2, 160*2, S100}, //3.75
	{640*480*2, 320*2, S100}, //7.5
	{640*480*2, 640*2, S200}, //15
	{640*480*2, 1280*2, S400}, //30
	{640*480*2, 2560*2, S800}, 

	{ -1,-1,-1}, //Mode7
	{ -1,-1,-1}, //Mode7
	{ -1,-1,-1}, //Mode7
	{ -1,-1,-1}, //Mode7
	{ -1,-1,-1}, //Mode7
	{ -1,-1,-1}, //Mode7

	// Format 1
	{ -1,-1,-1}, //Mode0
	{800*600*2, 250*2, S100}, //3.75
	{800*600*2, 500*2, S100}, //7.5
	{800*600*2, 1000*2, S200}, //15
	{800*600*2, 2000*2, S400}, //30
	{800*600*2, 4000*2, S800},
	
	{ -1,-1,-1}, //Mode1
	{ -1,-1,-1}, 
	{800*600*3, 500*3, S200}, //7.5
	{800*600*3, 1000*3, S400}, //15
	{800*600*3, 2000*3, S800}, 
	{800*600*3, 4000*3, S1600}, 

	{ -1,-1,-1}, //Mode2
	{ -1,-1,-1}, 
	{800*600, 500, S100}, //7.5
	{800*600, 1000, S100}, //15
	{800*600, 2000, S200}, //30
	{800*600, 4000, S400}, //60
	
	{1024*768*2, 192*2, S100}, //1.875 Mode3
	{1024*768*2, 384*2, S100}, //3.75
	{1024*768*2, 768*2, S200}, //7.5
	{1024*768*2, 1536*2, S400}, //15
	{1024*768*2, 3072*2, S800},
	{1024*768*2, 6144*2, S1600}, 

	{1024*768*3, 192*3, S100}, //1.875 Mode4
	{1024*768*3, 384*3, S200}, //3.75
	{1024*768*3, 768*3, S400}, //7.5
	{1024*768*3, 1536*3, S800}, //15 
	{1024*768*3, 3072*3, S1600}, //30 
	{1024*768*3, 6144*3, S3200}, 

	{1024*768, 192, S100}, //1.875 Mode4
	{1024*768, 384, S100}, //3.75
	{1024*768, 768, S100}, //7.5
	{1024*768, 1536, S200}, //15
	{1024*768, 3072, S400}, //30
	{1024*768, 6144, S800}, 

	{ -1,-1,-1}, //Mode6
	{800*600*2, 250*2, S100}, //3.75
	{800*600*2, 500*2, S100}, //7.5
	{800*600*2, 1000*2, S200}, //15
	{800*600*2, 2000*2, S400}, //30
	{800*600*2, 4000*2, S800},
       
	{1024*768*2, 192*2, S100}, //1.875 Mode7
	{1024*768*2, 384*2, S100}, //3.75
	{1024*768*2, 768*2, S200}, //7.5
	{1024*768*2, 1536*2, S400}, //15
	{1024*768*2, 3072*2, S800},
	{1024*768*2, 6144*2, S1600}, 
	
	//Format 2
	{1280*960*2, 320*2, S100}, //1.875 Mode0
	{1280*960*2, 640*2, S200}, //3.75
	{1280*960*2, 1280*2, S400}, 
	{1280*960*2, 2560*2, S800}, 
	{1280*960*2, 5120*2, S1600}, 
	{1280*960*2, 10240*2, S3200}, 

	{1280*960*3, 320*3, S100}, //1.875 Mode1
	{1280*960*3, 640*3, S200}, //3.75
	{1280*960*3, 1280*3, S400}, 
	{1280*960*3, 2560*3, S800}, 
	{1280*960*3, 5120*3, S1600}, 
	{1280*960*3, 10240*3, S3200}, 
	
	{1280*960, 320, S100}, //1.875 Mode2
	{1280*960, 640, S100}, //3.75
	{1280*960, 1280, S200}, 
	{1280*960, 2560, S400}, 
	{1280*960, 5120, S800}, 
	{1280*960, 10240, S1600}, 

	{1600*1200*2, 500*2, S100}, //1.875 //Mode3
	{1600*1200*2, 1000*2, S200}, //3.75
	{1600*1200*2, 2000*2, S400}, //7.5
	{1600*1200*2, 4000*2, S800}, 
	{1600*1200*2, 8000*2, S1600}, 
	{1600*1200*2, 16000*2, S3200}, 
	
	{1600*1200*3, 500*3, S200}, //1.875 //Mode4
	{1600*1200*3, 1000*3, S400}, //3.75
	{1600*1200*3, 2000*3, S800}, 
	{1600*1200*3, 4000*3, S1600}, 
	{1600*1200*3, 8000*3, S3200}, 
	{ -1,-1,-1}, 

	{1600*1200, 500, S100}, //1.875 //Mode5
	{1600*1200, 1000, S100}, //3.75
	{1600*1200, 2000, S200}, //7.5
	{1600*1200, 4000, S400}, //7.5
	{1600*1200, 8000, S800}, 
	{1600*1200, 16000, S1600}, 
	
	{1280*960*2, 320*2, S100}, //1.875 Mode6
	{1280*960*2, 640*2, S200}, //3.75
	{1280*960*2, 1280*2, S400}, 
	{1280*960*2, 2560*2, S800}, 
	{1280*960*2, 5120*2, S1600}, 
	{1280*960*2, 10240*2, S3200}, 
	
	{1600*1200*2, 500*2, S100}, //1.875 //Mode7
	{1600*1200*2, 1000*2, S200}, //3.75
	{1600*1200*2, 2000*2, S400}, //7.5
	{1600*1200*2, 4000*2, S800}, 
	{1600*1200*2, 8000*2, S1600}, 
	{1600*1200*2, 16000*2, S3200}, 
};


#endif//__DCAM_ISOCH_TABLE_H__