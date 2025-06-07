# Majo [魔女] - Pre

Majo (working name), is a little [Legend of Zelda](https://en.wikipedia.org/wiki/The_Legend_of_Zelda) / [Hyper Light Drifter](https://www.youtube.com/watch?v=nWufEJ1Ava0)-like game in [HaxeFlixel](https://haxeflixel.com/).

### Development

```bash
$ lime test window -debug
```

### Controls

#### PlayStation

```
X - Dash (You can chain them infinitely if you get the timing right)
□ - Melee Attack
○ - Ranged/secondary weapon attack
△ - Change ranged/secondary weapon (Seems like you can only hold 2 max)
LB - Not sure. Makes a white pulsing box appear. Seems like it's just a way to make the HP and ammo bars appear.
RB - Check progress/secrets found
LT - Aim with ranged weapon
RT - ???

Hold □ - Regular attack followed by a charged slash.
X+□ (Dash+Melee) - Lunging attack. Stuns some enemies. Disables shields in one strike.
```

#### PC

```
WASD - moving
space - dash
left click-primary weapon (sword)
right click - secondary weapon
the cursor/pointer also controls the direction of your dash, and your guns
Q - HP/ammo bars (?)
E - switch weapon
R - check progress
```

### Sprite index

#### pixivan free

_Side_

```
0         : side base
1 - 9     : side bow attack
10        : side bow base
11 - 14   : side dash
15 - 18   : side hit
19 - 28   : side roll
29 - 30   : side sheate (sheath)
31 - 36   : side slash 1
37 - 42   : side slash 2
43 - 45   : side unseate (unsheath)
46 - 51   : side walk
```

_Front / Down_

```
52        : front bow base
53        : front base
54 - 62   : font bow attack
63 - 66   : front dash
67 - 70   : front hit
71 - 80   : front roll
81 - 82   : front sheate (sheath)
83 - 88   : front slash 1
89 - 94   : front slash 2
95 - 97   : front unsheate (unsheath)
98 - 103  : front walk
```

_Back / Up_

```
104       : back base
105 - 113 : back bow attack
114       : back bow base
115 - 118 : back bow dash
119 - 122 : back hit
123 - 132 : back roll
133 - 134 : back sheate (sheath)
135 - 140 : back slash 1
141 - 146 : back slash 2
147 - 149 : bach unsheate (unsheath)
150 - 155 : back walk
```
