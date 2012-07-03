/*
Copyright (c) 2010 - Wii Banner Player Project
Copyright (c) 2012 - Dimok

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.
*/

#ifndef _ANIMATEDBANNER_H_
#define _ANIMATEDBANNER_H_

#include "Layout.h"
#include "disc.h"
#include "channel/banner.h"

class AnimatedBanner
{
public:
	AnimatedBanner(u8 *font1, u8 *font2);
	void Clear();

	bool LoadBanner(Banner *banner);
	Layout *getBanner() const { return layout_banner; }

protected:
	Layout* LoadLayout(const u8 *bnr, u32 bnr_size, const std::string& lyt_name, const std::string &language);
	u8 *DecompressCopy( const u8 * stuff, u32 len, u32 *size );
	Layout *layout_banner;
	u8 *newBanner;
	u8 *sysFont1;
	u8 *sysFont2;
	bool first;
};

#endif