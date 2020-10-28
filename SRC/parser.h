/* *******************************************************************
*  file: Interpreter.h , Command interpreter module. Part of DIKUMUD *
*  Usage: Procedures interpreting user command                       *
******************************************************************** */

void command_interpreter(struct char_data * ch, char *argument);
extern const char *command[];

int search_block(char *arg, const char *list[], bool exact);
int old_search_block(char *argument, int begin, int length, const char *list[], int mode);
char lower(char c);
void argument_interpreter(char *argument, char *first_arg, char *second_arg);
char *one_argument(char *argument, char *first_arg);
int fill_word(char *argument);
void half_chop(char *string, char *arg1, char *arg2);
void nanny(struct descriptor_data * d, char *arg);
int is_abbrev(char *arg1, char *arg2);
int is_number(char *str);
int special(struct char_data * ch, int cmd, char *arg);
void do_welcome_back(struct char_data * ch);
char *do_how_left_text(struct char_data * ch, int lv_how_left);
void pa8000_enter_game(struct descriptor_data * d);
int sr3000_is_name_secure(char *arg);


#define ENABLED_CMD  BIT0
#define ALLOWMOB     BIT1

struct command_info {
	void (*command_pointer) (struct char_data * ch, char *argument, int cmd);
	ubyte minimum_position;
	ubyte minimum_level;
	ubyte cmd_flag;
	ubyte wiz_flags;
};

extern struct command_info cmd_info[];

#define WIZ_MEDIATOR_PERM 	BIT0
#define WIZ_QUESTOR_PERM 	BIT1
#define WIZ_RULER_PERM 		BIT2
#define WIZ_BUILDER_PERM	BIT3

#define MAX_CMD_LIST   486

#define CMD_NORTH       1
#define CMD_EAST        2
#define CMD_SOUTH       3
#define CMD_WEST        4
#define CMD_UP          5
#define CMD_DOWN        6
#define CMD_NORTHEAST   7
#define CMD_SOUTHEAST   8
#define CMD_SOUTHWEST   9
#define CMD_NORTHWEST  10
#define CMD_DRINK      11
#define CMD_EAT        12
#define CMD_WEAR       13
#define CMD_SCORE      14
#define CMD_LOOK       15
#define CMD_1          16
#define CMD_SAY        17
#define CMD_SHOUT      18
#define CMD_TELL       19
#define CMD_INVENTORY  20
#define CMD_QUI        21
#define CMD_BOUNCE     22
#define CMD_SMILE      23
#define CMD_DANCE      24
#define CMD_KILL       25	/* VIOLENCE */
#define CMD_CACKLE     26
#define CMD_LAUGH      27
#define CMD_GIGGLE     28
#define CMD_SHAKE      29
#define CMD_TODO       30
#define CMD_GROWL      31
#define CMD_SCREAM     32
#define CMD_INSULT     33
#define CMD_COMFORT    34
#define CMD_NOD        35
#define CMD_SIGH       36
#define CMD_SULK       37
#define CMD_HELP       38
#define CMD_WHO        39
#define CMD_EMOTE      40
#define CMD_ECHO       41
#define CMD_STAND      42
#define CMD_SIT        43
#define CMD_REST       44
#define CMD_SLEEP      45
#define CMD_WAKE       46
#define CMD_FORCE      47
#define CMD_TRANSFER   48
#define CMD_HUG        49
#define CMD_SNUGGLE    50
#define CMD_CUDDLE     51
#define CMD_NUZZLE     52
#define CMD_CRY        53
#define CMD_NEWS       54
#define CMD_EQUIPMENT  55
#define CMD_BUY        56
#define CMD_SELL       57
#define CMD_VALUE      58
#define CMD_LIST       59
#define CMD_DROP       60
#define CMD_GOTO       61
#define CMD_WEATHER    62
#define CMD_READ       63
#define CMD_POUR       64
#define CMD_GRAB       65
#define CMD_REMOVE     66
#define CMD_PUT        67
#define CMD_SHUTDOW    68
#define CMD_SAVE       69
#define CMD_HIT        70	/* VIOLENCE */
#define CMD_STRING     71
#define CMD_GIVE       72
#define CMD_QUIT       73
#define CMD_STAT       74
#define CMD_SET        75
#define CMD_TIME       76
#define CMD_LOAD       77
#define CMD_PURGE      78
#define CMD_SHUTDOWN   79
#define CMD_IDEA       80
#define CMD_TYPO       81
#define CMD_BUG        82
#define CMD_WHISPER    83
#define CMD_CAST       84
#define CMD_AT         85
#define CMD_ASK        86
#define CMD_ORDER      87
#define CMD_SIP        88
#define CMD_TASTE      89
#define CMD_SNOOP      90
#define CMD_FOLLOW     91
#define CMD_RENT       92
#define CMD_OFFER      93
#define CMD_POKE       94
#define CMD_ADVANCE    95
#define CMD_ACCUSE     96
#define CMD_GRIN       97
#define CMD_BOW        98
#define CMD_OPEN       99
#define CMD_CLOSE     100
#define CMD_LOCK      101
#define CMD_UNLOCK    102
#define CMD_LEAVE     103
#define CMD_APPLAUD   104
#define CMD_BLUSH     105
#define CMD_BURP      106
#define CMD_CHUCKLE   107
#define CMD_CLAP      108
#define CMD_COUGH     109
#define CMD_CURTSEY   110
#define CMD_FART      111
#define CMD_FLIP      112
#define CMD_FONDLE    113
#define CMD_FROWN     114
#define CMD_GASP      115
#define CMD_GLARE     116
#define CMD_GROAN     117
#define CMD_GROPE     118
#define CMD_HICCUP    119
#define CMD_LICK      120
#define CMD_LOVE      121
#define CMD_MOAN      122
#define CMD_NIBBLE    123
#define CMD_POUT      124
#define CMD_PURR      125
#define CMD_RUFFLE    126
#define CMD_SHIVER    127
#define CMD_SHRUG     128
#define CMD_SING      129
#define CMD_SLAP      130
#define CMD_SMIRK     131
#define CMD_SNAP      132
#define CMD_SNEEZE    133
#define CMD_SNICKER   134
#define CMD_SNIFF     135
#define CMD_SNORE     136
#define CMD_SPIT      137
#define CMD_SQUEEZE   138
#define CMD_STARE     139
#define CMD_STRUT     140
#define CMD_THANK     141
#define CMD_TWIDDLE   142
#define CMD_WAVE      143
#define CMD_WHISTLE   144
#define CMD_WIGGLE    145
#define CMD_WINK      146
#define CMD_YAWN      147
#define CMD_SNOWBALL  148
#define CMD_WRITE     149
#define CMD_HOLD      150
#define CMD_FLEE      151
#define CMD_SNEAK     152
#define CMD_HIDE      153
#define CMD_BACKSTAB  154	/* VIOLENCE */
#define CMD_PICK      155
#define CMD_STEAL     156
#define CMD_BASH      157	/* VIOLENCE */
#define CMD_RESCUE    158
#define CMD_KICK      159	/* VIOLENCE */
#define CMD_FRENCH    160
#define CMD_COMB      161
#define CMD_MASSAGE   162
#define CMD_TICKLE    163
#define CMD_PRACTICE  164
#define CMD_PAT       165
#define CMD_EXAMINE   166
#define CMD_TAKE      167
#define CMD_INFO      168
#define CMD_emote     169
#define CMD_XYZZY     170
#define CMD_CURSE     171
#define CMD_USE       172
#define CMD_WHERE     173
#define CMD_WHERERENT 174
#define CMD_REROLL    175
#define CMD_PRAY      176
#define CMD_say       177
#define CMD_BEG       178
#define CMD_BLEED     179
#define CMD_CRINGE    180
#define CMD_DAYDREAM  181
#define CMD_FUME      182
#define CMD_GROVEL    183
#define CMD_HOP       184
#define CMD_NUDGE     185
#define CMD_FINGER    186
#define CMD_POINT     187
#define CMD_PONDER    188
#define CMD_PUNCH     189
#define CMD_SNARL     190
#define CMD_SPANK     191
#define CMD_STEAM     192
#define CMD_TACKLE    193
#define CMD_TAUNT     194
#define CMD_THINK     195
#define CMD_WHINE     196
#define CMD_WORSHIP   197
#define CMD_YODEL     198
#define CMD_WIZ       199
#define CMD_WIZLIST   200
#define CMD_CONSIDER  201
#define CMD_GROUP     202
#define CMD_RESTORE   203
#define CMD_RETURN    204
#define CMD_SWITCH    205
#define CMD_QUAFF     206
#define CMD_RECITE    207
#define CMD_USERS     208
#define CMD_POSE      209
#define CMD_SYA       210
#define CMD_WIZHELP   211
#define CMD_CREDITS   212
#define CMD_COMPACT   213
#define CMD_TITLE     214
#define CMD_JUNK      215
#define CMD_SPELLS    216
#define CMD_BREATH    217	/* VIOLENCE */
#define CMD_VISIBLE   218
#define CMD_WITHDRAW  219
#define CMD_DEPOSIT   220
#define CMD_BALANCE   221
#define CMD_RHELP     222
#define CMD_RCOPY     223
#define CMD_RLINK     224
#define CMD_RSECT     225
#define CMD_RFLAG     226
#define CMD_RDESC     227
#define CMD_RSAVE     228
#define CMD_RNAME     229
#define CMD_RLFLAG    230
#define CMD_RLIST     231
#define CMD_GOSSIP    232
#define CMD_IMMTALK   233
#define CMD_AUCTION   234
#define CMD_POOFIN    235
#define CMD_POOFOUT   236
#define CMD_ANSI      237
#define CMD_CHANNEL   238
#define CMD_OLIST     239
#define CMD_MLIST     240
#define CMD_OFLAG     241
#define CMD_NOGOSSIP  242
#define CMD_FREEZE    243
#define CMD_JAIL      244
#define CMD_RACES     245
#define CMD_OSTAT     246
#define CMD_COMMANDS  247
#define CMD_MFLAG     248
#define CMD_OSAVE     249
#define CMD_MSAVE     250
#define CMD_MSTAT     251
#define CMD_MAFFECT   252
#define CMD_RGOTO     253
#define CMD_RSTAT     254
#define CMD_MUTTER    255
#define CMD_HUNT      256
#define CMD_TRACK     257
#define CMD_ASSIST    258
#define CMD_WIMPY     259
#define CMD_VNUM      260
#define CMD_DISPLAY   261
#define CMD_OWFLAG    262
#define CMD_OVALUES   263
#define CMD_ZLIST     264
#define CMD_OCOST     265
#define CMD_ORENT     266
#define CMD_OWEIGHT   267
#define CMD_OKEYWORDS 268
#define CMD_OTYPE     269
#define CMD_OSDESC    270
#define CMD_OLDESC    271
#define CMD_OWEAR     272
#define CMD_OAFFECT   273
#define CMD_OCREATE   274
#define CMD_MSDESC    275
#define CMD_MLDESC    276
#define CMD_MDESC     277
#define CMD_BOARD     278
#define CMD_ZSET      279
#define CMD_MTHACO    280
#define CMD_MHITPTS   281
#define CMD_MDAMAGE   282
#define CMD_MSET      283
#define CMD_WIELD     284
#define CMD_undefined 285
#define CMD_MCREATE   286
#define CMD_ZRESET    287
#define CMD_MKEYWORDS 288
#define CMD_BRIEF     289
#define CMD_INVISIBLE 290
#define CMD_CRASHSAVE 291
#define CMD_MUZZLE    292
#define CMD_ZEDIT     293
#define CMD_BAN       294
#define CMD_UNBAN     295
#define CMD_DISCONNECT 296
#define CMD_CLASSES   297
#define CMD_SPLIT     298
#define CMD_AUTO      299
#define CMD_ZCREATE   300
#define CMD_ZSAVE     301
#define CMD_MSEX      302
#define CMD_ZFIRST    303
#define CMD_ZREBOOT   304
#define CMD_ZMAX      305
#define CMD_ZSTAT     306
#define CMD_ZFLAG     307
#define CMD_REDESC    308
#define CMD_OEDESC    309
#define CMD_SPEEDWALK 310
#define CMD_OHELP     311
#define CMD_MHELP     312
#define CMD_BEARHUG   313
#define CMD_BLINK     314
#define CMD_CHEER     315
#define CMD_TWIRL     316
#define CMD_DESIRE    317
#define CMD_EYEROLL   318
#define CMD_MELT      319
#define CMD_FLEX      320
#define CMD_FLOWERS   321
#define CMD_HIGH      322
#define CMD_HOWL      323
#define CMD_MOO       324
#define CMD_MOURN     325
#define CMD_SALUTE    326
#define CMD_STAGGER   327
#define CMD_TAP       328
#define CMD_WHIMPER   329
#define CMD_WISH      330
#define CMD_YOYO      331
#define CMD_ADMIRE    332
#define CMD_SCRATCH   333
#define CMD_FAINT     334
#define CMD_GRUMBLE   335
#define CMD_RAISE     336
#define CMD_BOGGLE    337
#define CMD_LIGHT     338
#define CMD_QUESTION  339
#define CMD_xxx       340
#define CMD_WOO       341
#define CMD_HALT      342
#define CMD_NOHASSLE  343
#define CMD_PORT      344
#define CMD_DONATE    345
#define CMD_ALIAS     346
#define CMD_GECHO     347
#define CMD_GROUP_TELL 348
#define CMD_EMPTY     349
#define CMD_SYSTEM    350
#define CMD_DISABLE   351
#define CMD_SAT       352
#define CMD_LAG       353
#define CMD_ATTRIBUTE 354
#define CMD_BEEP      355
#define CMD_SCAN      356
#define CMD_SHUDDER   357
#define CMD_EYEPOKE   358
#define CMD_WHAP      359
#define CMD_DATE      360
#define CMD_SYSLOG    361
#define CMD_RLEVEL    362
#define CMD_HEAL      363
#define CMD_DIAG      364
#define CMD_OMAX      365
#define CMD_AFK       366
#define CMD_HIGH5     367
#define CMD_ANTED     368
#define CMD_AVATAR    369
#define CMD_ENTER     370
#define CMD_EXITS     371
#define CMD_KISS      372
#define CMD_GET       373
#define CMD_FILL      374
#define CMD_COLOR     375
#define CMD_WIPE      376
#define CMD_LEVELS    377
#define CMD_DELETE    378
#define CMD_MSKILL    379
#define CMD_MATTACK   380
#define CMD_ZHELP     381
#define CMD_PUSH      382
#define CMD_PULL      383
#define CMD_CLIMB     384
#define CMD_OCOPY     385
#define CMD_GO30      386
#define CMD_PN        387
#define CMD_PS        388
#define CMD_PE        389
#define CMD_PW        390
#define CMD_PU        391
#define CMD_PD        392
#define CMD_PEER      393
#define CMD_PUKE      394
#define CMD_BLESS     395
#define CMD_RAGE      396
#define CMD_MOSH      397
#define CMD_SLAM      398
#define CMD_EMAIL     399
#define CMD_IMP       400
#define CMD_REPLY     401
#define CMD_BRB       402
#define CMD_AGREE     403
#define CMD_STRIKE    404
#define CMD_WROSE     405
#define CMD_RROSE     406
#define CMD_REPORT    407
#define CMD_SENSE     408
#define CMD_FIND      409
#define CMD_ESCAPE    410
#define CMD_PEEK      411
#define CMD_PEACE     412
#define CMD_CLAN      413
#define CMD_CLAN_TELL 414
#define CMD_TOP	      415
#define CMD_OVER      416
#define CMD_NWIZLIST  417
#define CMD_RUSHTIME  418
#define CMD_RUSHHOUR  419
#define CMD_MEDITATE  420
#define CMD_DOFOR     421
#define CMD_BECHO     422
#define CMD_BID       423
#define CMD_CANCEL    424
#define CMD_QUEST     425
#define CMD_ADMIN     426
#define CMD_OEDIT     427
#define CMD_SHOOT     428
#define CMD_MAIL      429
#define CMD_FORGET    430
#define CMD_WAR	      431
#define CMD_MQUESTKEY 432
#define CMD_MQUESTSAY 433
#define CMD_QSAVE     434
#define CMD_MQUESTCMD 435
#define CMD_REQUEST   436
#define CMD_IGNORE    437
#define CMD_WTF       438
#define CMD_BONK      439
#define CMD_HMM       440
#define CMD_DOH       441
#define CMD_PARTY     442
#define CMD_ROTFL     443
#define CMD_WANK      444
#define CMD_HUMP      445
#define CMD_MUHAHA    446
#define CMD_BKISS     447
#define CMD_HKISS     448
#define CMD_BOO       449
#define CMD_FKILL     450
#define CMD_DREAM     451
#define CMD_NOG       452
#define CMD_FLASH     453
#define CMD_WONDER    454
#define CMD_MOUNT     455
#define CMD_DUH       456
#define CMD_BLEET     457
#define CMD_BAHA      458
#define CMD_MFEAR     459
#define CMD_JIG       460
#define CMD_AIRWALK   461
#define CMD_RIDE      462
#define CMD_DISMOUNT  463
#define CMD_AFW       464
#define CMD_QSYS      465
#define CMD_QTESTCMD  466
#define CMD_OSET      467
#define CMD_OTRANSFER 468
#define CMD_INCOGNITO 469
#define CMD_GHOST     470
#define CMD_LOGVIEW   471
#define CMD_LOGSEARCH 472
#define CMD_MUSIC     473
#define CMD_OCLASS    474
#define CMD_ADHERE    475
#define CMD_PKFLAME   476
#define CMD_ENVENOM   479
#define CMD_SPIRIT    480
#define CMD_STAB      481
#define CMD_BACKUP    482
#define CMD_REPLENISH 483
#define CMD_BOUNTY    484
#define CMD_QMSALES   485
/*#define CMD_FLURRY    486*/

/* Virtual commands */
#define CMD_CLAN_DONATE  1000
#define CMD_COUNTER      1001
#define CMD_CANCEL_DEAD  1002
