/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2014-2015 by Michael Kohn
 *
 */

#ifndef _API_ATARI_2600_H
#define _API_ATARI_2600_H

class API_Atari2600
{
public:
  virtual int atari2600_waitHsync() { return -1; }
  virtual int atari2600_startVblank() { return -1; }
  virtual int atari2600_waitVblank() { return -1; }
  virtual int atari2600_startOverscan() { return -1; }
  virtual int atari2600_waitOverscan() { return -1; }
  virtual int atari2600_setColorPlayer0() { return -1; }
  virtual int atari2600_setColorPlayer0(int color) { return -1; }
  virtual int atari2600_setColorPlayer1() { return -1; }
  virtual int atari2600_setColorPlayer1(int color) { return -1; }
  virtual int atari2600_setColorPlayfield() { return -1; }
  virtual int atari2600_setColorPlayfield(int color) { return -1; }
  virtual int atari2600_setColorBackground() { return -1; }
  virtual int atari2600_setColorBackground(int color) { return -1; }

  virtual int atari2600_resetPlayer0() { return -1; }
  virtual int atari2600_resetPlayer1() { return -1; }
  virtual int atari2600_resetMissile0() { return -1; }
  virtual int atari2600_resetMissile1() { return -1; }
  virtual int atari2600_resetBall() { return -1; }
  virtual int atari2600_resetMissile0ToPlayer0On() { return -1; }
  virtual int atari2600_resetMissile1ToPlayer1On() { return -1; }
  virtual int atari2600_resetMissile0ToPlayer0Off() { return -1; }
  virtual int atari2600_resetMissile1ToPlayer1Off() { return -1; }
  virtual int atari2600_applyHorizontalMotion() { return -1; }
  virtual int atari2600_clearMotionRegisters() { return -1; }
  virtual int atari2600_clearCollisionLatches() { return -1; }

  virtual int atari2600_enableMissile0() { return -1; }
  virtual int atari2600_enableMissile1() { return -1; }
  virtual int atari2600_enableBall() { return -1; }
  virtual int atari2600_disableMissile0() { return -1; }
  virtual int atari2600_disableMissile1() { return -1; }
  virtual int atari2600_disableBall() { return -1; }

  virtual int atari2600_enablePlayer0Reflect() { return -1; }
  virtual int atari2600_enablePlayer1Reflect() { return -1; }
  virtual int atari2600_disablePlayer0Reflect() { return -1; }
  virtual int atari2600_disablePlayer1Reflect() { return -1; }
};

#endif

