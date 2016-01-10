/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
/*
This source file is contained as part of CleanCode Quake2, a project maintained
by Paril, to 'clean up' and make Quake2 an easier source base to read and work with.

You may use any part of this code to help create your own bases and own mods off
this code if you wish. It is under the same license as Quake 2 source (as above),
therefore you are free to have to fun with it. All I ask is you email me so I can
list the mod on my page for CleanCode Quake2 to help get the word around. Thanks.
*/

//
// cc_icarus.h
// Icarus
//

#if !defined(CC_GUARD_ICARUS_H) || !INCLUDE_GUARDS
#define CC_GUARD_ICARUS_H

class CIcarus : public IMonster
{
public:
	enum
	{
		FRAME_stand01,
		FRAME_stand02,
		FRAME_stand03,
		FRAME_stand04,
		FRAME_stand05,
		FRAME_stand06,
		FRAME_stand07,
		FRAME_stand08,
		FRAME_stand09,
		FRAME_stand10,
		FRAME_stand11,
		FRAME_stand12,
		FRAME_stand13,
		FRAME_stand14,
		FRAME_stand15,
		FRAME_stand16,
		FRAME_stand17,
		FRAME_stand18,
		FRAME_stand19,
		FRAME_stand20,
		FRAME_stand21,
		FRAME_stand22,
		FRAME_stand23,
		FRAME_stand24,
		FRAME_stand25,
		FRAME_stand26,
		FRAME_stand27,
		FRAME_stand28,
		FRAME_stand29,
		FRAME_stand30,
		FRAME_forwrd01,
		FRAME_forwrd02,
		FRAME_forwrd03,
		FRAME_forwrd04,
		FRAME_forwrd05,
		FRAME_forwrd06,
		FRAME_forwrd07,
		FRAME_forwrd08,
		FRAME_forwrd09,
		FRAME_forwrd10,
		FRAME_forwrd11,
		FRAME_forwrd12,
		FRAME_forwrd13,
		FRAME_forwrd14,
		FRAME_forwrd15,
		FRAME_forwrd16,
		FRAME_forwrd17,
		FRAME_forwrd18,
		FRAME_forwrd19,
		FRAME_forwrd20,
		FRAME_forwrd21,
		FRAME_forwrd22,
		FRAME_forwrd23,
		FRAME_forwrd24,
		FRAME_forwrd25,
		FRAME_forwrd26,
		FRAME_forwrd27,
		FRAME_forwrd28,
		FRAME_forwrd29,
		FRAME_forwrd30,
		FRAME_forwrd31,
		FRAME_forwrd32,
		FRAME_forwrd33,
		FRAME_forwrd34,
		FRAME_forwrd35,
		FRAME_stop101,
		FRAME_stop102,
		FRAME_stop103,
		FRAME_stop104,
		FRAME_stop105,
		FRAME_stop106,
		FRAME_stop107,
		FRAME_stop108,
		FRAME_stop109,
		FRAME_stop201,
		FRAME_stop202,
		FRAME_stop203,
		FRAME_stop204,
		FRAME_stop205,
		FRAME_stop206,
		FRAME_stop207,
		FRAME_stop208,
		FRAME_takeof01,
		FRAME_takeof02,
		FRAME_takeof03,
		FRAME_takeof04,
		FRAME_takeof05,
		FRAME_takeof06,
		FRAME_takeof07,
		FRAME_takeof08,
		FRAME_takeof09,
		FRAME_takeof10,
		FRAME_takeof11,
		FRAME_takeof12,
		FRAME_takeof13,
		FRAME_takeof14,
		FRAME_takeof15,
		FRAME_takeof16,
		FRAME_takeof17,
		FRAME_takeof18,
		FRAME_takeof19,
		FRAME_takeof20,
		FRAME_takeof21,
		FRAME_takeof22,
		FRAME_takeof23,
		FRAME_takeof24,
		FRAME_takeof25,
		FRAME_takeof26,
		FRAME_takeof27,
		FRAME_takeof28,
		FRAME_takeof29,
		FRAME_takeof30,
		FRAME_land01,
		FRAME_pain101,
		FRAME_pain102,
		FRAME_pain103,
		FRAME_pain104,
		FRAME_pain105,
		FRAME_pain106,
		FRAME_pain107,
		FRAME_pain108,
		FRAME_pain109,
		FRAME_pain110,
		FRAME_pain111,
		FRAME_pain112,
		FRAME_pain113,
		FRAME_pain114,
		FRAME_pain115,
		FRAME_pain116,
		FRAME_pain117,
		FRAME_pain118,
		FRAME_pain119,
		FRAME_pain120,
		FRAME_pain121,
		FRAME_pain122,
		FRAME_pain123,
		FRAME_pain124,
		FRAME_pain125,
		FRAME_pain126,
		FRAME_pain127,
		FRAME_pain128,
		FRAME_pain201,
		FRAME_pain202,
		FRAME_pain203,
		FRAME_pain204,
		FRAME_pain205,
		FRAME_pain206,
		FRAME_pain207,
		FRAME_pain208,
		FRAME_pain209,
		FRAME_pain210,
		FRAME_pain211,
		FRAME_pain212,
		FRAME_pain301,
		FRAME_pain302,
		FRAME_pain303,
		FRAME_pain304,
		FRAME_pain305,
		FRAME_pain306,
		FRAME_pain307,
		FRAME_pain308,
		FRAME_pain309,
		FRAME_death101,
		FRAME_death102,
		FRAME_death103,
		FRAME_death104,
		FRAME_death105,
		FRAME_death106,
		FRAME_death107,
		FRAME_death108,
		FRAME_death109,
		FRAME_death110,
		FRAME_death111,
		FRAME_backwd01,
		FRAME_backwd02,
		FRAME_backwd03,
		FRAME_backwd04,
		FRAME_backwd05,
		FRAME_backwd06,
		FRAME_backwd07,
		FRAME_backwd08,
		FRAME_backwd09,
		FRAME_backwd10,
		FRAME_backwd11,
		FRAME_backwd12,
		FRAME_backwd13,
		FRAME_backwd14,
		FRAME_backwd15,
		FRAME_backwd16,
		FRAME_backwd17,
		FRAME_backwd18,
		FRAME_backwd19,
		FRAME_backwd20,
		FRAME_backwd21,
		FRAME_backwd22,
		FRAME_backwd23,
		FRAME_backwd24,
		FRAME_attak101,
		FRAME_attak102,
		FRAME_attak103,
		FRAME_attak104,
		FRAME_attak105,
		FRAME_attak106,
		FRAME_attak107,
		FRAME_attak108,
	};

	FrameNumber		TimeStamp;
	virtual inline const char	*GetMonsterName() { return "Icarus"; }

	MONSTER_SOUND_ENUM
	(
		SOUND_PAIN1,
		SOUND_PAIN2,
		SOUND_DEATH1,
		SOUND_DEATH2,
		SOUND_SIGHT,
		SOUND_SEARCH1,
		SOUND_SEARCH2,

		SOUND_MAX
	);

	CIcarus (uint32 ID);

	void SaveMonsterFields (CFile &File)
	{
		SAVE_MONSTER_SOUNDS
		File.Write<FrameNumber> (TimeStamp);
	}
	void LoadMonsterFields (CFile &File)
	{
		LOAD_MONSTER_SOUNDS
		TimeStamp = File.Read<FrameNumber> ();
	}

	void ReAttack ();
	ROGUE_VIRTUAL void FireBlaster ();
	void DeadThink ();
	void StartAttack ();

	void Attack ();
	void Run ();
	void Sight ();
	void Stand ();
	void Walk ();
	void Search ();

	void Dead ();
	void Die (IBaseEntity *Inflictor, IBaseEntity *Attacker, sint32 Damage, vec3f &Point);
	void Pain (IBaseEntity *Other, sint32 Damage);

	ROGUE_VIRTUAL void Spawn ();
	
	MONSTER_ID_HEADER
};

#else
FILE_WARNING
#endif