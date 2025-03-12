//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 90
        .doubleBattle = FALSE,
#line 91
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 98
        .trainerName = _("GRUNT"),
#line 99
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 100
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 103
        .doubleBattle = FALSE,
#line 104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 110
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 111
        .trainerName = _("GRUNT"),
#line 112
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 113
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 115
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 116
        .doubleBattle = FALSE,
#line 117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 120
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 123
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 127
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 128
        .trainerName = _("GRUNT"),
#line 129
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 130
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 132
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 133
        .doubleBattle = FALSE,
#line 134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 136
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 140
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 141
        .trainerName = _("GRUNT"),
#line 142
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 143
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 145
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 146
        .doubleBattle = FALSE,
#line 147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 149
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 150
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 153
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 154
        .trainerName = _("GRUNT"),
#line 155
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 156
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 158
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 159
        .doubleBattle = FALSE,
#line 160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 162
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 163
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 166
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 167
        .trainerName = _("GRUNT"),
#line 168
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 169
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 171
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 172
        .doubleBattle = FALSE,
#line 173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 175
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 176
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 179
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 180
        .trainerName = _("GRUNT"),
#line 181
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 182
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 184
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 185
        .doubleBattle = FALSE,
#line 186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 188
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 189
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 192
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_1] =
    {
#line 193
        .trainerName = _("GABRIELLE"),
#line 194
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 195
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 196
F_TRAINER_FEMALE | 
#line 197
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 198
        .doubleBattle = FALSE,
#line 199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 201
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 202
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 205
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 206
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 209
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 210
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 213
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 214
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 217
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 218
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 221
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 222
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 225
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 226
        .trainerName = _("GRUNT"),
#line 227
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 228
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 230
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 231
        .doubleBattle = FALSE,
#line 232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 234
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 235
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 238
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 239
        .trainerName = _("MARCEL"),
#line 240
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 241
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 243
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 244
        .items = { ITEM_HYPER_POTION },
#line 245
        .doubleBattle = FALSE,
#line 246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 248
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 250
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 249
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 252
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 253
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 256
    [DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
    {
#line 257
        .trainerName = _("ALBERTO"),
#line 258
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 259
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 261
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 262
        .doubleBattle = FALSE,
#line 263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 265
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 266
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 269
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 270
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 273
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 274
        .trainerName = _("ED"),
#line 275
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 276
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 278
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 279
        .doubleBattle = FALSE,
#line 280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 283
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 286
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 287
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 290
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 291
        .trainerName = _("GRUNT"),
#line 292
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 293
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 294
F_TRAINER_FEMALE | 
#line 295
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 296
        .doubleBattle = FALSE,
#line 297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 299
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 300
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 303
    [DIFFICULTY_NORMAL][TRAINER_DECLAN] =
    {
#line 304
        .trainerName = _("DECLAN"),
#line 305
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 306
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 308
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 309
        .doubleBattle = FALSE,
#line 310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 312
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 313
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 316
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 317
        .trainerName = _("GRUNT"),
#line 318
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 319
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 321
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 322
        .doubleBattle = FALSE,
#line 323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 325
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 326
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 329
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 330
        .trainerName = _("GRUNT"),
#line 331
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 332
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 334
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 335
        .doubleBattle = FALSE,
#line 336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 338
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 339
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 342
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 343
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 346
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 347
        .trainerName = _("GRUNT"),
#line 348
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 349
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 351
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 352
        .doubleBattle = FALSE,
#line 353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 355
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 356
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 359
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 360
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 363
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 364
        .trainerName = _("GRUNT"),
#line 365
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 366
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 368
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 369
        .doubleBattle = FALSE,
#line 370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 372
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 373
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 376
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 377
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 380
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 381
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 384
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 385
        .trainerName = _("GRUNT"),
#line 386
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 387
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 389
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 390
        .doubleBattle = FALSE,
#line 391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 393
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 394
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 397
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 398
        .trainerName = _("GRUNT"),
#line 399
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 400
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 402
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 403
        .doubleBattle = FALSE,
#line 404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 406
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 407
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 410
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 411
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 414
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 415
        .trainerName = _("GRUNT"),
#line 416
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 417
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 419
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 420
        .doubleBattle = FALSE,
#line 421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 423
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 424
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 427
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 428
        .trainerName = _("GRUNT"),
#line 429
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 430
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 432
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 433
        .doubleBattle = FALSE,
#line 434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 436
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 437
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 440
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 441
        .trainerName = _("GRUNT"),
#line 442
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 443
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 445
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 446
        .doubleBattle = FALSE,
#line 447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 449
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 450
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 453
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 454
        .trainerName = _("GRUNT"),
#line 455
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 456
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 458
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 459
        .doubleBattle = FALSE,
#line 460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 462
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 463
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 466
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 467
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 470
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 471
        .trainerName = _("GRUNT"),
#line 472
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 473
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 474
F_TRAINER_FEMALE | 
#line 475
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 476
        .doubleBattle = FALSE,
#line 477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 479
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 480
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 483
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 484
        .trainerName = _("GRUNT"),
#line 485
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 486
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 487
F_TRAINER_FEMALE | 
#line 488
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 489
        .doubleBattle = FALSE,
#line 490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 492
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 493
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 496
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 497
        .trainerName = _("GRUNT"),
#line 498
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 499
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 500
F_TRAINER_FEMALE | 
#line 501
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 502
        .doubleBattle = FALSE,
#line 503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 505
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 506
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 509
    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
#line 510
        .trainerName = _("FREDRICK"),
#line 511
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 512
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 514
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 515
        .doubleBattle = FALSE,
#line 516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 518
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 519
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 522
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 524
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 523
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 526
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 527
        .trainerName = _("MATT"),
#line 528
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 529
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 531
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 532
        .items = { ITEM_SUPER_POTION },
#line 533
        .doubleBattle = FALSE,
#line 534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 536
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 537
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 540
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 541
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 544
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 545
        .trainerName = _("ZANDER"),
#line 546
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 547
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 549
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 550
        .doubleBattle = FALSE,
#line 551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 553
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 554
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 557
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 558
        .trainerName = _("SHELLY"),
#line 559
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 560
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 561
F_TRAINER_FEMALE | 
#line 562
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 563
        .doubleBattle = FALSE,
#line 564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 566
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 567
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 570
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 572
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 571
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 574
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 575
        .trainerName = _("SHELLY"),
#line 576
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 577
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 578
F_TRAINER_FEMALE | 
#line 579
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 580
        .doubleBattle = FALSE,
#line 581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 583
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 584
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 587
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 589
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 588
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 591
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 592
        .trainerName = _("ARCHIE"),
#line 593
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 594
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 596
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 597
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 598
        .doubleBattle = FALSE,
#line 599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 601
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 603
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 602
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 605
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 606
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 609
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 611
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 610
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 613
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 614
        .trainerName = _("LEAH"),
#line 615
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 616
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 617
F_TRAINER_FEMALE | 
#line 618
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 619
        .doubleBattle = FALSE,
#line 620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 622
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 623
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 626
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 627
        .trainerName = _("DAISY"),
#line 628
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 629
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 630
F_TRAINER_FEMALE | 
#line 631
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 632
        .doubleBattle = FALSE,
#line 633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 635
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 636
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 639
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 640
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 643
    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
#line 644
        .trainerName = _("ROSE"),
#line 645
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 646
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 647
F_TRAINER_FEMALE | 
#line 648
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 649
        .doubleBattle = FALSE,
#line 650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 652
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 653
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 656
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 657
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 660
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 661
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 664
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 665
        .trainerName = _("FELIX"),
#line 666
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 667
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 669
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 670
        .items = { ITEM_FULL_RESTORE },
#line 671
        .doubleBattle = FALSE,
#line 672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 674
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 675
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 677
                MOVE_PSYCHIC,
            },
            },
            {
#line 679
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 680
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 682
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 685
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 686
        .trainerName = _("VIOLET"),
#line 687
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 688
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 689
F_TRAINER_FEMALE | 
#line 690
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 691
        .doubleBattle = FALSE,
#line 692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 694
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 695
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 698
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 699
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 702
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
#line 703
        .trainerName = _("DUSTY"),
#line 704
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 705
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 707
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 708
        .doubleBattle = FALSE,
#line 709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 711
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 713
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 712
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 714
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 719
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 720
        .trainerName = _("CHIP"),
#line 721
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 722
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 724
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 725
        .doubleBattle = FALSE,
#line 726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 728
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 729
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 731
                MOVE_PSYBEAM,
                MOVE_SELF_DESTRUCT,
                MOVE_SANDSTORM,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 736
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 737
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 739
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 744
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 746
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 745
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 747
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 752
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 753
        .trainerName = _("FOSTER"),
#line 754
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 755
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 757
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 758
        .doubleBattle = FALSE,
#line 759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 761
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 762
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 764
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 769
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 771
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 770
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 772
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 777
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
    {
#line 778
        .trainerName = _("GABBY & TY"),
#line 779
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 780
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 782
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 783
        .doubleBattle = TRUE,
#line 784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 786
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 788
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 787
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 790
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 792
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 791
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 794
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
    {
#line 795
        .trainerName = _("GABBY & TY"),
#line 796
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 797
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 799
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 800
        .doubleBattle = TRUE,
#line 801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 803
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 804
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 807
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 809
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 808
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 811
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
    {
#line 812
        .trainerName = _("GABBY & TY"),
#line 813
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 814
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 816
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 817
        .doubleBattle = TRUE,
#line 818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 820
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 822
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 821
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 824
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 826
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 825
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 828
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
    {
#line 829
        .trainerName = _("GABBY & TY"),
#line 830
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 831
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 833
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 834
        .doubleBattle = TRUE,
#line 835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 837
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 839
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 838
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 841
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 843
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 842
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 845
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
    {
#line 846
        .trainerName = _("GABBY & TY"),
#line 847
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 848
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 850
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 851
        .doubleBattle = TRUE,
#line 852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 854
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 856
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 855
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 858
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 860
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 859
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 862
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 863
        .trainerName = _("GABBY & TY"),
#line 864
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 865
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 867
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 868
        .doubleBattle = TRUE,
#line 869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 871
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 873
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 872
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 874
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 879
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 881
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 880
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 882
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 887
    [DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
    {
#line 888
        .trainerName = _("LOLA"),
#line 889
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 890
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 891
F_TRAINER_FEMALE | 
#line 892
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 893
        .doubleBattle = FALSE,
#line 894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 896
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 898
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 897
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 900
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 902
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 901
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 904
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 905
        .trainerName = _("AUSTINA"),
#line 906
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 907
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 908
F_TRAINER_FEMALE | 
#line 909
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 910
        .doubleBattle = FALSE,
#line 911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 913
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 914
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 917
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 918
        .trainerName = _("GWEN"),
#line 919
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 920
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 921
F_TRAINER_FEMALE | 
#line 922
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 923
        .doubleBattle = FALSE,
#line 924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 926
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 927
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 930
    [DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
    {
#line 931
        .trainerName = _("RICKY"),
#line 932
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 933
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 935
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 936
        .doubleBattle = FALSE,
#line 937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 939
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 941
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 940
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 942
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 947
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 948
        .trainerName = _("SIMON"),
#line 949
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 950
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 952
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 953
        .doubleBattle = FALSE,
#line 954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 956
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 957
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 960
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 961
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 964
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 965
        .trainerName = _("CHARLIE"),
#line 966
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 967
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 969
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 970
        .doubleBattle = FALSE,
#line 971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 973
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 974
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 977
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 978
        .trainerName = _("RANDALL"),
#line 979
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 980
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 982
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 983
        .items = { ITEM_HYPER_POTION },
#line 984
        .doubleBattle = FALSE,
#line 985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 987
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 988
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 990
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
                MOVE_WING_ATTACK,
            },
            },
        },
    },
#line 994
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 995
        .trainerName = _("PARKER"),
#line 996
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 997
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 999
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1000
        .items = { ITEM_HYPER_POTION },
#line 1001
        .doubleBattle = FALSE,
#line 1002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1004
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1006
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1005
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1007
                MOVE_TEETER_DANCE,
                MOVE_DIZZY_PUNCH,
                MOVE_FOCUS_PUNCH,
            },
            },
        },
    },
#line 1011
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1012
        .trainerName = _("GEORGE"),
#line 1013
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1016
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1017
        .items = { ITEM_HYPER_POTION },
#line 1018
        .doubleBattle = FALSE,
#line 1019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1021
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .heldItem = ITEM_SITRUS_BERRY,
#line 1023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1022
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1024
                MOVE_SLACK_OFF,
                MOVE_COUNTER,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1028
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1029
        .trainerName = _("BERKE"),
#line 1030
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1033
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1034
        .items = { ITEM_HYPER_POTION },
#line 1035
        .doubleBattle = FALSE,
#line 1036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1038
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1039
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1041
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1044
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1045
        .trainerName = _("BRAXTON"),
#line 1046
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1047
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1049
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1050
        .items = { ITEM_HYPER_POTION },
#line 1051
        .doubleBattle = FALSE,
#line 1052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1054
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1056
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1055
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1057
                MOVE_FOCUS_ENERGY,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 1062
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1064
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1063
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1065
                MOVE_BITE,
                MOVE_DIG,
                MOVE_FEINT_ATTACK,
                MOVE_SAND_TOMB,
            },
            },
            {
#line 1070
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1071
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1073
                MOVE_ROLLOUT,
                MOVE_WHIRLPOOL,
                MOVE_ASTONISH,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1078
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1080
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1079
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1081
                MOVE_THUNDERBOLT,
                MOVE_SUPERSONIC,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 1086
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1088
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1087
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1089
                MOVE_GIGA_DRAIN,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
            },
            },
        },
    },
#line 1094
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1095
        .trainerName = _("VINCENT"),
#line 1096
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1097
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1099
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1100
        .items = { ITEM_FULL_RESTORE },
#line 1101
        .doubleBattle = FALSE,
#line 1102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1104
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1106
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1105
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1108
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1110
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1109
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1112
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1114
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1113
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1116
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1117
        .trainerName = _("LEROY"),
#line 1118
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1121
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1122
        .items = { ITEM_FULL_RESTORE },
#line 1123
        .doubleBattle = FALSE,
#line 1124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1126
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1127
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1130
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1132
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1131
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1134
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 1135
        .trainerName = _("WILTON"),
#line 1136
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1137
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1139
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1140
        .items = { ITEM_SUPER_POTION },
#line 1141
        .doubleBattle = FALSE,
#line 1142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1144
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1145
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1148
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1149
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1152
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1153
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1156
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1157
        .trainerName = _("EDGAR"),
#line 1158
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1161
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1162
        .items = { ITEM_FULL_RESTORE },
#line 1163
        .doubleBattle = FALSE,
#line 1164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1166
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1167
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1170
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1171
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1174
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1175
        .trainerName = _("ALBERT"),
#line 1176
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1177
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1179
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1180
        .items = { ITEM_FULL_RESTORE },
#line 1181
        .doubleBattle = FALSE,
#line 1182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1184
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1186
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1185
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1188
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1189
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1192
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 1193
        .trainerName = _("SAMUEL"),
#line 1194
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1195
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1197
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1198
        .items = { ITEM_FULL_RESTORE },
#line 1199
        .doubleBattle = FALSE,
#line 1200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1202
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1204
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1203
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1206
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1208
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1207
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1210
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1212
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1211
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1214
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1215
        .trainerName = _("VITO"),
#line 1216
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1217
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1219
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1220
        .items = { ITEM_FULL_RESTORE },
#line 1221
        .doubleBattle = FALSE,
#line 1222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1224
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1226
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1225
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1228
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1229
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1232
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1234
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1233
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1236
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1238
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1237
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1240
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1241
        .trainerName = _("OWEN"),
#line 1242
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1243
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1245
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1246
        .items = { ITEM_FULL_RESTORE },
#line 1247
        .doubleBattle = FALSE,
#line 1248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1250
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1251
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1254
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1256
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1255
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1258
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1260
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1259
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1262
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1263
        .trainerName = _("WARREN"),
#line 1264
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1265
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1267
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1268
        .items = { ITEM_FULL_RESTORE },
#line 1269
        .doubleBattle = FALSE,
#line 1270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1272
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1273
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1276
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1278
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1277
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1280
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1281
        .trainerName = _("MARY"),
#line 1282
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1283
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1284
F_TRAINER_FEMALE | 
#line 1285
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1286
        .items = { ITEM_HYPER_POTION },
#line 1287
        .doubleBattle = FALSE,
#line 1288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1290
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1291
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1293
                MOVE_FEINT_ATTACK,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1296
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1297
        .trainerName = _("ALEXIA"),
#line 1298
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1299
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1300
F_TRAINER_FEMALE | 
#line 1301
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1302
        .items = { ITEM_HYPER_POTION },
#line 1303
        .doubleBattle = FALSE,
#line 1304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1306
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1307
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1309
                MOVE_DEFENSE_CURL,
                MOVE_DOUBLE_EDGE,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1313
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1314
        .trainerName = _("JODY"),
#line 1315
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1316
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1317
F_TRAINER_FEMALE | 
#line 1318
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1319
        .items = { ITEM_HYPER_POTION },
#line 1320
        .doubleBattle = FALSE,
#line 1321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1323
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1324
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1326
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1329
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1330
        .trainerName = _("WENDY"),
#line 1331
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1332
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1333
F_TRAINER_FEMALE | 
#line 1334
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1335
        .items = { ITEM_FULL_RESTORE },
#line 1336
        .doubleBattle = FALSE,
#line 1337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1339
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1341
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1340
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1342
                MOVE_BATON_PASS,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_TEARS,
                MOVE_BITE,
            },
            },
            {
#line 1347
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1349
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1348
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1350
                MOVE_MEGA_DRAIN,
                MOVE_MAGICAL_LEAF,
                MOVE_GRASS_WHISTLE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1355
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1357
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1356
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1358
                MOVE_FLY,
                MOVE_WATER_GUN,
                MOVE_MIST,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 1363
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1364
        .trainerName = _("KEIRA"),
#line 1365
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1366
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1367
F_TRAINER_FEMALE | 
#line 1368
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1369
        .items = { ITEM_FULL_RESTORE },
#line 1370
        .doubleBattle = FALSE,
#line 1371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1373
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1375
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1374
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1377
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1379
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1378
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1381
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 1382
        .trainerName = _("BROOKE"),
#line 1383
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1384
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1385
F_TRAINER_FEMALE | 
#line 1386
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1387
        .items = { ITEM_SUPER_POTION },
#line 1388
        .doubleBattle = FALSE,
#line 1389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1391
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1393
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1392
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1395
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1396
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1399
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1401
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1400
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1403
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1404
        .trainerName = _("JENNIFER"),
#line 1405
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1406
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1407
F_TRAINER_FEMALE | 
#line 1408
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1409
        .items = { ITEM_FULL_RESTORE },
#line 1410
        .doubleBattle = FALSE,
#line 1411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1413
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1415
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1414
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1417
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1418
        .trainerName = _("HOPE"),
#line 1419
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1420
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1421
F_TRAINER_FEMALE | 
#line 1422
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1423
        .items = { ITEM_FULL_RESTORE },
#line 1424
        .doubleBattle = FALSE,
#line 1425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1427
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1429
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1428
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1431
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1432
        .trainerName = _("SHANNON"),
#line 1433
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1434
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1435
F_TRAINER_FEMALE | 
#line 1436
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1437
        .items = { ITEM_FULL_RESTORE },
#line 1438
        .doubleBattle = FALSE,
#line 1439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1441
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1442
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1445
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1446
        .trainerName = _("MICHELLE"),
#line 1447
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1448
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1449
F_TRAINER_FEMALE | 
#line 1450
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1451
        .items = { ITEM_FULL_RESTORE },
#line 1452
        .doubleBattle = FALSE,
#line 1453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1455
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1457
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1456
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1459
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1461
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1460
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1463
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1465
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1464
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1467
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1468
        .trainerName = _("CAROLINE"),
#line 1469
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1470
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1471
F_TRAINER_FEMALE | 
#line 1472
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1473
        .items = { ITEM_FULL_RESTORE },
#line 1474
        .doubleBattle = FALSE,
#line 1475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1477
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1479
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1478
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1481
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1483
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1482
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1485
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1486
        .trainerName = _("JULIE"),
#line 1487
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1488
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1489
F_TRAINER_FEMALE | 
#line 1490
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1491
        .items = { ITEM_FULL_RESTORE },
#line 1492
        .doubleBattle = FALSE,
#line 1493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1495
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1497
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1496
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1499
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1501
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1500
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1503
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1505
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1504
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1507
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1508
        .trainerName = _("PATRICIA"),
#line 1509
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1510
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1511
F_TRAINER_FEMALE | 
#line 1512
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1513
        .doubleBattle = FALSE,
#line 1514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1516
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1517
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1520
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1521
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1524
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1525
        .trainerName = _("KINDRA"),
#line 1526
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1527
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1528
F_TRAINER_FEMALE | 
#line 1529
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1530
        .doubleBattle = FALSE,
#line 1531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1533
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1534
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1537
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1538
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1541
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1542
        .trainerName = _("TAMMY"),
#line 1543
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1544
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1545
F_TRAINER_FEMALE | 
#line 1546
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1547
        .doubleBattle = FALSE,
#line 1548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1550
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1551
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1554
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1555
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1558
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
    {
#line 1559
        .trainerName = _("VALERIE"),
#line 1560
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1561
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1562
F_TRAINER_FEMALE | 
#line 1563
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1564
        .doubleBattle = FALSE,
#line 1565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1567
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1568
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1571
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1572
        .trainerName = _("TASHA"),
#line 1573
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1574
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1575
F_TRAINER_FEMALE | 
#line 1576
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1577
        .doubleBattle = FALSE,
#line 1578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1580
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1582
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1581
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1584
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 1585
        .trainerName = _("CINDY"),
#line 1586
        .trainerClass = TRAINER_CLASS_LADY,
#line 1587
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1588
F_TRAINER_FEMALE | 
#line 1589
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1590
        .items = { ITEM_FULL_RESTORE },
#line 1591
        .doubleBattle = FALSE,
#line 1592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1594
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1594
            .heldItem = ITEM_NUGGET,
#line 1596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1595
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1598
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1599
        .trainerName = _("DAPHNE"),
#line 1600
        .trainerClass = TRAINER_CLASS_LADY,
#line 1601
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1602
F_TRAINER_FEMALE | 
#line 1603
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1604
        .items = { ITEM_FULL_RESTORE },
#line 1605
        .doubleBattle = FALSE,
#line 1606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1608
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1608
            .heldItem = ITEM_NUGGET,
#line 1610
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1609
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1611
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1616
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1616
            .heldItem = ITEM_NUGGET,
#line 1618
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1617
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1619
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1624
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1625
        .trainerName = _("GRUNT"),
#line 1626
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1627
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1629
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1630
        .doubleBattle = FALSE,
#line 1631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1633
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1634
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1637
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1638
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1641
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1642
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1645
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1646
        .trainerName = _("BRIANNA"),
#line 1647
        .trainerClass = TRAINER_CLASS_LADY,
#line 1648
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1649
F_TRAINER_FEMALE | 
#line 1650
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1651
        .items = { ITEM_FULL_RESTORE },
#line 1652
        .doubleBattle = FALSE,
#line 1653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1655
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1655
            .heldItem = ITEM_NUGGET,
#line 1657
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1656
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1659
    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
#line 1660
        .trainerName = _("NAOMI"),
#line 1661
        .trainerClass = TRAINER_CLASS_LADY,
#line 1662
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1663
F_TRAINER_FEMALE | 
#line 1664
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1665
        .items = { ITEM_FULL_RESTORE },
#line 1666
        .doubleBattle = FALSE,
#line 1667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1669
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1669
            .heldItem = ITEM_NUGGET,
#line 1671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1670
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1673
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 1674
        .trainerName = _("MELISSA"),
#line 1675
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1676
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1677
F_TRAINER_FEMALE | 
#line 1678
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1679
        .doubleBattle = FALSE,
#line 1680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1682
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1683
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1686
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1687
        .trainerName = _("SHEILA"),
#line 1688
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1689
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1690
F_TRAINER_FEMALE | 
#line 1691
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1692
        .doubleBattle = FALSE,
#line 1693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1695
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1696
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1699
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1700
        .trainerName = _("SHIRLEY"),
#line 1701
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1702
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1703
F_TRAINER_FEMALE | 
#line 1704
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1705
        .doubleBattle = FALSE,
#line 1706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1708
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1709
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1712
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 1713
        .trainerName = _("JESSICA"),
#line 1714
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1715
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1716
F_TRAINER_FEMALE | 
#line 1717
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1718
        .doubleBattle = FALSE,
#line 1719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1721
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1722
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1724
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1729
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1730
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1732
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 1737
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1738
        .trainerName = _("CONNIE"),
#line 1739
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1740
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1741
F_TRAINER_FEMALE | 
#line 1742
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1743
        .doubleBattle = FALSE,
#line 1744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1746
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1748
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1747
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1750
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1751
        .trainerName = _("BRIDGET"),
#line 1752
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1753
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1754
F_TRAINER_FEMALE | 
#line 1755
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1756
        .doubleBattle = FALSE,
#line 1757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1759
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1761
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1760
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1763
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1764
        .trainerName = _("OLIVIA"),
#line 1765
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1766
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1767
F_TRAINER_FEMALE | 
#line 1768
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1769
        .doubleBattle = FALSE,
#line 1770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1772
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1774
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1773
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1775
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1780
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1782
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1781
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1783
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1787
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1789
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1788
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1790
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1795
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1796
        .trainerName = _("TIFFANY"),
#line 1797
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1798
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1799
F_TRAINER_FEMALE | 
#line 1800
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1801
        .doubleBattle = FALSE,
#line 1802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1804
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1806
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1805
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1808
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1810
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1809
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1812
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 1813
        .trainerName = _("WINSTON"),
#line 1814
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1815
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1817
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1818
        .items = { ITEM_FULL_RESTORE },
#line 1819
        .doubleBattle = FALSE,
#line 1820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1822
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1822
            .heldItem = ITEM_NUGGET,
#line 1824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1823
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1826
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1827
        .trainerName = _("MOLLIE"),
#line 1828
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1829
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1830
F_TRAINER_FEMALE | 
#line 1831
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1832
        .doubleBattle = FALSE,
#line 1833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1835
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1836
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1839
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1841
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1840
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1843
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1844
        .trainerName = _("GARRET"),
#line 1845
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1846
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1848
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1849
        .items = { ITEM_FULL_RESTORE },
#line 1850
        .doubleBattle = FALSE,
#line 1851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1853
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1853
            .heldItem = ITEM_NUGGET,
#line 1855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1854
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1857
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 1858
        .trainerName = _("STEVE"),
#line 1859
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1860
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1862
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1863
        .doubleBattle = FALSE,
#line 1864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1866
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1867
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1870
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 1871
        .trainerName = _("THALIA"),
#line 1872
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1873
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1874
F_TRAINER_FEMALE | 
#line 1875
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1876
        .doubleBattle = FALSE,
#line 1877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1879
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1880
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1883
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1884
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1887
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 1888
        .trainerName = _("MARK"),
#line 1889
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1890
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1892
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1893
        .doubleBattle = FALSE,
#line 1894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1896
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1897
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1900
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1901
        .trainerName = _("GRUNT"),
#line 1902
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1903
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1904
F_TRAINER_FEMALE | 
#line 1905
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1906
        .doubleBattle = FALSE,
#line 1907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1909
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1910
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1913
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1914
        .trainerName = _("LUIS"),
#line 1915
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1916
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1918
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1919
        .doubleBattle = FALSE,
#line 1920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1922
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1923
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1926
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1927
        .trainerName = _("DOMINIK"),
#line 1928
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1929
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1931
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1932
        .doubleBattle = FALSE,
#line 1933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1935
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1936
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1939
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1940
        .trainerName = _("DOUGLAS"),
#line 1941
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1942
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1944
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1945
        .doubleBattle = FALSE,
#line 1946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1948
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1949
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1952
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1953
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1956
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1957
        .trainerName = _("DARRIN"),
#line 1958
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1959
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1961
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1962
        .doubleBattle = FALSE,
#line 1963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1965
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1967
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1966
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1969
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1970
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1973
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1974
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1977
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 1978
        .trainerName = _("TONY"),
#line 1979
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1980
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1982
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1983
        .doubleBattle = FALSE,
#line 1984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1986
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1987
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1990
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1991
        .trainerName = _("JEROME"),
#line 1992
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1993
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1995
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1996
        .doubleBattle = FALSE,
#line 1997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1999
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2000
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2003
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 2004
        .trainerName = _("MATTHEW"),
#line 2005
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2006
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2008
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2009
        .doubleBattle = FALSE,
#line 2010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2012
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2013
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2016
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 2017
        .trainerName = _("DAVID"),
#line 2018
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2019
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2021
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2022
        .doubleBattle = FALSE,
#line 2023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2025
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2026
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2029
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2030
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2033
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 2034
        .trainerName = _("SPENCER"),
#line 2035
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2036
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2038
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2039
        .doubleBattle = FALSE,
#line 2040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2042
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2043
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2046
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2047
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2050
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 2051
        .trainerName = _("ROLAND"),
#line 2052
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2053
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2055
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2056
        .doubleBattle = FALSE,
#line 2057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2059
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2060
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2063
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 2064
        .trainerName = _("NOLEN"),
#line 2065
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2066
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2068
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2069
        .doubleBattle = FALSE,
#line 2070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2072
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2073
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2076
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 2077
        .trainerName = _("STAN"),
#line 2078
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2079
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2081
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2082
        .doubleBattle = FALSE,
#line 2083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2085
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2086
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2089
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2090
        .trainerName = _("BARRY"),
#line 2091
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2092
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2094
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2095
        .doubleBattle = FALSE,
#line 2096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2098
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2099
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2102
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2103
        .trainerName = _("DEAN"),
#line 2104
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2105
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2107
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2108
        .doubleBattle = FALSE,
#line 2109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2111
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2112
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2115
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2116
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2119
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2120
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2123
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2124
        .trainerName = _("RODNEY"),
#line 2125
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2126
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2128
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2129
        .doubleBattle = FALSE,
#line 2130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2132
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2133
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2136
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2137
        .trainerName = _("RICHARD"),
#line 2138
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2139
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2141
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2142
        .doubleBattle = FALSE,
#line 2143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2145
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2146
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2149
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2150
        .trainerName = _("HERMAN"),
#line 2151
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2152
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2154
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2155
        .doubleBattle = FALSE,
#line 2156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2158
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2159
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2162
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2163
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2166
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2167
        .trainerName = _("SANTIAGO"),
#line 2168
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2169
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2171
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2172
        .doubleBattle = FALSE,
#line 2173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2175
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2176
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2179
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2180
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2183
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2184
        .trainerName = _("GILBERT"),
#line 2185
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2186
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2188
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2189
        .doubleBattle = FALSE,
#line 2190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2192
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2193
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2196
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2197
        .trainerName = _("FRANKLIN"),
#line 2198
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2199
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2201
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2202
        .doubleBattle = FALSE,
#line 2203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2205
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2206
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2209
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2210
        .trainerName = _("KEVIN"),
#line 2211
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2212
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2214
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2215
        .doubleBattle = FALSE,
#line 2216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2218
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2219
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2222
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2223
        .trainerName = _("JACK"),
#line 2224
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2225
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2227
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2228
        .doubleBattle = FALSE,
#line 2229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2231
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2232
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2235
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2236
        .trainerName = _("DUDLEY"),
#line 2237
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2238
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2240
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2241
        .doubleBattle = FALSE,
#line 2242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2244
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2245
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2248
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2249
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2252
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2253
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2256
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2257
        .trainerName = _("CHAD"),
#line 2258
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2259
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2261
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2262
        .doubleBattle = FALSE,
#line 2263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2265
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2266
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2269
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2270
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2273
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2274
        .trainerName = _("TAKAO"),
#line 2275
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2276
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2278
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2279
        .doubleBattle = FALSE,
#line 2280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2282
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2284
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2283
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2286
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2287
        .trainerName = _("HITOSHI"),
#line 2288
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2289
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2291
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2292
        .doubleBattle = FALSE,
#line 2293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2295
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2297
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2296
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2299
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2300
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2303
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2304
        .trainerName = _("KIYO"),
#line 2305
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2306
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2308
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2309
        .doubleBattle = FALSE,
#line 2310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2312
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2314
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2313
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2316
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2317
        .trainerName = _("KOICHI"),
#line 2318
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2319
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2321
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2322
        .doubleBattle = FALSE,
#line 2323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2325
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2327
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2326
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2329
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2330
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2333
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 2334
        .trainerName = _("NOB"),
#line 2335
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2336
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2338
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2339
        .doubleBattle = FALSE,
#line 2340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2342
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2344
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2343
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2346
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2347
        .trainerName = _("YUJI"),
#line 2348
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2349
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2351
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2352
        .doubleBattle = FALSE,
#line 2353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2355
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2357
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2356
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2359
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2361
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2360
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2363
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2364
        .trainerName = _("DAISUKE"),
#line 2365
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2366
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2368
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2369
        .doubleBattle = FALSE,
#line 2370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2372
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2373
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2376
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2377
        .trainerName = _("ATSUSHI"),
#line 2378
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2379
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2381
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2382
        .doubleBattle = FALSE,
#line 2383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2385
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2387
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2386
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2389
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2390
        .trainerName = _("KIRK"),
#line 2391
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2392
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2394
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2395
        .doubleBattle = FALSE,
#line 2396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2398
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2400
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2399
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2401
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_LEER,
            },
            },
            {
#line 2406
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2408
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2407
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2409
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 2413
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2414
        .trainerName = _("GRUNT"),
#line 2415
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2416
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2417
F_TRAINER_FEMALE | 
#line 2418
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2419
        .doubleBattle = FALSE,
#line 2420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2422
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2423
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2426
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2427
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2430
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2431
        .trainerName = _("GRUNT"),
#line 2432
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2433
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2435
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2436
        .doubleBattle = FALSE,
#line 2437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2439
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2440
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2443
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2444
        .trainerName = _("SHAWN"),
#line 2445
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2446
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2448
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2449
        .doubleBattle = FALSE,
#line 2450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2452
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2454
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2453
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2456
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2458
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2457
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2460
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 2461
        .trainerName = _("FERNANDO"),
#line 2462
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2463
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2465
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2466
        .doubleBattle = FALSE,
#line 2467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2469
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2470
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2473
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2474
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2477
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 2478
        .trainerName = _("DALTON"),
#line 2479
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2480
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2482
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2483
        .doubleBattle = FALSE,
#line 2484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2486
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2487
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2490
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2491
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2494
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2495
        .trainerName = _("COLE"),
#line 2496
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2497
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2499
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2500
        .doubleBattle = FALSE,
#line 2501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2503
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2505
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2504
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2507
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2508
        .trainerName = _("JEFF"),
#line 2509
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2510
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2512
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2513
        .doubleBattle = FALSE,
#line 2514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2516
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2518
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2517
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2520
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2522
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2521
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2524
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2525
        .trainerName = _("AXLE"),
#line 2526
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2527
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2529
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2530
        .doubleBattle = FALSE,
#line 2531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2533
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2535
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2534
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2537
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2538
        .trainerName = _("JACE"),
#line 2539
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2540
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2542
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2543
        .doubleBattle = FALSE,
#line 2544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2546
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2548
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2547
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2550
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2551
        .trainerName = _("KEEGAN"),
#line 2552
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2553
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2555
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2556
        .doubleBattle = FALSE,
#line 2557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2559
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2561
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2560
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2563
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
    {
#line 2564
        .trainerName = _("BERNIE"),
#line 2565
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2566
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2568
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2569
        .doubleBattle = FALSE,
#line 2570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2572
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2573
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2576
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2577
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2580
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2581
        .trainerName = _("DREW"),
#line 2582
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2583
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2586
        .doubleBattle = FALSE,
#line 2587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2589
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2590
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2592
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
        },
    },
#line 2597
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2598
        .trainerName = _("BEAU"),
#line 2599
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2600
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2602
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2603
        .doubleBattle = FALSE,
#line 2604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2606
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2607
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2609
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2614
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2615
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2617
                MOVE_POISON_STING,
                MOVE_SAND_ATTACK,
                MOVE_SCRATCH,
                MOVE_DIG,
            },
            },
            {
#line 2622
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2623
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2625
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2630
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2631
        .trainerName = _("LARRY"),
#line 2632
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2633
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2635
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2636
        .doubleBattle = FALSE,
#line 2637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2639
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2640
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2643
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2644
        .trainerName = _("SHANE"),
#line 2645
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2646
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2649
        .doubleBattle = FALSE,
#line 2650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2652
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2653
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2656
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2657
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2660
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2661
        .trainerName = _("JUSTIN"),
#line 2662
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2663
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2665
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2666
        .doubleBattle = FALSE,
#line 2667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2669
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2670
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2673
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 2674
        .trainerName = _("ETHAN"),
#line 2675
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2676
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2678
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2679
        .doubleBattle = FALSE,
#line 2680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2682
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2683
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2686
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2687
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2690
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2691
        .trainerName = _("AUTUMN"),
#line 2692
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2693
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2694
F_TRAINER_FEMALE | 
#line 2695
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2696
        .doubleBattle = FALSE,
#line 2697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2699
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2700
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2703
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2704
        .trainerName = _("TRAVIS"),
#line 2705
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2706
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2708
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2709
        .doubleBattle = FALSE,
#line 2710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2712
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2713
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2716
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2717
        .trainerName = _("BRENT"),
#line 2718
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2719
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2721
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2722
        .doubleBattle = FALSE,
#line 2723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2725
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2727
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2726
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2729
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2730
        .trainerName = _("DONALD"),
#line 2731
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2732
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2734
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2735
        .doubleBattle = FALSE,
#line 2736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2738
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2740
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2739
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2742
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2744
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2743
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2746
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2747
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2750
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2751
        .trainerName = _("TAYLOR"),
#line 2752
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2753
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2755
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2756
        .doubleBattle = FALSE,
#line 2757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2759
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2760
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2763
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2765
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2764
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2767
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2769
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2768
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2771
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 2772
        .trainerName = _("JEFFREY"),
#line 2773
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2774
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2776
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2777
        .doubleBattle = FALSE,
#line 2778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2780
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2781
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2784
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2785
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2788
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2789
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2792
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2793
        .trainerName = _("DEREK"),
#line 2794
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2795
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2797
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2798
        .doubleBattle = FALSE,
#line 2799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2801
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2803
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2802
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2805
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2807
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2806
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2809
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2810
        .trainerName = _("EDWARD"),
#line 2811
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2812
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2814
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2815
        .doubleBattle = FALSE,
#line 2816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2818
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2819
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2821
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2823
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2824
        .trainerName = _("PRESTON"),
#line 2825
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2826
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2828
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2829
        .doubleBattle = FALSE,
#line 2830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2832
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2834
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2833
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2836
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2837
        .trainerName = _("VIRGIL"),
#line 2838
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2839
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2842
        .doubleBattle = FALSE,
#line 2843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2845
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2847
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2846
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2849
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2850
        .trainerName = _("BLAKE"),
#line 2851
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2852
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2854
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2855
        .doubleBattle = FALSE,
#line 2856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2858
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2860
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2859
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2862
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2863
        .trainerName = _("WILLIAM"),
#line 2864
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2865
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2867
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2868
        .doubleBattle = FALSE,
#line 2869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2871
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2872
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2875
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2876
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2879
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2880
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2883
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2884
        .trainerName = _("JOSHUA"),
#line 2885
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2886
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2888
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2889
        .doubleBattle = FALSE,
#line 2890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2892
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2893
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2896
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2897
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2900
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 2901
        .trainerName = _("CAMERON"),
#line 2902
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2903
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2905
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2906
        .doubleBattle = FALSE,
#line 2907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2909
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2910
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2913
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2914
        .trainerName = _("JACLYN"),
#line 2915
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2916
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2917
F_TRAINER_FEMALE | 
#line 2918
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2919
        .doubleBattle = FALSE,
#line 2920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2922
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2923
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2925
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2927
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2928
        .trainerName = _("HANNAH"),
#line 2929
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2930
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2931
F_TRAINER_FEMALE | 
#line 2932
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2933
        .doubleBattle = FALSE,
#line 2934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2936
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2938
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2937
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2940
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2941
        .trainerName = _("SAMANTHA"),
#line 2942
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2943
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2944
F_TRAINER_FEMALE | 
#line 2945
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2946
        .doubleBattle = FALSE,
#line 2947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2949
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2951
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2950
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2953
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2954
        .trainerName = _("MAURA"),
#line 2955
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2956
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2957
F_TRAINER_FEMALE | 
#line 2958
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2959
        .doubleBattle = FALSE,
#line 2960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2962
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2964
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2963
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2966
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2967
        .trainerName = _("KAYLA"),
#line 2968
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2969
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2970
F_TRAINER_FEMALE | 
#line 2971
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2972
        .doubleBattle = FALSE,
#line 2973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2975
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2976
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2979
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2980
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2983
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2984
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2987
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2988
        .trainerName = _("ALEXIS"),
#line 2989
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2990
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2991
F_TRAINER_FEMALE | 
#line 2992
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2993
        .doubleBattle = FALSE,
#line 2994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2996
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2997
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3000
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3001
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3004
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 3005
        .trainerName = _("JACKI"),
#line 3006
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3007
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3008
F_TRAINER_FEMALE | 
#line 3009
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3010
        .doubleBattle = FALSE,
#line 3011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3013
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3014
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3017
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3018
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3021
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 3022
        .trainerName = _("WALTER"),
#line 3023
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3024
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3026
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3027
        .doubleBattle = FALSE,
#line 3028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3030
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3031
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3034
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 3035
        .trainerName = _("MICAH"),
#line 3036
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3037
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3039
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3040
        .doubleBattle = FALSE,
#line 3041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3043
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3044
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3047
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3048
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3051
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 3052
        .trainerName = _("THOMAS"),
#line 3053
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3054
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3056
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3057
        .doubleBattle = FALSE,
#line 3058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3060
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3061
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3064
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 3065
        .trainerName = _("SIDNEY"),
#line 3066
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3067
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 3069
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3070
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3071
        .doubleBattle = FALSE,
#line 3072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_FORCE_SETUP_FIRST_TURN,
#line 3073
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3075
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3077
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3076
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3078
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3083
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3085
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3084
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3086
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3091
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3093
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3092
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3094
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3099
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3101
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3100
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3102
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3107
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3107
            .heldItem = ITEM_SITRUS_BERRY,
#line 3109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3108
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3110
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3115
    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
#line 3116
        .trainerName = _("PHOEBE"),
#line 3117
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3118
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender =
#line 3119
F_TRAINER_FEMALE | 
#line 3120
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3121
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3122
        .doubleBattle = FALSE,
#line 3123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3124
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3126
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3128
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3127
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3129
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3134
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3135
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3137
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3142
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3144
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3143
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3145
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3150
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3152
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3151
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3153
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3158
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .heldItem = ITEM_SITRUS_BERRY,
#line 3160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3159
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3161
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3166
    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
#line 3167
        .trainerName = _("GLACIA"),
#line 3168
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3169
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender =
#line 3170
F_TRAINER_FEMALE | 
#line 3171
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3172
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3173
        .doubleBattle = FALSE,
#line 3174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3175
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3177
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3179
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3178
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3180
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3185
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3187
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3186
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3188
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3193
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3194
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3196
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3201
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3203
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3202
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3204
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3209
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3209
            .heldItem = ITEM_SITRUS_BERRY,
#line 3211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3210
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3212
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3217
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3218
        .trainerName = _("DRAKE"),
#line 3219
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3220
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3222
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3223
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3224
        .doubleBattle = FALSE,
#line 3225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 3226
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3228
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3230
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3229
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3231
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3236
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3238
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3237
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3239
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3244
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3245
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3247
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 3252
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3253
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3255
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3260
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .heldItem = ITEM_SITRUS_BERRY,
#line 3262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3261
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3263
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 3268
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 3269
        .trainerName = _("ROXANNE"),
#line 3270
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3271
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 3272
F_TRAINER_FEMALE | 
#line 3273
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3274
        .items = { ITEM_POTION, ITEM_POTION },
#line 3275
        .doubleBattle = FALSE,
#line 3276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3278
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3279
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3281
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3286
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3287
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3289
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3294
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .heldItem = ITEM_ORAN_BERRY,
#line 3296
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3295
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3297
                MOVE_BLOCK,
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3302
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 3303
        .trainerName = _("BRAWLY"),
#line 3304
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3305
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3307
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3308
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 3309
        .doubleBattle = FALSE,
#line 3310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3312
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3313
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3315
                MOVE_KARATE_CHOP,
                MOVE_LOW_KICK,
                MOVE_SEISMIC_TOSS,
                MOVE_BULK_UP,
            },
            },
            {
#line 3320
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3321
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3323
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_BULK_UP,
            },
            },
            {
#line 3328
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3328
            .heldItem = ITEM_SITRUS_BERRY,
#line 3330
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3329
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3331
                MOVE_ARM_THRUST,
                MOVE_VITAL_THROW,
                MOVE_REVERSAL,
                MOVE_BULK_UP,
            },
            },
        },
    },
#line 3336
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
#line 3337
        .trainerName = _("WATTSON"),
#line 3338
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3339
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3341
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3342
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 3343
        .doubleBattle = FALSE,
#line 3344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3346
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3347
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3349
                MOVE_ROLLOUT,
                MOVE_SPARK,
                MOVE_SELF_DESTRUCT,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3354
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3356
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3355
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3357
                MOVE_SHOCK_WAVE,
                MOVE_LEER,
                MOVE_QUICK_ATTACK,
                MOVE_HOWL,
            },
            },
            {
#line 3362
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3364
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3363
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3365
                MOVE_SUPERSONIC,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 3370
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3370
            .heldItem = ITEM_SITRUS_BERRY,
#line 3372
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3371
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3373
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_HOWL,
            },
            },
        },
    },
#line 3378
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 3379
        .trainerName = _("FLANNERY"),
#line 3380
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3381
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3382
F_TRAINER_FEMALE | 
#line 3383
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3384
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3385
        .doubleBattle = FALSE,
#line 3386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3388
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3389
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3391
                MOVE_OVERHEAT,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3396
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3398
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3397
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3399
                MOVE_OVERHEAT,
                MOVE_SMOG,
                MOVE_LIGHT_SCREEN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3404
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3405
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3407
                MOVE_OVERHEAT,
                MOVE_TACKLE,
                MOVE_SUNNY_DAY,
                MOVE_ATTRACT,
            },
            },
            {
#line 3412
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3412
            .heldItem = ITEM_WHITE_HERB,
#line 3414
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3413
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3415
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 3420
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 3421
        .trainerName = _("NORMAN"),
#line 3422
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3423
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 3425
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3426
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3427
        .doubleBattle = FALSE,
#line 3428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3430
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3432
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3431
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3433
                MOVE_TEETER_DANCE,
                MOVE_PSYBEAM,
                MOVE_FACADE,
                MOVE_ENCORE,
            },
            },
            {
#line 3438
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3440
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3439
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3441
                MOVE_SLASH,
                MOVE_FACADE,
                MOVE_ENCORE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3446
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3448
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3447
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3449
                MOVE_SLASH,
                MOVE_BELLY_DRUM,
                MOVE_FACADE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3454
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .heldItem = ITEM_SITRUS_BERRY,
#line 3456
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3455
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3457
                MOVE_COUNTER,
                MOVE_YAWN,
                MOVE_FACADE,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3462
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 3463
        .trainerName = _("WINONA"),
#line 3464
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3465
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3466
F_TRAINER_FEMALE | 
#line 3467
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3468
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3469
        .doubleBattle = FALSE,
#line 3470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3472
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3474
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3473
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3475
                MOVE_PERISH_SONG,
                MOVE_MIRROR_MOVE,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3480
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3482
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3481
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3483
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 3488
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3490
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3489
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3491
                MOVE_WATER_GUN,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3496
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3498
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3497
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_SAND_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3504
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3504
            .heldItem = ITEM_ORAN_BERRY,
#line 3506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3505
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3507
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 3512
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 3513
        .trainerName = _("TATE&LIZA"),
#line 3514
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3515
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 3517
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3518
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3519
        .doubleBattle = TRUE,
#line 3520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3522
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3524
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3523
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3525
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3530
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3532
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3531
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3533
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3538
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3538
            .heldItem = ITEM_SITRUS_BERRY,
#line 3540
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3539
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3541
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3546
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3546
            .heldItem = ITEM_SITRUS_BERRY,
#line 3548
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3547
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3549
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 3554
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 3555
        .trainerName = _("JUAN"),
#line 3556
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3557
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3559
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3560
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3561
        .doubleBattle = FALSE,
#line 3562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3564
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3565
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3567
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 3572
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3574
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3573
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3575
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3580
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3581
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3583
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3588
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3589
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3591
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 3596
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_CHESTO_BERRY,
#line 3598
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3597
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3599
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 3604
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 3605
        .trainerName = _("JERRY"),
#line 3606
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3607
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3609
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3610
        .doubleBattle = FALSE,
#line 3611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3613
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3615
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3614
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3617
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3618
        .trainerName = _("TED"),
#line 3619
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3620
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3622
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3623
        .doubleBattle = FALSE,
#line 3624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3626
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3628
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3627
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3630
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3631
        .trainerName = _("PAUL"),
#line 3632
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3633
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3635
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3636
        .doubleBattle = FALSE,
#line 3637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3639
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3641
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3640
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3643
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3645
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3644
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3647
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3649
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3648
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3651
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 3652
        .trainerName = _("KAREN"),
#line 3653
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3654
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3655
F_TRAINER_FEMALE | 
#line 3656
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3657
        .doubleBattle = FALSE,
#line 3658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3660
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3661
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3664
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3665
        .trainerName = _("GEORGIA"),
#line 3666
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3667
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3668
F_TRAINER_FEMALE | 
#line 3669
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3670
        .doubleBattle = FALSE,
#line 3671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3673
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3675
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3674
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3677
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3679
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3678
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3681
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3682
        .trainerName = _("KATE & JOY"),
#line 3683
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3684
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3686
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3687
        .doubleBattle = TRUE,
#line 3688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3690
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3691
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 3698
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3699
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3701
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3706
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 3707
        .trainerName = _("ANNA & MEG"),
#line 3708
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3709
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3711
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3712
        .doubleBattle = TRUE,
#line 3713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3715
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3716
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3718
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 3723
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3724
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3726
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 3730
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3731
        .trainerName = _("VICTOR"),
#line 3732
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3733
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3735
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3736
        .doubleBattle = FALSE,
#line 3737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3739
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3739
            .heldItem = ITEM_ORAN_BERRY,
#line 3741
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3740
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3743
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .heldItem = ITEM_ORAN_BERRY,
#line 3745
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3744
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3747
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 3748
        .trainerName = _("MIGUEL"),
#line 3749
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3750
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3752
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3753
        .doubleBattle = FALSE,
#line 3754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3756
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .heldItem = ITEM_ORAN_BERRY,
#line 3758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3757
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3760
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3761
        .trainerName = _("COLTON"),
#line 3762
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3763
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3765
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3766
        .doubleBattle = FALSE,
#line 3767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3769
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3769
            .heldItem = ITEM_ORAN_BERRY,
#line 3771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3770
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3772
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3777
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3777
            .heldItem = ITEM_ORAN_BERRY,
#line 3779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3780
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3785
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3785
            .heldItem = ITEM_ORAN_BERRY,
#line 3787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3786
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3788
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3793
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3793
            .heldItem = ITEM_ORAN_BERRY,
#line 3795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3794
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3796
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3801
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3801
            .heldItem = ITEM_ORAN_BERRY,
#line 3803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3802
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3804
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3809
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .heldItem = ITEM_ORAN_BERRY,
#line 3811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3810
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3812
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3817
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3818
        .trainerName = _("VICTORIA"),
#line 3819
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3820
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3821
F_TRAINER_FEMALE | 
#line 3822
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3823
        .doubleBattle = FALSE,
#line 3824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3826
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3826
            .heldItem = ITEM_ORAN_BERRY,
#line 3828
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3827
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3830
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3831
        .trainerName = _("VANESSA"),
#line 3832
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3833
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3834
F_TRAINER_FEMALE | 
#line 3835
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3836
        .doubleBattle = FALSE,
#line 3837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3839
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3839
            .heldItem = ITEM_ORAN_BERRY,
#line 3841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3840
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3843
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3844
        .trainerName = _("BETHANY"),
#line 3845
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3846
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3847
F_TRAINER_FEMALE | 
#line 3848
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3849
        .doubleBattle = FALSE,
#line 3850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3852
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .heldItem = ITEM_ORAN_BERRY,
#line 3854
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3853
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3856
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3856
            .heldItem = ITEM_ORAN_BERRY,
#line 3858
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3857
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3860
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .heldItem = ITEM_ORAN_BERRY,
#line 3862
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3861
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3864
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 3865
        .trainerName = _("ISABEL"),
#line 3866
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3867
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3868
F_TRAINER_FEMALE | 
#line 3869
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3870
        .doubleBattle = FALSE,
#line 3871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3873
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .heldItem = ITEM_ORAN_BERRY,
#line 3875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3874
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3877
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3877
            .heldItem = ITEM_ORAN_BERRY,
#line 3879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3878
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3881
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 3882
        .trainerName = _("TIMOTHY"),
#line 3883
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3884
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3886
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3887
        .doubleBattle = FALSE,
#line 3888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3890
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3892
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3891
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3894
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3895
        .trainerName = _("VICKY"),
#line 3896
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3897
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3898
F_TRAINER_FEMALE | 
#line 3899
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3900
        .doubleBattle = FALSE,
#line 3901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3903
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3905
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3904
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3906
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 3911
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 3912
        .trainerName = _("SHELBY"),
#line 3913
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3914
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3915
F_TRAINER_FEMALE | 
#line 3916
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3917
        .doubleBattle = FALSE,
#line 3918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3920
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3922
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3921
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3924
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3925
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3928
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 3929
        .trainerName = _("CALVIN"),
#line 3930
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3931
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3933
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3934
        .doubleBattle = FALSE,
#line 3935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3937
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3938
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3941
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 3942
        .trainerName = _("BILLY"),
#line 3943
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3944
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3946
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3947
        .doubleBattle = FALSE,
#line 3948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3950
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3951
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3954
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3955
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3958
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 3959
        .trainerName = _("JOSH"),
#line 3960
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3961
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3963
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3964
        .doubleBattle = FALSE,
#line 3965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3967
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3969
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3968
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3970
                MOVE_TACKLE,
            },
            },
        },
    },
#line 3972
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 3973
        .trainerName = _("TOMMY"),
#line 3974
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3975
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3977
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3978
        .doubleBattle = FALSE,
#line 3979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3981
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3983
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 3982
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3985
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3987
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3986
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3989
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 3990
        .trainerName = _("JOEY"),
#line 3991
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3992
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3994
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3995
        .doubleBattle = FALSE,
#line 3996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3998
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3999
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4002
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4003
        .trainerName = _("BEN"),
#line 4004
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4005
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4007
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4008
        .doubleBattle = FALSE,
#line 4009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4011
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4013
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4012
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4014
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4019
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4021
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4020
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4022
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4027
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4028
        .trainerName = _("QUINCY"),
#line 4029
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4032
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4033
        .items = { ITEM_FULL_RESTORE },
#line 4034
        .doubleBattle = FALSE,
#line 4035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4037
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4039
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4038
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4040
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4045
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4047
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4046
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4048
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4053
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4054
        .trainerName = _("KATELYNN"),
#line 4055
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4056
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4057
F_TRAINER_FEMALE | 
#line 4058
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4059
        .items = { ITEM_FULL_RESTORE },
#line 4060
        .doubleBattle = FALSE,
#line 4061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4063
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4065
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4064
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4066
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4071
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4073
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4072
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4074
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4079
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4080
        .trainerName = _("JAYLEN"),
#line 4081
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4082
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4084
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4085
        .doubleBattle = FALSE,
#line 4086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4088
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4089
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4092
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4093
        .trainerName = _("DILLON"),
#line 4094
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4095
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4097
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4098
        .doubleBattle = FALSE,
#line 4099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4101
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4102
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4105
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4106
        .trainerName = _("EDDIE"),
#line 4107
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4108
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4110
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4111
        .doubleBattle = FALSE,
#line 4112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4114
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4115
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4118
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4119
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4122
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4123
        .trainerName = _("ALLEN"),
#line 4124
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4125
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4127
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4128
        .doubleBattle = FALSE,
#line 4129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4131
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4132
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4135
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4136
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4139
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4140
        .trainerName = _("TIMMY"),
#line 4141
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4142
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4145
        .doubleBattle = FALSE,
#line 4146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4148
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4149
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4152
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4153
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4156
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 4157
        .trainerName = _("WALLACE"),
#line 4158
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4159
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender =
#line 4161
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4162
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 4163
        .doubleBattle = FALSE,
#line 4164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 4165
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4167
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4168
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4170
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4175
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4176
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4178
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4183
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4184
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4186
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4191
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4192
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4194
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4199
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4200
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4202
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4207
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .heldItem = ITEM_SITRUS_BERRY,
#line 4209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4208
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4210
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4215
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4216
        .trainerName = _("ANDREW"),
#line 4217
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4218
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4220
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4221
        .doubleBattle = FALSE,
#line 4222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4225
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4228
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4229
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4232
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4233
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4236
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4237
        .trainerName = _("IVAN"),
#line 4238
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4239
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4241
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4242
        .doubleBattle = FALSE,
#line 4243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4245
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4246
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4249
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4250
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4253
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4254
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4257
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4258
        .trainerName = _("CLAUDE"),
#line 4259
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4260
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4262
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4263
        .doubleBattle = FALSE,
#line 4264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4266
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4267
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4270
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4271
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4274
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4275
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4278
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 4279
        .trainerName = _("ELLIOT"),
#line 4280
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4281
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4283
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4284
        .doubleBattle = FALSE,
#line 4285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4287
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4288
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4291
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4292
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4295
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4296
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4299
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4300
        .trainerName = _("NED"),
#line 4301
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4302
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4304
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4305
        .doubleBattle = FALSE,
#line 4306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4308
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4309
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4312
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4313
        .trainerName = _("DALE"),
#line 4314
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4315
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4317
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4318
        .doubleBattle = FALSE,
#line 4319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4321
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4322
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4325
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4326
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4329
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4330
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4333
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4334
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4337
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4338
        .trainerName = _("NOLAN"),
#line 4339
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4340
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4342
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4343
        .doubleBattle = FALSE,
#line 4344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4346
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4347
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4350
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4351
        .trainerName = _("BARNY"),
#line 4352
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4353
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4355
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4356
        .doubleBattle = FALSE,
#line 4357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4359
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4360
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4363
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4364
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4367
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4368
        .trainerName = _("WADE"),
#line 4369
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4370
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4372
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4373
        .doubleBattle = FALSE,
#line 4374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4376
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4377
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4380
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4381
        .trainerName = _("CARTER"),
#line 4382
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4383
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4386
        .doubleBattle = FALSE,
#line 4387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4389
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4390
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4393
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4394
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4397
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4398
        .trainerName = _("RONALD"),
#line 4399
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4400
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4402
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4403
        .doubleBattle = FALSE,
#line 4404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4406
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4407
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4410
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4411
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4414
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4415
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4418
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4419
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4422
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4423
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4426
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4427
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4430
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4431
        .trainerName = _("JACOB"),
#line 4432
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4433
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4435
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4436
        .doubleBattle = FALSE,
#line 4437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4439
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4441
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4440
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4443
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4445
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4444
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4447
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4448
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4451
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4452
        .trainerName = _("ANTHONY"),
#line 4453
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4454
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4456
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4457
        .doubleBattle = FALSE,
#line 4458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4460
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4461
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4464
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4465
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4468
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 4469
        .trainerName = _("BENJAMIN"),
#line 4470
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4471
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4473
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4474
        .doubleBattle = FALSE,
#line 4475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4477
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4478
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4481
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 4482
        .trainerName = _("ABIGAIL"),
#line 4483
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4484
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4485
F_TRAINER_FEMALE | 
#line 4486
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4487
        .doubleBattle = FALSE,
#line 4488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4490
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4491
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4494
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4495
        .trainerName = _("JASMINE"),
#line 4496
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4497
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4498
F_TRAINER_FEMALE | 
#line 4499
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4500
        .doubleBattle = FALSE,
#line 4501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4504
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4507
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4508
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4511
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4512
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4515
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 4516
        .trainerName = _("DYLAN"),
#line 4517
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4518
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4520
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4521
        .doubleBattle = FALSE,
#line 4522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4524
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4525
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4528
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 4529
        .trainerName = _("MARIA"),
#line 4530
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4531
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4532
F_TRAINER_FEMALE | 
#line 4533
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4534
        .doubleBattle = FALSE,
#line 4535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4537
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4538
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4541
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4542
        .trainerName = _("CAMDEN"),
#line 4543
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4544
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4546
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4547
        .doubleBattle = FALSE,
#line 4548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4550
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4551
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4554
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4555
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4558
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4559
        .trainerName = _("DEMETRIUS"),
#line 4560
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4561
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4563
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4564
        .doubleBattle = FALSE,
#line 4565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4567
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4568
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4571
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4572
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4575
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 4576
        .trainerName = _("ISAIAH"),
#line 4577
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4578
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4580
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4581
        .doubleBattle = FALSE,
#line 4582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4584
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4585
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4588
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 4589
        .trainerName = _("PABLO"),
#line 4590
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4591
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4593
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4594
        .doubleBattle = FALSE,
#line 4595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4597
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4598
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4601
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4602
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4605
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4606
        .trainerName = _("CHASE"),
#line 4607
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4608
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4610
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4611
        .doubleBattle = FALSE,
#line 4612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4615
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4618
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4619
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4622
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4623
        .trainerName = _("ISOBEL"),
#line 4624
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4625
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4626
F_TRAINER_FEMALE | 
#line 4627
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4628
        .doubleBattle = FALSE,
#line 4629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4631
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4632
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4635
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4636
        .trainerName = _("DONNY"),
#line 4637
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4638
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4639
F_TRAINER_FEMALE | 
#line 4640
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4641
        .doubleBattle = FALSE,
#line 4642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4644
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4645
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4648
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4650
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4649
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4652
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4653
        .trainerName = _("TALIA"),
#line 4654
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4655
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4656
F_TRAINER_FEMALE | 
#line 4657
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4658
        .doubleBattle = FALSE,
#line 4659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4661
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4662
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4665
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 4666
        .trainerName = _("KATELYN"),
#line 4667
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4668
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4669
F_TRAINER_FEMALE | 
#line 4670
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4671
        .doubleBattle = FALSE,
#line 4672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4674
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4675
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4678
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4679
        .trainerName = _("ALLISON"),
#line 4680
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4681
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4682
F_TRAINER_FEMALE | 
#line 4683
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4684
        .doubleBattle = FALSE,
#line 4685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4687
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4688
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4691
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4693
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4692
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4695
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 4696
        .trainerName = _("NICOLAS"),
#line 4697
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4698
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4700
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4701
        .doubleBattle = FALSE,
#line 4702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4704
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4705
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4708
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4710
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4709
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4712
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4713
        .trainerName = _("AARON"),
#line 4714
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4715
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4717
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4718
        .doubleBattle = FALSE,
#line 4719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4721
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4722
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4724
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 4729
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4730
        .trainerName = _("PERRY"),
#line 4731
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4732
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4734
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4735
        .doubleBattle = FALSE,
#line 4736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4738
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4739
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4742
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4743
        .trainerName = _("HUGH"),
#line 4744
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4745
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4747
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4748
        .doubleBattle = FALSE,
#line 4749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4751
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4752
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4755
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4756
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4759
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4760
        .trainerName = _("PHIL"),
#line 4761
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4762
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4764
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4765
        .doubleBattle = FALSE,
#line 4766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4768
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4769
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4772
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4773
        .trainerName = _("JARED"),
#line 4774
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4775
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4777
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4778
        .doubleBattle = FALSE,
#line 4779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4781
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4783
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4782
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4785
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4787
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4786
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4789
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4791
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4790
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4793
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4794
        .trainerName = _("HUMBERTO"),
#line 4795
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4796
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4798
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4799
        .doubleBattle = FALSE,
#line 4800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4802
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4804
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4803
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4806
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4807
        .trainerName = _("PRESLEY"),
#line 4808
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4809
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4811
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4812
        .doubleBattle = FALSE,
#line 4813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4815
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4816
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4819
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4820
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4823
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4824
        .trainerName = _("EDWARDO"),
#line 4825
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4826
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4828
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4829
        .doubleBattle = FALSE,
#line 4830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4832
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4834
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4833
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4836
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4838
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4837
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4840
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4841
        .trainerName = _("COLIN"),
#line 4842
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4843
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4845
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4846
        .doubleBattle = FALSE,
#line 4847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4849
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4850
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4853
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4854
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4857
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 4858
        .trainerName = _("ROBERT"),
#line 4859
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4860
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4862
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4863
        .doubleBattle = FALSE,
#line 4864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4866
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4867
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4870
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4871
        .trainerName = _("BENNY"),
#line 4872
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4873
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4875
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4876
        .doubleBattle = FALSE,
#line 4877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4879
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4880
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4883
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4884
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4887
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4888
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4891
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4892
        .trainerName = _("CHESTER"),
#line 4893
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4894
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4896
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4897
        .doubleBattle = FALSE,
#line 4898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4900
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4901
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4904
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4905
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4908
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4909
        .trainerName = _("ALEX"),
#line 4910
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4911
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4913
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4914
        .doubleBattle = FALSE,
#line 4915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4917
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4919
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4918
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4921
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4923
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4922
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4925
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4926
        .trainerName = _("BECK"),
#line 4927
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4928
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4930
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4931
        .doubleBattle = FALSE,
#line 4932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4934
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4935
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4938
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4939
        .trainerName = _("YASU"),
#line 4940
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4941
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4943
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4944
        .doubleBattle = FALSE,
#line 4945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4947
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4948
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4951
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4952
        .trainerName = _("TAKASHI"),
#line 4953
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4954
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4956
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4957
        .doubleBattle = FALSE,
#line 4958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4960
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4961
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4964
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4965
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4968
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 4969
        .trainerName = _("DIANNE"),
#line 4970
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4971
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4972
F_TRAINER_FEMALE | 
#line 4973
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4974
        .items = { ITEM_FULL_RESTORE },
#line 4975
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4977
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4978
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4980
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4983
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4984
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4986
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 4989
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 4990
        .trainerName = _("JANI"),
#line 4991
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 4992
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 4993
F_TRAINER_FEMALE | 
#line 4994
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4995
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4997
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4998
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5001
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 5002
        .trainerName = _("LAO"),
#line 5003
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5004
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5006
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5007
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5009
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5010
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5012
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5017
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5018
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5020
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5025
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5026
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5028
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5033
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5034
        .trainerName = _("LUNG"),
#line 5035
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5036
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5038
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5039
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5041
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5042
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5045
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5046
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5049
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5050
        .trainerName = _("JOCELYN"),
#line 5051
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5052
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5053
F_TRAINER_FEMALE | 
#line 5054
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5055
        .doubleBattle = FALSE,
#line 5056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5058
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5060
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5059
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5062
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5063
        .trainerName = _("LAURA"),
#line 5064
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5065
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5066
F_TRAINER_FEMALE | 
#line 5067
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5068
        .doubleBattle = FALSE,
#line 5069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5071
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5073
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5072
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5075
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 5076
        .trainerName = _("CYNDY"),
#line 5077
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5078
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5079
F_TRAINER_FEMALE | 
#line 5080
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5081
        .doubleBattle = FALSE,
#line 5082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5084
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5085
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5088
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5089
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5092
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5093
        .trainerName = _("CORA"),
#line 5094
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5095
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5096
F_TRAINER_FEMALE | 
#line 5097
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5098
        .doubleBattle = FALSE,
#line 5099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5101
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5103
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5102
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5105
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5106
        .trainerName = _("PAULA"),
#line 5107
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5108
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5109
F_TRAINER_FEMALE | 
#line 5110
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5111
        .doubleBattle = FALSE,
#line 5112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5114
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5115
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5118
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 5119
        .trainerName = _("MADELINE"),
#line 5120
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5121
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5122
F_TRAINER_FEMALE | 
#line 5123
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5124
        .doubleBattle = FALSE,
#line 5125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5127
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5128
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5130
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5135
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5136
        .trainerName = _("CLARISSA"),
#line 5137
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5138
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5139
F_TRAINER_FEMALE | 
#line 5140
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5141
        .doubleBattle = FALSE,
#line 5142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5144
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5145
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5148
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5149
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5152
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5153
        .trainerName = _("ANGELICA"),
#line 5154
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5155
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5156
F_TRAINER_FEMALE | 
#line 5157
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5158
        .doubleBattle = FALSE,
#line 5159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5161
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5163
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5162
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5164
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 5169
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5170
        .trainerName = _("BEVERLY"),
#line 5171
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5172
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5173
F_TRAINER_FEMALE | 
#line 5174
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5175
        .doubleBattle = FALSE,
#line 5176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5178
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5179
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5182
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5183
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5186
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5187
        .trainerName = _("IMANI"),
#line 5188
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5189
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5190
F_TRAINER_FEMALE | 
#line 5191
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5192
        .doubleBattle = FALSE,
#line 5193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5195
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5196
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5199
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5200
        .trainerName = _("KYLA"),
#line 5201
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5202
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5203
F_TRAINER_FEMALE | 
#line 5204
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5205
        .doubleBattle = FALSE,
#line 5206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5208
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5209
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5212
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5213
        .trainerName = _("DENISE"),
#line 5214
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5215
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5216
F_TRAINER_FEMALE | 
#line 5217
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5218
        .doubleBattle = FALSE,
#line 5219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5221
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5222
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5225
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5226
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5229
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5230
        .trainerName = _("BETH"),
#line 5231
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5232
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5233
F_TRAINER_FEMALE | 
#line 5234
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5235
        .doubleBattle = FALSE,
#line 5236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5238
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5239
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5242
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5243
        .trainerName = _("TARA"),
#line 5244
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5245
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5246
F_TRAINER_FEMALE | 
#line 5247
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5248
        .doubleBattle = FALSE,
#line 5249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5251
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5252
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5255
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5256
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5259
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5260
        .trainerName = _("MISSY"),
#line 5261
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5262
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5263
F_TRAINER_FEMALE | 
#line 5264
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5265
        .doubleBattle = FALSE,
#line 5266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5268
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5269
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5272
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5273
        .trainerName = _("ALICE"),
#line 5274
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5275
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5276
F_TRAINER_FEMALE | 
#line 5277
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5278
        .doubleBattle = FALSE,
#line 5279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5281
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5282
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5285
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5286
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5289
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5290
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5293
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 5294
        .trainerName = _("JENNY"),
#line 5295
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5296
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5297
F_TRAINER_FEMALE | 
#line 5298
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5299
        .doubleBattle = FALSE,
#line 5300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5302
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5303
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5306
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5307
        .trainerName = _("GRACE"),
#line 5308
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5309
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5310
F_TRAINER_FEMALE | 
#line 5311
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5312
        .doubleBattle = FALSE,
#line 5313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5315
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5316
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5319
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5320
        .trainerName = _("TANYA"),
#line 5321
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5322
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5323
F_TRAINER_FEMALE | 
#line 5324
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5325
        .doubleBattle = FALSE,
#line 5326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5328
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5329
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5332
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5333
        .trainerName = _("SHARON"),
#line 5334
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5335
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5336
F_TRAINER_FEMALE | 
#line 5337
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5338
        .doubleBattle = FALSE,
#line 5339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5341
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5342
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5345
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5346
        .trainerName = _("NIKKI"),
#line 5347
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5348
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5349
F_TRAINER_FEMALE | 
#line 5350
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5351
        .doubleBattle = FALSE,
#line 5352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5354
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5355
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5358
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5359
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5362
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5363
        .trainerName = _("BRENDA"),
#line 5364
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5365
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5366
F_TRAINER_FEMALE | 
#line 5367
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5368
        .doubleBattle = FALSE,
#line 5369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5371
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5372
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5375
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5376
        .trainerName = _("KATIE"),
#line 5377
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5378
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5379
F_TRAINER_FEMALE | 
#line 5380
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5381
        .doubleBattle = FALSE,
#line 5382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5384
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5385
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5388
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5389
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5392
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5393
        .trainerName = _("SUSIE"),
#line 5394
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5395
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5396
F_TRAINER_FEMALE | 
#line 5397
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5398
        .doubleBattle = FALSE,
#line 5399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5401
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5402
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5405
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5406
        .trainerName = _("KARA"),
#line 5407
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5408
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5409
F_TRAINER_FEMALE | 
#line 5410
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5411
        .doubleBattle = FALSE,
#line 5412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5414
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5415
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5418
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5419
        .trainerName = _("DANA"),
#line 5420
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5421
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5422
F_TRAINER_FEMALE | 
#line 5423
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5424
        .doubleBattle = FALSE,
#line 5425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5427
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5428
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5431
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5432
        .trainerName = _("SIENNA"),
#line 5433
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5434
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5435
F_TRAINER_FEMALE | 
#line 5436
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5437
        .doubleBattle = FALSE,
#line 5438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5440
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5441
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5444
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5445
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5448
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5449
        .trainerName = _("DEBRA"),
#line 5450
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5451
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5452
F_TRAINER_FEMALE | 
#line 5453
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5454
        .doubleBattle = FALSE,
#line 5455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5457
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5458
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5461
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5462
        .trainerName = _("LINDA"),
#line 5463
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5464
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5465
F_TRAINER_FEMALE | 
#line 5466
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5467
        .doubleBattle = FALSE,
#line 5468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5470
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5471
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5474
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5475
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5478
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5479
        .trainerName = _("KAYLEE"),
#line 5480
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5481
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5482
F_TRAINER_FEMALE | 
#line 5483
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5484
        .doubleBattle = FALSE,
#line 5485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5487
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5488
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5491
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5492
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5495
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5496
        .trainerName = _("LAUREL"),
#line 5497
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5498
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5499
F_TRAINER_FEMALE | 
#line 5500
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5501
        .doubleBattle = FALSE,
#line 5502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5504
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5505
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5508
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5509
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5512
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5513
        .trainerName = _("CARLEE"),
#line 5514
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5515
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5516
F_TRAINER_FEMALE | 
#line 5517
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5518
        .doubleBattle = FALSE,
#line 5519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5521
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5522
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5525
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5526
        .trainerName = _("HEIDI"),
#line 5527
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5528
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5529
F_TRAINER_FEMALE | 
#line 5530
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5531
        .doubleBattle = FALSE,
#line 5532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5534
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5535
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5537
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 5542
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5543
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5545
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 5550
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5551
        .trainerName = _("BECKY"),
#line 5552
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5553
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5554
F_TRAINER_FEMALE | 
#line 5555
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5556
        .doubleBattle = FALSE,
#line 5557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5559
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5560
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5562
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 5567
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5568
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5570
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 5575
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5576
        .trainerName = _("CAROL"),
#line 5577
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5578
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5579
F_TRAINER_FEMALE | 
#line 5580
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5581
        .doubleBattle = FALSE,
#line 5582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5584
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5585
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5588
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5589
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5592
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5593
        .trainerName = _("NANCY"),
#line 5594
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5595
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5596
F_TRAINER_FEMALE | 
#line 5597
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5598
        .doubleBattle = FALSE,
#line 5599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5601
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5602
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5605
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5606
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5609
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5610
        .trainerName = _("MARTHA"),
#line 5611
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5612
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5613
F_TRAINER_FEMALE | 
#line 5614
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5615
        .doubleBattle = FALSE,
#line 5616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5618
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5619
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5622
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5623
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5626
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 5627
        .trainerName = _("DIANA"),
#line 5628
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5629
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5630
F_TRAINER_FEMALE | 
#line 5631
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5632
        .doubleBattle = FALSE,
#line 5633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5635
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5636
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5639
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5640
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5643
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5644
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5647
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5648
        .trainerName = _("CEDRIC"),
#line 5649
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5650
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5652
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5653
        .doubleBattle = FALSE,
#line 5654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5656
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5657
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5659
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 5664
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5665
        .trainerName = _("IRENE"),
#line 5666
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5667
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5668
F_TRAINER_FEMALE | 
#line 5669
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5670
        .doubleBattle = FALSE,
#line 5671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5673
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5674
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5677
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5678
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5681
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 5682
        .trainerName = _("AMY & LIV"),
#line 5683
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5684
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5686
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5687
        .doubleBattle = TRUE,
#line 5688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5690
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5691
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5694
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5695
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5698
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 5699
        .trainerName = _("GINA & MIA"),
#line 5700
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5701
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5703
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5704
        .doubleBattle = TRUE,
#line 5705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5707
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5708
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5711
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5712
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5715
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5716
        .trainerName = _("MIU & YUKI"),
#line 5717
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5718
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5720
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5721
        .doubleBattle = TRUE,
#line 5722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5724
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5725
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5728
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5729
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5732
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5733
        .trainerName = _("HUEY"),
#line 5734
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5735
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5737
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5738
        .doubleBattle = FALSE,
#line 5739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5741
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5743
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5742
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5745
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5747
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5746
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5749
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5750
        .trainerName = _("EDMOND"),
#line 5751
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5752
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5754
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5755
        .doubleBattle = FALSE,
#line 5756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5758
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5759
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5762
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 5763
        .trainerName = _("ERNEST"),
#line 5764
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5765
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5767
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5768
        .doubleBattle = FALSE,
#line 5769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5771
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5772
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5775
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5776
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5779
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5780
        .trainerName = _("DWAYNE"),
#line 5781
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5782
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5784
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5785
        .doubleBattle = FALSE,
#line 5786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5788
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5789
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5792
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5796
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5797
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5800
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5801
        .trainerName = _("PHILLIP"),
#line 5802
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5803
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5805
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5806
        .doubleBattle = FALSE,
#line 5807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5809
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5810
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5813
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5814
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5817
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5818
        .trainerName = _("LEONARD"),
#line 5819
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5820
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5822
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5823
        .doubleBattle = FALSE,
#line 5824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5826
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5827
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5830
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5831
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5834
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5835
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5838
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5839
        .trainerName = _("DUNCAN"),
#line 5840
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5841
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5843
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5844
        .doubleBattle = FALSE,
#line 5845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5847
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5848
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5851
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5852
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5855
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5856
        .trainerName = _("ELI"),
#line 5857
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5858
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5860
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5861
        .doubleBattle = FALSE,
#line 5862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5864
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5866
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5865
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5868
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5869
        .trainerName = _("ANNIKA"),
#line 5870
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5871
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5872
F_TRAINER_FEMALE | 
#line 5873
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5874
        .doubleBattle = FALSE,
#line 5875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5877
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5877
            .heldItem = ITEM_ORAN_BERRY,
#line 5879
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5878
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5880
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 5885
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5885
            .heldItem = ITEM_ORAN_BERRY,
#line 5887
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5886
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5888
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 5893
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5894
        .trainerName = _("JAZMYN"),
#line 5895
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5896
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5897
F_TRAINER_FEMALE | 
#line 5898
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5899
        .items = { ITEM_HYPER_POTION },
#line 5900
        .doubleBattle = FALSE,
#line 5901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5903
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5904
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5907
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5908
        .trainerName = _("JONAS"),
#line 5909
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5910
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5912
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5913
        .doubleBattle = FALSE,
#line 5914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5916
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5917
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5919
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 5924
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5925
        .trainerName = _("KAYLEY"),
#line 5926
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5927
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5928
F_TRAINER_FEMALE | 
#line 5929
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5930
        .doubleBattle = FALSE,
#line 5931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5933
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5934
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5936
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 5941
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5942
        .trainerName = _("AURON"),
#line 5943
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5944
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5946
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5947
        .doubleBattle = FALSE,
#line 5948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5950
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5951
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5954
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5955
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5958
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5959
        .trainerName = _("KELVIN"),
#line 5960
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5961
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5963
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5964
        .doubleBattle = FALSE,
#line 5965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5967
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5969
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5968
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5971
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5973
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5972
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5975
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5976
        .trainerName = _("MARLEY"),
#line 5977
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5978
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5979
F_TRAINER_FEMALE | 
#line 5980
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5981
        .items = { ITEM_HYPER_POTION },
#line 5982
        .doubleBattle = FALSE,
#line 5983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5985
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5986
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5988
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 5993
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5994
        .trainerName = _("REYNA"),
#line 5995
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5996
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5997
F_TRAINER_FEMALE | 
#line 5998
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5999
        .doubleBattle = FALSE,
#line 6000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6002
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6004
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6003
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6006
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6008
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6007
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6010
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6011
        .trainerName = _("HUDSON"),
#line 6012
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6013
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6015
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6016
        .doubleBattle = FALSE,
#line 6017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6019
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6020
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6023
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6024
        .trainerName = _("CONOR"),
#line 6025
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6026
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6028
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6029
        .doubleBattle = FALSE,
#line 6030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6032
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6033
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6036
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6038
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6037
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6040
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 6041
        .trainerName = _("EDWIN"),
#line 6042
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6043
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6045
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6046
        .doubleBattle = FALSE,
#line 6047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6049
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6050
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6053
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6054
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6057
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6058
        .trainerName = _("HECTOR"),
#line 6059
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6060
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6062
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6063
        .doubleBattle = FALSE,
#line 6064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6066
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6067
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6070
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6071
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6074
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6075
        .trainerName = _("TABITHA"),
#line 6076
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6077
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6079
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6080
        .doubleBattle = FALSE,
#line 6081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6083
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6084
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6087
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6089
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6088
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6091
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6093
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6092
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6095
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6096
        .trainerName = _("WALLY"),
#line 6097
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6098
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6100
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6101
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6102
        .doubleBattle = FALSE,
#line 6103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6105
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6107
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6106
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6108
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 6113
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6114
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6116
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 6121
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6123
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6122
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6124
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 6129
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6131
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6130
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6132
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 6137
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6139
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6138
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6140
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 6145
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_101] =
    {
#line 6146
        .trainerName = _("Brendan"),
#line 6147
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6148
        .trainerPic = TRAINER_PIC_RIVAL_BRENDAN,
        .encounterMusic_gender =
#line 6150
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6151
        .doubleBattle = FALSE,
#line 6152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6154
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6155
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6157
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 6160
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6161
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6163
                MOVE_TACKLE,
            },
            },
        },
    },
#line 6165
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 6166
        .trainerName = _("ISAAC"),
#line 6167
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6168
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6171
        .doubleBattle = FALSE,
#line 6172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6174
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6175
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6178
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6179
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6182
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6183
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6186
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6187
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6190
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6191
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6194
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6195
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6198
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6199
        .trainerName = _("DAVIS"),
#line 6200
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6201
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6204
        .doubleBattle = FALSE,
#line 6205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6207
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6208
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6211
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6212
        .trainerName = _("MITCHELL"),
#line 6213
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6216
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6217
        .doubleBattle = FALSE,
#line 6218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6220
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6221
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6223
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6228
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6229
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6231
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 6236
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 6237
        .trainerName = _("LYDIA"),
#line 6238
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6239
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6240
F_TRAINER_FEMALE | 
#line 6241
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6242
        .doubleBattle = FALSE,
#line 6243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6245
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6246
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6249
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6250
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6253
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6254
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6257
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6258
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6261
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6262
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6265
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6266
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6269
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6270
        .trainerName = _("HALLE"),
#line 6271
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6272
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6273
F_TRAINER_FEMALE | 
#line 6274
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6275
        .items = { ITEM_FULL_RESTORE },
#line 6276
        .doubleBattle = FALSE,
#line 6277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6279
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6280
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6283
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6284
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6287
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6288
        .trainerName = _("GARRISON"),
#line 6289
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6290
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6292
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6293
        .doubleBattle = FALSE,
#line 6294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6296
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6297
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6300
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 6301
        .trainerName = _("JACKSON"),
#line 6302
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6303
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6305
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6306
        .items = { ITEM_FULL_RESTORE },
#line 6307
        .doubleBattle = FALSE,
#line 6308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6310
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6312
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6311
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6314
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6315
        .trainerName = _("LORENZO"),
#line 6316
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6317
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6319
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6320
        .items = { ITEM_FULL_RESTORE },
#line 6321
        .doubleBattle = FALSE,
#line 6322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6324
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6326
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6325
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6328
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6329
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6332
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6334
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6333
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6336
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6337
        .trainerName = _("SEBASTIAN"),
#line 6338
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6339
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6341
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6342
        .items = { ITEM_FULL_RESTORE },
#line 6343
        .doubleBattle = FALSE,
#line 6344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6346
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6348
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6347
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6350
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 6351
        .trainerName = _("CATHERINE"),
#line 6352
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6353
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6354
F_TRAINER_FEMALE | 
#line 6355
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6356
        .items = { ITEM_FULL_RESTORE },
#line 6357
        .doubleBattle = FALSE,
#line 6358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6360
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6362
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6361
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6364
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6366
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6365
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6368
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6369
        .trainerName = _("JENNA"),
#line 6370
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6371
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6372
F_TRAINER_FEMALE | 
#line 6373
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6374
        .items = { ITEM_FULL_RESTORE },
#line 6375
        .doubleBattle = FALSE,
#line 6376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6378
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6380
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6379
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6382
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6384
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6383
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6386
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6388
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6387
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6390
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6391
        .trainerName = _("SOPHIA"),
#line 6392
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6393
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6394
F_TRAINER_FEMALE | 
#line 6395
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6396
        .items = { ITEM_FULL_RESTORE },
#line 6397
        .doubleBattle = FALSE,
#line 6398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6400
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6402
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6401
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6404
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6406
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6405
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6408
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6409
        .trainerName = _("JULIO"),
#line 6410
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6411
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6413
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6414
        .doubleBattle = FALSE,
#line 6415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6417
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6418
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6421
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6422
        .trainerName = _("GRUNT"),
#line 6423
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6424
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6426
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6427
        .doubleBattle = FALSE,
#line 6428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6430
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6432
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6431
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6434
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6436
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6435
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6438
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6439
        .trainerName = _("GRUNT"),
#line 6440
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6441
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6442
F_TRAINER_FEMALE | 
#line 6443
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6444
        .doubleBattle = FALSE,
#line 6445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6447
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6448
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6451
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6452
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6455
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6456
        .trainerName = _("GRUNT"),
#line 6457
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6458
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6459
F_TRAINER_FEMALE | 
#line 6460
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6461
        .doubleBattle = FALSE,
#line 6462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6464
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6465
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6468
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6469
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6472
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6473
        .trainerName = _("GRUNT"),
#line 6474
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6475
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6477
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6478
        .doubleBattle = FALSE,
#line 6479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6481
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6483
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6482
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6485
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6487
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6486
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6489
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6490
        .trainerName = _("MARC"),
#line 6491
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6492
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6494
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6495
        .doubleBattle = FALSE,
#line 6496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6498
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6499
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6502
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6504
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6503
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6506
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6507
        .trainerName = _("BRENDEN"),
#line 6508
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6509
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6511
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6512
        .doubleBattle = FALSE,
#line 6513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6515
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6516
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6519
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 6520
        .trainerName = _("LILITH"),
#line 6521
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6522
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6523
F_TRAINER_FEMALE | 
#line 6524
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6525
        .doubleBattle = FALSE,
#line 6526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6528
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6530
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6529
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6532
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 6533
        .trainerName = _("CRISTIAN"),
#line 6534
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6535
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6537
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6538
        .doubleBattle = FALSE,
#line 6539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6541
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6543
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6542
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6545
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 6546
        .trainerName = _("SYLVIA"),
#line 6547
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6548
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6549
F_TRAINER_FEMALE | 
#line 6550
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6551
        .doubleBattle = FALSE,
#line 6552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6555
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6558
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 6559
        .trainerName = _("LEONARDO"),
#line 6560
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6561
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6563
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6564
        .doubleBattle = FALSE,
#line 6565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6567
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6568
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6571
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 6572
        .trainerName = _("ATHENA"),
#line 6573
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6574
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6575
F_TRAINER_FEMALE | 
#line 6576
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6577
        .items = { ITEM_HYPER_POTION },
#line 6578
        .doubleBattle = FALSE,
#line 6579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6581
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6582
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6584
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6588
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6590
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6589
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6591
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 6594
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 6595
        .trainerName = _("HARRISON"),
#line 6596
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6597
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6599
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6600
        .doubleBattle = FALSE,
#line 6601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6603
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6604
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6607
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 6608
        .trainerName = _("GRUNT"),
#line 6609
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6610
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6612
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6613
        .doubleBattle = FALSE,
#line 6614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6616
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6617
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6620
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 6621
        .trainerName = _("CLARENCE"),
#line 6622
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6623
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6625
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6626
        .doubleBattle = FALSE,
#line 6627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6629
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6630
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6633
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 6634
        .trainerName = _("TERRY"),
#line 6635
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6636
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6637
F_TRAINER_FEMALE | 
#line 6638
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6639
        .doubleBattle = FALSE,
#line 6640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6642
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6643
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 6647
        .trainerName = _("NATE"),
#line 6648
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6649
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 6651
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6652
        .doubleBattle = FALSE,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6656
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6659
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 6660
        .trainerName = _("KATHLEEN"),
#line 6661
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6662
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6663
F_TRAINER_FEMALE | 
#line 6664
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6665
        .doubleBattle = FALSE,
#line 6666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6668
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6670
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6669
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6672
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 6673
        .trainerName = _("CLIFFORD"),
#line 6674
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6675
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 6677
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6678
        .doubleBattle = FALSE,
#line 6679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6681
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6682
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6685
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 6686
        .trainerName = _("NICHOLAS"),
#line 6687
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6688
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6690
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6691
        .doubleBattle = FALSE,
#line 6692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6694
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6695
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6698
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 6699
        .trainerName = _("GRUNT"),
#line 6700
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6701
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6702
F_TRAINER_FEMALE | 
#line 6703
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6704
        .doubleBattle = FALSE,
#line 6705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6707
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6708
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6711
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6712
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6715
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 6716
        .trainerName = _("GRUNT"),
#line 6717
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6718
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6720
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6721
        .doubleBattle = FALSE,
#line 6722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6724
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6725
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6728
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 6729
        .trainerName = _("GRUNT"),
#line 6730
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6731
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6733
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6734
        .doubleBattle = FALSE,
#line 6735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6737
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6738
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6741
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 6742
        .trainerName = _("GRUNT"),
#line 6743
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6744
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6746
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6747
        .doubleBattle = FALSE,
#line 6748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6750
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6751
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6754
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 6755
        .trainerName = _("GRUNT"),
#line 6756
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6757
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6759
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6760
        .doubleBattle = FALSE,
#line 6761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6763
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6764
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6767
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 6768
        .trainerName = _("MACEY"),
#line 6769
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6770
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6771
F_TRAINER_FEMALE | 
#line 6772
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6773
        .doubleBattle = FALSE,
#line 6774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6776
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6777
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6780
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 6781
        .trainerName = _("BRENDAN"),
#line 6782
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6783
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6785
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6786
        .doubleBattle = FALSE,
#line 6787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6789
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6791
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6790
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6793
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6795
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6794
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 6798
        .trainerName = _("BRENDAN"),
#line 6799
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6800
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6802
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6803
        .doubleBattle = FALSE,
#line 6804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6806
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6808
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6807
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6810
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6812
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6811
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6814
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 6815
        .trainerName = _("PAXTON"),
#line 6816
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6817
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6819
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6820
        .doubleBattle = FALSE,
#line 6821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6823
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6824
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6827
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6828
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6831
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 6832
        .trainerName = _("ISABELLA"),
#line 6833
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6834
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 6835
F_TRAINER_FEMALE | 
#line 6836
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6837
        .doubleBattle = FALSE,
#line 6838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6840
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6841
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6844
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 6845
        .trainerName = _("GRUNT"),
#line 6846
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6847
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6848
F_TRAINER_FEMALE | 
#line 6849
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6850
        .doubleBattle = FALSE,
#line 6851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6853
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6854
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6857
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6858
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6861
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 6862
        .trainerName = _("TABITHA"),
#line 6863
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6864
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6866
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6867
        .doubleBattle = FALSE,
#line 6868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6870
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6872
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6871
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6874
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6875
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6878
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6880
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6879
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6882
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6884
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6883
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6886
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 6887
        .trainerName = _("JONATHAN"),
#line 6888
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6889
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6891
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6892
        .items = { ITEM_HYPER_POTION },
#line 6893
        .doubleBattle = FALSE,
#line 6894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6896
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6897
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6900
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6901
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6904
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 6905
        .trainerName = _("BRENDAN"),
#line 6906
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6907
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6909
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6910
        .doubleBattle = FALSE,
#line 6911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6913
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6914
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6917
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6919
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6918
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6921
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 6922
        .trainerName = _("MAY"),
#line 6923
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6924
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6925
F_TRAINER_FEMALE | 
#line 6926
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6927
        .doubleBattle = FALSE,
#line 6928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6930
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6932
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6931
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6934
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6936
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6935
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6938
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 6939
        .trainerName = _("MAXIE"),
#line 6940
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 6941
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 6943
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6944
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 6945
        .doubleBattle = FALSE,
#line 6946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6948
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6950
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6949
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6952
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6954
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6953
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6956
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6958
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6957
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6960
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 6961
        .trainerName = _("MAXIE"),
#line 6962
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 6963
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 6965
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6966
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 6967
        .doubleBattle = FALSE,
#line 6968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6970
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6972
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6971
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6974
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6976
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6975
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6978
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6979
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6982
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 6983
        .trainerName = _("TIANA"),
#line 6984
        .trainerClass = TRAINER_CLASS_LASS,
#line 6985
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 6986
F_TRAINER_FEMALE | 
#line 6987
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6988
        .doubleBattle = FALSE,
#line 6989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6991
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6993
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6992
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6995
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6996
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6999
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 7000
        .trainerName = _("HALEY"),
#line 7001
        .trainerClass = TRAINER_CLASS_LASS,
#line 7002
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7003
F_TRAINER_FEMALE | 
#line 7004
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7005
        .doubleBattle = FALSE,
#line 7006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7008
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7009
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7012
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7013
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7016
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7017
        .trainerName = _("JANICE"),
#line 7018
        .trainerClass = TRAINER_CLASS_LASS,
#line 7019
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7020
F_TRAINER_FEMALE | 
#line 7021
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7022
        .doubleBattle = FALSE,
#line 7023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7025
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7026
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7029
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7030
        .trainerName = _("VIVI"),
#line 7031
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7032
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7033
F_TRAINER_FEMALE | 
#line 7034
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7035
        .doubleBattle = FALSE,
#line 7036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7038
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7040
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7039
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7042
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7043
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7046
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7047
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7050
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7051
        .trainerName = _("SALLY"),
#line 7052
        .trainerClass = TRAINER_CLASS_LASS,
#line 7053
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7054
F_TRAINER_FEMALE | 
#line 7055
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7056
        .doubleBattle = FALSE,
#line 7057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7059
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7060
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7063
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7064
        .trainerName = _("ROBIN"),
#line 7065
        .trainerClass = TRAINER_CLASS_LASS,
#line 7066
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7067
F_TRAINER_FEMALE | 
#line 7068
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7069
        .doubleBattle = FALSE,
#line 7070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7072
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7073
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7076
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7077
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7080
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7081
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7084
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7085
        .trainerName = _("ANDREA"),
#line 7086
        .trainerClass = TRAINER_CLASS_LASS,
#line 7087
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7088
F_TRAINER_FEMALE | 
#line 7089
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7090
        .doubleBattle = FALSE,
#line 7091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7093
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7095
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7094
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7097
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7098
        .trainerName = _("CRISSY"),
#line 7099
        .trainerClass = TRAINER_CLASS_LASS,
#line 7100
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7101
F_TRAINER_FEMALE | 
#line 7102
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7103
        .doubleBattle = FALSE,
#line 7104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7106
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7108
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7107
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7110
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7111
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7114
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7115
        .trainerName = _("RICK"),
#line 7116
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7117
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7120
        .doubleBattle = FALSE,
#line 7121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7123
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7124
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7127
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7128
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7131
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7132
        .trainerName = _("LYLE"),
#line 7133
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7134
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7136
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7137
        .doubleBattle = FALSE,
#line 7138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7140
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7141
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7144
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7145
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7148
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7149
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7152
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7153
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7156
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 7157
        .trainerName = _("JOSE"),
#line 7158
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7159
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7161
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7162
        .doubleBattle = FALSE,
#line 7163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7165
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7167
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7166
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7169
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7170
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7173
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7174
        .trainerName = _("DOUG"),
#line 7175
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7176
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7178
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7179
        .doubleBattle = FALSE,
#line 7180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7182
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7183
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7186
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7187
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7190
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7191
        .trainerName = _("GREG"),
#line 7192
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7193
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7196
        .doubleBattle = FALSE,
#line 7197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7199
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7200
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7203
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7204
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7207
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7208
        .trainerName = _("KENT"),
#line 7209
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7210
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7212
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7213
        .doubleBattle = FALSE,
#line 7214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7216
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7217
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7220
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 7221
        .trainerName = _("JAMES"),
#line 7222
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7223
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7225
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7226
        .doubleBattle = FALSE,
#line 7227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7229
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7230
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7233
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7234
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7237
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7238
        .trainerName = _("BRICE"),
#line 7239
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7240
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7242
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7243
        .doubleBattle = FALSE,
#line 7244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7246
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7247
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7250
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7251
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7254
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 7255
        .trainerName = _("TRENT"),
#line 7256
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7257
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7259
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7260
        .doubleBattle = FALSE,
#line 7261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7263
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7264
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7267
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7268
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7271
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7272
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7275
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7276
        .trainerName = _("LENNY"),
#line 7277
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7278
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7280
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7281
        .doubleBattle = FALSE,
#line 7282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7284
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7285
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7288
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7289
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7292
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
#line 7293
        .trainerName = _("LUCAS"),
#line 7294
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7295
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7297
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7298
        .doubleBattle = FALSE,
#line 7299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7301
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7302
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7305
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7306
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7309
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7310
        .trainerName = _("ALAN"),
#line 7311
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7312
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7314
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7315
        .doubleBattle = FALSE,
#line 7316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7318
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7319
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7322
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7323
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7326
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7327
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7330
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7331
        .trainerName = _("CLARK"),
#line 7332
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7333
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7335
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7336
        .doubleBattle = FALSE,
#line 7337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7339
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7340
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7343
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7344
        .trainerName = _("ERIC"),
#line 7345
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7346
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7348
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7349
        .doubleBattle = FALSE,
#line 7350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7352
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7353
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7356
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7357
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7360
    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
#line 7361
        .trainerName = _("MIKE"),
#line 7362
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7363
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7365
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7366
        .doubleBattle = FALSE,
#line 7367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7369
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7370
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7373
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7374
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7377
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7378
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7381
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7382
        .trainerName = _("DEZ & LUKE"),
#line 7383
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7384
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7386
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7387
        .doubleBattle = TRUE,
#line 7388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7390
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7391
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7394
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7395
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7398
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 7399
        .trainerName = _("LEA & JED"),
#line 7400
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7401
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7403
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7404
        .doubleBattle = TRUE,
#line 7405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7407
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7408
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7411
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7412
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7415
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 7416
        .trainerName = _("KIRA & DAN"),
#line 7417
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7418
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7420
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7421
        .doubleBattle = TRUE,
#line 7422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7424
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7425
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7428
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7429
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7432
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 7433
        .trainerName = _("JOHANNA"),
#line 7434
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7435
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 7436
F_TRAINER_FEMALE | 
#line 7437
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7438
        .doubleBattle = FALSE,
#line 7439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7441
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7442
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7445
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 7446
        .trainerName = _("GERALD"),
#line 7447
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7448
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7450
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7451
        .items = { ITEM_HYPER_POTION },
#line 7452
        .doubleBattle = FALSE,
#line 7453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7455
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7457
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7456
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7458
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 7463
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 7464
        .trainerName = _("VIVIAN"),
#line 7465
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7466
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7467
F_TRAINER_FEMALE | 
#line 7468
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7469
        .doubleBattle = FALSE,
#line 7470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7472
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7474
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7473
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7475
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7480
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7481
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7483
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 7488
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 7489
        .trainerName = _("DANIELLE"),
#line 7490
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7491
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7492
F_TRAINER_FEMALE | 
#line 7493
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7494
        .doubleBattle = FALSE,
#line 7495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7497
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7499
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7498
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7500
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7505
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 7506
        .trainerName = _("HIDEO"),
#line 7507
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7508
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7510
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7511
        .doubleBattle = FALSE,
#line 7512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7514
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7515
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7517
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 7522
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7523
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7525
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 7530
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 7531
        .trainerName = _("KEIGO"),
#line 7532
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7533
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7535
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7536
        .doubleBattle = FALSE,
#line 7537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7539
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7540
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7542
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 7547
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7548
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7550
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7555
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 7556
        .trainerName = _("RILEY"),
#line 7557
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7558
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7560
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7561
        .doubleBattle = FALSE,
#line 7562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7564
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7565
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7567
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 7572
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7573
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7575
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 7580
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 7581
        .trainerName = _("FLINT"),
#line 7582
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7583
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7586
        .doubleBattle = FALSE,
#line 7587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7589
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7593
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7595
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7594
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7597
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 7598
        .trainerName = _("ASHLEY"),
#line 7599
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7600
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7601
F_TRAINER_FEMALE | 
#line 7602
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7603
        .doubleBattle = FALSE,
#line 7604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7606
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7607
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7610
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7612
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7611
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7614
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7616
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7615
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7618
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 7619
        .trainerName = _("WALLY"),
#line 7620
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7621
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7623
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7624
        .doubleBattle = FALSE,
#line 7625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7627
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7629
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7628
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7631
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
#line 7632
        .trainerName = _("WALLY"),
#line 7633
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7634
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7636
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7637
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7638
        .doubleBattle = FALSE,
#line 7639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7641
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7643
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7642
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7644
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7649
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7651
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7650
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7652
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7657
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7658
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7660
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7665
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7667
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7666
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7668
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7673
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7675
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7674
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7676
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7681
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_3] =
    {
#line 7682
        .trainerName = _("WALLY"),
#line 7683
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7684
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7686
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7687
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7688
        .doubleBattle = FALSE,
#line 7689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7691
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7693
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7692
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7694
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7699
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7700
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7702
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7707
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7708
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7710
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7715
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7717
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7716
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7718
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7723
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7725
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7724
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7726
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7731
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_4] =
    {
#line 7732
        .trainerName = _("WALLY"),
#line 7733
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7734
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7736
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7737
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7738
        .doubleBattle = FALSE,
#line 7739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7741
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7743
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7742
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7744
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7749
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7751
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7750
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7752
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7757
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7759
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7758
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7760
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7765
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7767
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7766
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7768
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7773
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7775
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7774
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7776
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7781
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_5] =
    {
#line 7782
        .trainerName = _("WALLY"),
#line 7783
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7784
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7786
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7787
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7788
        .doubleBattle = FALSE,
#line 7789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7791
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7793
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7792
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7794
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7799
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7800
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7802
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7807
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7808
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7810
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7815
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7816
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7818
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7823
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7824
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7826
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7831
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 7832
        .trainerName = _("BRENDAN"),
#line 7833
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7834
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7836
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7837
        .doubleBattle = FALSE,
#line 7838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7840
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7842
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7841
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7844
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7846
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7845
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7848
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7849
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7852
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7854
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7853
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7856
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 7857
        .trainerName = _("BRENDAN"),
#line 7858
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7859
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7861
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7862
        .doubleBattle = FALSE,
#line 7863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7865
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7867
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7866
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7869
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7871
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7870
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7873
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7875
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7874
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7877
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7879
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7878
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7881
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 7882
        .trainerName = _("BRENDAN"),
#line 7883
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7884
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7886
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7887
        .doubleBattle = FALSE,
#line 7888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7890
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7891
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7894
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7895
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7898
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7899
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7902
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7903
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7906
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 7907
        .trainerName = _("MAY"),
#line 7908
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7909
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7910
F_TRAINER_FEMALE | 
#line 7911
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7912
        .doubleBattle = FALSE,
#line 7913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7915
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7917
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7916
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7919
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7921
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7920
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7923
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7924
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7927
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7928
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7931
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 7932
        .trainerName = _("MAY"),
#line 7933
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7934
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7935
F_TRAINER_FEMALE | 
#line 7936
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7937
        .doubleBattle = FALSE,
#line 7938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7940
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7942
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7941
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7944
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7946
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7945
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7948
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7950
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7949
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7952
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7954
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7953
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7956
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 7957
        .trainerName = _("MAY"),
#line 7958
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7959
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7960
F_TRAINER_FEMALE | 
#line 7961
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7962
        .doubleBattle = FALSE,
#line 7963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7965
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7967
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7966
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7969
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7971
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7970
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7973
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7975
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7974
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7977
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7979
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7978
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7981
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 7982
        .trainerName = _("JONAH"),
#line 7983
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 7984
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 7986
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7987
        .doubleBattle = FALSE,
#line 7988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7990
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7991
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7994
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7995
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7998
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7999
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8002
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8003
        .trainerName = _("HENRY"),
#line 8004
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8005
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8007
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8008
        .doubleBattle = FALSE,
#line 8009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8011
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8012
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8015
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8016
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8019
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8020
        .trainerName = _("ROGER"),
#line 8021
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8022
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8024
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8025
        .doubleBattle = FALSE,
#line 8026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8028
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8029
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8032
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8033
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8036
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8037
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8040
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8041
        .trainerName = _("ALEXA"),
#line 8042
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8043
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8044
F_TRAINER_FEMALE | 
#line 8045
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8046
        .items = { ITEM_FULL_RESTORE },
#line 8047
        .doubleBattle = FALSE,
#line 8048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8050
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8052
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8051
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8054
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8056
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8055
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8058
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8059
        .trainerName = _("RUBEN"),
#line 8060
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8061
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8063
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8064
        .items = { ITEM_HYPER_POTION },
#line 8065
        .doubleBattle = FALSE,
#line 8066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8068
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8070
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8069
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8072
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8074
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8073
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8076
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 8077
        .trainerName = _("KOJI"),
#line 8078
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8079
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8081
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8082
        .doubleBattle = FALSE,
#line 8083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8085
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8086
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8089
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8090
        .trainerName = _("WAYNE"),
#line 8091
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8092
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8094
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8095
        .doubleBattle = FALSE,
#line 8096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8098
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8099
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8102
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8103
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8106
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8107
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8110
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8111
        .trainerName = _("AIDAN"),
#line 8112
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8113
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8115
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8116
        .doubleBattle = FALSE,
#line 8117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8119
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8120
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8123
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8124
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8127
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8128
        .trainerName = _("REED"),
#line 8129
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8130
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8132
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8133
        .doubleBattle = FALSE,
#line 8134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8136
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8137
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8140
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8141
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8144
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8145
        .trainerName = _("TISHA"),
#line 8146
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8147
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8148
F_TRAINER_FEMALE | 
#line 8149
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8150
        .doubleBattle = FALSE,
#line 8151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8153
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8154
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8157
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8158
        .trainerName = _("TORI & TIA"),
#line 8159
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8160
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8162
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8163
        .doubleBattle = TRUE,
#line 8164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8166
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8167
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8170
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8171
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8174
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8175
        .trainerName = _("KIM & IRIS"),
#line 8176
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8177
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8179
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8180
        .doubleBattle = TRUE,
#line 8181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8183
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8184
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8186
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 8191
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8192
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8194
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 8199
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8200
        .trainerName = _("TYRA & IVY"),
#line 8201
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8202
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8204
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8205
        .doubleBattle = TRUE,
#line 8206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8208
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8209
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8211
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 8216
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8217
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8219
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 8224
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8225
        .trainerName = _("MEL & PAUL"),
#line 8226
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8227
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8229
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8230
        .doubleBattle = TRUE,
#line 8231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8233
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8234
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8236
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 8241
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8242
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8244
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 8249
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 8250
        .trainerName = _("JOHN & JAY"),
#line 8251
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8252
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8254
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8255
        .doubleBattle = TRUE,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8259
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8261
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 8266
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8267
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8269
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 8274
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8275
        .trainerName = _("RELI & IAN"),
#line 8276
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8277
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8279
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8280
        .doubleBattle = TRUE,
#line 8281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8283
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8284
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8287
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8288
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8291
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 8292
        .trainerName = _("LILA & ROY"),
#line 8293
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8294
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8296
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8297
        .doubleBattle = TRUE,
#line 8298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8300
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8301
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8304
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8305
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8308
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8309
        .trainerName = _("LISA & RAY"),
#line 8310
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8311
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8313
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8314
        .doubleBattle = TRUE,
#line 8315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8317
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8318
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8321
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8322
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8325
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8326
        .trainerName = _("CHRIS"),
#line 8327
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8328
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8330
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8331
        .doubleBattle = FALSE,
#line 8332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8334
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8335
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8338
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8339
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8342
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8343
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8346
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8347
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8350
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8351
        .trainerName = _("DAWSON"),
#line 8352
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8353
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8355
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8356
        .doubleBattle = FALSE,
#line 8357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8359
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8359
            .heldItem = ITEM_NUGGET,
#line 8361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8360
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8363
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8364
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8367
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8368
        .trainerName = _("SARAH"),
#line 8369
        .trainerClass = TRAINER_CLASS_LADY,
#line 8370
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8371
F_TRAINER_FEMALE | 
#line 8372
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8373
        .items = { ITEM_FULL_RESTORE },
#line 8374
        .doubleBattle = FALSE,
#line 8375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8377
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8378
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8381
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8381
            .heldItem = ITEM_NUGGET,
#line 8383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8382
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8385
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8386
        .trainerName = _("DARIAN"),
#line 8387
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8388
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8390
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8391
        .doubleBattle = FALSE,
#line 8392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8394
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8395
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8398
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8399
        .trainerName = _("HAILEY"),
#line 8400
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8401
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8402
F_TRAINER_FEMALE | 
#line 8403
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8404
        .doubleBattle = FALSE,
#line 8405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8407
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8408
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8411
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8412
        .trainerName = _("CHANDLER"),
#line 8413
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8414
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8416
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8417
        .doubleBattle = FALSE,
#line 8418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8420
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8421
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8424
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8425
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8428
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8429
        .trainerName = _("KALEB"),
#line 8430
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8431
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8433
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8434
        .doubleBattle = FALSE,
#line 8435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8437
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8437
            .heldItem = ITEM_ORAN_BERRY,
#line 8439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8438
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8441
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8441
            .heldItem = ITEM_ORAN_BERRY,
#line 8443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8442
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8445
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8446
        .trainerName = _("JOSEPH"),
#line 8447
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8448
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8450
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8451
        .doubleBattle = FALSE,
#line 8452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8454
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8455
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8458
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8459
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8462
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8463
        .trainerName = _("ALYSSA"),
#line 8464
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8465
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8466
F_TRAINER_FEMALE | 
#line 8467
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8468
        .doubleBattle = FALSE,
#line 8469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8471
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8472
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8475
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8476
        .trainerName = _("MARCOS"),
#line 8477
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8478
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8480
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8481
        .doubleBattle = FALSE,
#line 8482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8484
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8486
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8485
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8488
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8489
        .trainerName = _("RHETT"),
#line 8490
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8491
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8493
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8494
        .doubleBattle = FALSE,
#line 8495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8497
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8498
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8501
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8502
        .trainerName = _("TYRON"),
#line 8503
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8504
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8506
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8507
        .doubleBattle = FALSE,
#line 8508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8510
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8511
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8514
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8515
        .trainerName = _("CELINA"),
#line 8516
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8517
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8518
F_TRAINER_FEMALE | 
#line 8519
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8520
        .doubleBattle = FALSE,
#line 8521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8523
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8524
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8527
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8528
        .trainerName = _("BIANCA"),
#line 8529
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8530
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8531
F_TRAINER_FEMALE | 
#line 8532
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8533
        .doubleBattle = FALSE,
#line 8534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8536
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8537
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8540
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8541
        .trainerName = _("HAYDEN"),
#line 8542
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 8543
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 8545
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8546
        .doubleBattle = FALSE,
#line 8547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8549
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8550
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8553
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8554
        .trainerName = _("SOPHIE"),
#line 8555
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8556
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8557
F_TRAINER_FEMALE | 
#line 8558
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8559
        .doubleBattle = FALSE,
#line 8560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8562
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8563
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8566
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8567
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8570
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8571
        .trainerName = _("COBY"),
#line 8572
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8573
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8575
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8576
        .doubleBattle = FALSE,
#line 8577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8579
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8580
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8583
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8584
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8587
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8588
        .trainerName = _("LAWRENCE"),
#line 8589
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8590
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8592
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8593
        .doubleBattle = FALSE,
#line 8594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8596
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8597
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8600
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8601
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8604
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8605
        .trainerName = _("WYATT"),
#line 8606
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8607
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8609
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8610
        .doubleBattle = FALSE,
#line 8611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8613
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8614
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8617
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8618
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8621
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8622
        .trainerName = _("ANGELINA"),
#line 8623
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8624
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8625
F_TRAINER_FEMALE | 
#line 8626
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8627
        .doubleBattle = FALSE,
#line 8628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8630
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8631
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8634
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8635
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8638
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8639
        .trainerName = _("KAI"),
#line 8640
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8641
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8643
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8644
        .doubleBattle = FALSE,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8648
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8651
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 8652
        .trainerName = _("CHARLOTTE"),
#line 8653
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8654
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8655
F_TRAINER_FEMALE | 
#line 8656
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8657
        .doubleBattle = FALSE,
#line 8658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8660
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8661
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8664
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 8665
        .trainerName = _("DEANDRE"),
#line 8666
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 8667
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 8669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8670
        .doubleBattle = FALSE,
#line 8671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8673
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8674
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8677
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8678
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8681
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8682
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8685
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 8686
        .trainerName = _("GRUNT"),
#line 8687
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8688
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8690
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8691
        .doubleBattle = FALSE,
#line 8692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8694
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8695
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 8699
        .trainerName = _("GRUNT"),
#line 8700
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8701
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8703
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8704
        .doubleBattle = FALSE,
#line 8705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8708
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8711
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 8712
        .trainerName = _("GRUNT"),
#line 8713
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8714
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8716
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8717
        .doubleBattle = FALSE,
#line 8718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8720
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8721
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8724
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 8725
        .trainerName = _("GRUNT"),
#line 8726
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8727
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8729
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8730
        .doubleBattle = FALSE,
#line 8731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8733
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8734
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8737
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8738
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8741
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 8742
        .trainerName = _("GRUNT"),
#line 8743
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8744
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8746
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8747
        .doubleBattle = FALSE,
#line 8748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8750
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8751
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8754
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8755
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8758
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 8759
        .trainerName = _("GRUNT"),
#line 8760
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8761
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8763
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8764
        .doubleBattle = FALSE,
#line 8765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8767
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8768
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8771
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 8772
        .trainerName = _("GRUNT"),
#line 8773
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8774
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8776
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8777
        .doubleBattle = FALSE,
#line 8778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8780
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8781
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8784
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 8785
        .trainerName = _("GRUNT"),
#line 8786
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8787
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8789
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8790
        .doubleBattle = FALSE,
#line 8791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8793
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8794
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8797
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 8798
        .trainerName = _("GRUNT"),
#line 8799
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8800
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8802
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8803
        .doubleBattle = FALSE,
#line 8804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8806
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8807
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8810
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 8811
        .trainerName = _("GRUNT"),
#line 8812
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8813
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8815
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8816
        .doubleBattle = FALSE,
#line 8817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8819
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8820
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8823
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 8824
        .trainerName = _("GRUNT"),
#line 8825
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8826
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8828
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8829
        .doubleBattle = FALSE,
#line 8830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8833
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8836
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 8837
        .trainerName = _("GRUNT"),
#line 8838
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8839
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8841
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8842
        .doubleBattle = FALSE,
#line 8843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8845
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8846
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8849
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 8850
        .trainerName = _("GRUNT"),
#line 8851
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8852
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8854
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8855
        .doubleBattle = FALSE,
#line 8856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8858
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8859
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8862
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 8863
        .trainerName = _("GRUNT"),
#line 8864
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8865
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8866
F_TRAINER_FEMALE | 
#line 8867
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8868
        .doubleBattle = FALSE,
#line 8869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8871
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8872
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8875
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 8876
        .trainerName = _("GRUNT"),
#line 8877
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8878
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8879
F_TRAINER_FEMALE | 
#line 8880
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8881
        .doubleBattle = FALSE,
#line 8882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8884
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8885
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8888
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 8889
        .trainerName = _("GRUNT"),
#line 8890
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8891
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8892
F_TRAINER_FEMALE | 
#line 8893
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8894
        .doubleBattle = FALSE,
#line 8895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8897
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8898
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8901
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 8902
        .trainerName = _("TABITHA"),
#line 8903
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8904
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 8906
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8907
        .doubleBattle = FALSE,
#line 8908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8910
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8912
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8911
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8914
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8915
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8918
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8920
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8919
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8922
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8924
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8923
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8926
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 8927
        .trainerName = _("DARCY"),
#line 8928
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8929
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8930
F_TRAINER_FEMALE | 
#line 8931
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8932
        .items = { ITEM_HYPER_POTION },
#line 8933
        .doubleBattle = FALSE,
#line 8934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8936
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8937
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8940
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8941
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8944
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 8945
        .trainerName = _("MAXIE"),
#line 8946
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8947
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8949
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8950
        .doubleBattle = FALSE,
#line 8951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8953
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8954
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8957
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8959
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8958
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8961
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8963
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8962
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8965
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 8966
        .trainerName = _("PETE"),
#line 8967
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8968
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8970
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8971
        .doubleBattle = FALSE,
#line 8972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8974
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8975
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8978
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 8979
        .trainerName = _("ISABELLE"),
#line 8980
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8981
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8982
F_TRAINER_FEMALE | 
#line 8983
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8984
        .doubleBattle = FALSE,
#line 8985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8987
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8988
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8991
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 8992
        .trainerName = _("ANDRES"),
#line 8993
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 8994
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 8996
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8997
        .doubleBattle = FALSE,
#line 8998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9000
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9002
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9001
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9004
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9006
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9005
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9008
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9009
        .trainerName = _("JOSUE"),
#line 9010
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9011
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9013
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9014
        .doubleBattle = FALSE,
#line 9015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9017
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9019
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9018
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9021
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9023
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9022
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9025
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9026
        .trainerName = _("CAMRON"),
#line 9027
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9028
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9030
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9031
        .doubleBattle = FALSE,
#line 9032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9034
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9035
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9038
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 9039
        .trainerName = _("CORY"),
#line 9040
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9041
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9043
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9044
        .doubleBattle = FALSE,
#line 9045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9047
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9048
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9051
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9052
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9055
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9056
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9059
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9060
        .trainerName = _("CAROLINA"),
#line 9061
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9062
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9063
F_TRAINER_FEMALE | 
#line 9064
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9065
        .items = { ITEM_HYPER_POTION },
#line 9066
        .doubleBattle = FALSE,
#line 9067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9069
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9071
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9070
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9073
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9075
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9074
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9077
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9079
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9078
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9081
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9082
        .trainerName = _("ELIJAH"),
#line 9083
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9084
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9086
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9087
        .doubleBattle = FALSE,
#line 9088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9090
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9091
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9094
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9095
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9098
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9099
        .trainerName = _("CELIA"),
#line 9100
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9101
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9102
F_TRAINER_FEMALE | 
#line 9103
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9104
        .doubleBattle = FALSE,
#line 9105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9107
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9108
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9111
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9112
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9115
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9116
        .trainerName = _("BRYAN"),
#line 9117
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9118
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9120
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9121
        .doubleBattle = FALSE,
#line 9122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9124
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9125
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9128
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9129
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9132
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9133
        .trainerName = _("BRANDEN"),
#line 9134
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9135
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9138
        .doubleBattle = FALSE,
#line 9139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9141
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9142
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9145
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9146
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9149
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9150
        .trainerName = _("BRYANT"),
#line 9151
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9152
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9154
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9155
        .doubleBattle = FALSE,
#line 9156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9158
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9159
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9162
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9163
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9166
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9167
        .trainerName = _("SHAYLA"),
#line 9168
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9169
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9170
F_TRAINER_FEMALE | 
#line 9171
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9172
        .doubleBattle = FALSE,
#line 9173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9175
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9176
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9179
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9180
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9183
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9184
        .trainerName = _("KYRA"),
#line 9185
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9186
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9187
F_TRAINER_FEMALE | 
#line 9188
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9189
        .doubleBattle = FALSE,
#line 9190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9192
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9193
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9196
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9197
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9200
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9201
        .trainerName = _("JAIDEN"),
#line 9202
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9203
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9205
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9206
        .doubleBattle = FALSE,
#line 9207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9209
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9210
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9213
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9214
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9217
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9218
        .trainerName = _("ALIX"),
#line 9219
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9220
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9221
F_TRAINER_FEMALE | 
#line 9222
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9223
        .doubleBattle = FALSE,
#line 9224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9226
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9227
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9230
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9231
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9234
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9235
        .trainerName = _("HELENE"),
#line 9236
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9237
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9238
F_TRAINER_FEMALE | 
#line 9239
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9240
        .doubleBattle = FALSE,
#line 9241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9243
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9244
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9247
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9248
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9251
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9252
        .trainerName = _("MARLENE"),
#line 9253
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9254
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9255
F_TRAINER_FEMALE | 
#line 9256
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9257
        .doubleBattle = FALSE,
#line 9258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9260
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9261
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9264
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9265
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9268
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9269
        .trainerName = _("DEVAN"),
#line 9270
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9271
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9273
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9274
        .doubleBattle = FALSE,
#line 9275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9277
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9278
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9281
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9282
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9285
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9286
        .trainerName = _("JOHNSON"),
#line 9287
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9288
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9290
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9291
        .doubleBattle = FALSE,
#line 9292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9294
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9295
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9298
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9299
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9302
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9303
        .trainerName = _("MELINA"),
#line 9304
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9305
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9306
F_TRAINER_FEMALE | 
#line 9307
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9308
        .doubleBattle = FALSE,
#line 9309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9311
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9312
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9315
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9316
        .trainerName = _("BRANDI"),
#line 9317
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9318
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9319
F_TRAINER_FEMALE | 
#line 9320
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9321
        .doubleBattle = FALSE,
#line 9322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9324
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9325
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9328
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9329
        .trainerName = _("AISHA"),
#line 9330
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9331
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9332
F_TRAINER_FEMALE | 
#line 9333
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9334
        .doubleBattle = FALSE,
#line 9335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9337
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9338
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9341
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9342
        .trainerName = _("MAKAYLA"),
#line 9343
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9344
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9345
F_TRAINER_FEMALE | 
#line 9346
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9347
        .items = { ITEM_HYPER_POTION },
#line 9348
        .doubleBattle = FALSE,
#line 9349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9351
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9352
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9355
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9356
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9359
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9360
        .trainerName = _("FABIAN"),
#line 9361
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9362
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9364
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9365
        .doubleBattle = FALSE,
#line 9366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9368
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9369
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9372
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9373
        .trainerName = _("DAYTON"),
#line 9374
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9375
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9377
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9378
        .doubleBattle = FALSE,
#line 9379
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9381
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9382
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9385
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9386
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9389
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9390
        .trainerName = _("RACHEL"),
#line 9391
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9392
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9393
F_TRAINER_FEMALE | 
#line 9394
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9395
        .doubleBattle = FALSE,
#line 9396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9398
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9399
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9402
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9403
        .trainerName = _("LEONEL"),
#line 9404
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9405
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9407
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9408
        .items = { ITEM_HYPER_POTION },
#line 9409
        .doubleBattle = FALSE,
#line 9410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9412
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9414
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9413
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9415
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 9419
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9420
        .trainerName = _("CALLIE"),
#line 9421
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9422
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9423
F_TRAINER_FEMALE | 
#line 9424
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9425
        .doubleBattle = FALSE,
#line 9426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9428
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9429
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9432
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9433
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9436
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9437
        .trainerName = _("CALE"),
#line 9438
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9439
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9441
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9442
        .doubleBattle = FALSE,
#line 9443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9445
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9446
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9449
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9450
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9453
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9454
        .trainerName = _("MYLES"),
#line 9455
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9456
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9458
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9459
        .doubleBattle = FALSE,
#line 9460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9462
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9464
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9463
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9466
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9467
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9470
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9472
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9471
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9474
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9475
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9478
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9479
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9482
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9483
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9486
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9487
        .trainerName = _("PAT"),
#line 9488
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9489
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9490
F_TRAINER_FEMALE | 
#line 9491
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9492
        .doubleBattle = FALSE,
#line 9493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9495
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9496
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9499
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9501
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9500
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9503
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9505
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9504
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9507
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9509
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9508
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9511
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9513
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9512
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9515
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9517
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9516
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9519
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 9520
        .trainerName = _("CRISTIN"),
#line 9521
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9522
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9523
F_TRAINER_FEMALE | 
#line 9524
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9525
        .items = { ITEM_HYPER_POTION },
#line 9526
        .doubleBattle = FALSE,
#line 9527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9529
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9530
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9533
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9535
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9534
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9537
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9538
        .trainerName = _("MAY"),
#line 9539
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9540
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9541
F_TRAINER_FEMALE | 
#line 9542
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9543
        .doubleBattle = FALSE,
#line 9544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9547
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9550
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9551
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9555
        .trainerName = _("MAY"),
#line 9556
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9557
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9558
F_TRAINER_FEMALE | 
#line 9559
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9560
        .doubleBattle = FALSE,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9564
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9568
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
#line 9572
        .trainerName = _("ROXANNE"),
#line 9573
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9574
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 9575
F_TRAINER_FEMALE | 
#line 9576
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9577
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9578
        .doubleBattle = TRUE,
#line 9579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9581
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9582
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9584
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9589
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9589
            .heldItem = ITEM_SITRUS_BERRY,
#line 9591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9590
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9592
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9597
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9598
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9600
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9605
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9605
            .heldItem = ITEM_SITRUS_BERRY,
#line 9607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9606
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9608
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9613
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_3] =
    {
#line 9614
        .trainerName = _("ROXANNE"),
#line 9615
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9616
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 9617
F_TRAINER_FEMALE | 
#line 9618
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9619
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9620
        .doubleBattle = TRUE,
#line 9621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9623
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9624
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9626
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9631
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9632
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9634
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9639
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9639
            .heldItem = ITEM_SITRUS_BERRY,
#line 9641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9640
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9642
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9647
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9648
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9650
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9655
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9655
            .heldItem = ITEM_SITRUS_BERRY,
#line 9657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9656
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9658
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9663
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_4] =
    {
#line 9664
        .trainerName = _("ROXANNE"),
#line 9665
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9666
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 9667
F_TRAINER_FEMALE | 
#line 9668
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9669
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9670
        .doubleBattle = TRUE,
#line 9671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9673
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9674
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9676
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9681
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9682
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9684
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9689
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9689
            .heldItem = ITEM_SITRUS_BERRY,
#line 9691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9690
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9692
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9697
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9698
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9700
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9705
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9705
            .heldItem = ITEM_SITRUS_BERRY,
#line 9707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9706
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9708
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9713
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_5] =
    {
#line 9714
        .trainerName = _("ROXANNE"),
#line 9715
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9716
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 9717
F_TRAINER_FEMALE | 
#line 9718
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9719
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9720
        .doubleBattle = TRUE,
#line 9721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9723
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9724
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9726
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9731
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9732
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9734
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9739
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9740
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9742
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9747
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9747
            .heldItem = ITEM_SITRUS_BERRY,
#line 9749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9748
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9750
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9755
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9756
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9758
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9763
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9763
            .heldItem = ITEM_SITRUS_BERRY,
#line 9765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9764
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9766
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9771
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
#line 9772
        .trainerName = _("BRAWLY"),
#line 9773
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9774
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 9776
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9777
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9778
        .doubleBattle = TRUE,
#line 9779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9781
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9781
            .heldItem = ITEM_SITRUS_BERRY,
#line 9783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9782
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9784
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9789
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9790
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9792
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 9797
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9798
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9800
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9805
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9805
            .heldItem = ITEM_SITRUS_BERRY,
#line 9807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9806
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9808
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9813
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_3] =
    {
#line 9814
        .trainerName = _("BRAWLY"),
#line 9815
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9816
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 9818
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9819
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9820
        .doubleBattle = TRUE,
#line 9821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9823
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9823
            .heldItem = ITEM_SITRUS_BERRY,
#line 9825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9824
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9826
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9831
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9832
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9834
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 9839
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9840
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9842
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9847
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .heldItem = ITEM_SITRUS_BERRY,
#line 9849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9848
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9850
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9855
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_4] =
    {
#line 9856
        .trainerName = _("BRAWLY"),
#line 9857
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9858
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 9860
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9861
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9862
        .doubleBattle = TRUE,
#line 9863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9865
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9866
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9868
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9873
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9873
            .heldItem = ITEM_SITRUS_BERRY,
#line 9875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9874
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9876
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9881
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9882
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9884
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 9889
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9890
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9892
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9897
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9897
            .heldItem = ITEM_SITRUS_BERRY,
#line 9899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9898
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9900
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9905
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_5] =
    {
#line 9906
        .trainerName = _("BRAWLY"),
#line 9907
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9908
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 9910
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9911
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9912
        .doubleBattle = TRUE,
#line 9913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9915
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9916
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9918
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 9923
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9924
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9926
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9931
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9931
            .heldItem = ITEM_SITRUS_BERRY,
#line 9933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9932
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9934
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9939
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9940
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9942
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 9947
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9948
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9950
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9955
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9955
            .heldItem = ITEM_SITRUS_BERRY,
#line 9957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9956
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9958
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9963
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
#line 9964
        .trainerName = _("WATTSON"),
#line 9965
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9966
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 9968
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9969
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9970
        .doubleBattle = TRUE,
#line 9971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9973
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9974
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9976
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 9981
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9982
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9984
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 9989
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9989
            .heldItem = ITEM_SITRUS_BERRY,
#line 9991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9990
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9992
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 9997
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9997
            .heldItem = ITEM_SITRUS_BERRY,
#line 9999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9998
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10000
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10005
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_3] =
    {
#line 10006
        .trainerName = _("WATTSON"),
#line 10007
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10008
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10010
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10011
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10012
        .doubleBattle = TRUE,
#line 10013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10015
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10016
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10018
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 10023
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10024
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10026
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10031
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10032
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10034
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10039
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10039
            .heldItem = ITEM_SITRUS_BERRY,
#line 10041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10040
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10042
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10047
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10047
            .heldItem = ITEM_SITRUS_BERRY,
#line 10049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10048
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10050
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10055
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_4] =
    {
#line 10056
        .trainerName = _("WATTSON"),
#line 10057
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10058
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10060
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10061
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10062
        .doubleBattle = TRUE,
#line 10063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10065
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10066
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10068
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10073
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10074
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10076
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10081
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10082
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10084
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10089
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10089
            .heldItem = ITEM_SITRUS_BERRY,
#line 10091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10090
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10092
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10097
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10097
            .heldItem = ITEM_SITRUS_BERRY,
#line 10099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10098
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10100
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10105
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_5] =
    {
#line 10106
        .trainerName = _("WATTSON"),
#line 10107
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10108
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10110
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10111
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10112
        .doubleBattle = TRUE,
#line 10113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10115
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10116
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10118
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10123
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10124
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10126
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10131
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10132
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10134
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10139
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10140
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10142
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10147
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .heldItem = ITEM_SITRUS_BERRY,
#line 10149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10148
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10150
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10155
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10155
            .heldItem = ITEM_SITRUS_BERRY,
#line 10157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10156
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10158
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10163
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
#line 10164
        .trainerName = _("FLANNERY"),
#line 10165
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10166
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10167
F_TRAINER_FEMALE | 
#line 10168
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10169
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10170
        .doubleBattle = TRUE,
#line 10171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10173
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10173
            .heldItem = ITEM_WHITE_HERB,
#line 10175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10174
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10176
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10181
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10182
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10184
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10189
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .heldItem = ITEM_WHITE_HERB,
#line 10191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10190
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10192
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10197
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10197
            .heldItem = ITEM_WHITE_HERB,
#line 10199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10198
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10200
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10205
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_3] =
    {
#line 10206
        .trainerName = _("FLANNERY"),
#line 10207
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10208
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10209
F_TRAINER_FEMALE | 
#line 10210
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10211
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10212
        .doubleBattle = TRUE,
#line 10213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10215
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10216
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10218
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10223
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10223
            .heldItem = ITEM_WHITE_HERB,
#line 10225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10224
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10226
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10231
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10232
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10234
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10239
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10239
            .heldItem = ITEM_WHITE_HERB,
#line 10241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10240
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10242
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10247
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .heldItem = ITEM_WHITE_HERB,
#line 10249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10248
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10250
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10255
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_4] =
    {
#line 10256
        .trainerName = _("FLANNERY"),
#line 10257
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10258
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10259
F_TRAINER_FEMALE | 
#line 10260
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10261
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10262
        .doubleBattle = TRUE,
#line 10263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10265
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10266
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10268
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10273
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10274
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10276
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10281
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10281
            .heldItem = ITEM_WHITE_HERB,
#line 10283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10282
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10284
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10289
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10290
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10292
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10297
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10297
            .heldItem = ITEM_WHITE_HERB,
#line 10299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10298
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10300
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10305
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10305
            .heldItem = ITEM_WHITE_HERB,
#line 10307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10306
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10308
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10313
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_5] =
    {
#line 10314
        .trainerName = _("FLANNERY"),
#line 10315
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10316
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10317
F_TRAINER_FEMALE | 
#line 10318
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10319
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10320
        .doubleBattle = TRUE,
#line 10321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10323
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10324
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10326
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10331
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10331
            .heldItem = ITEM_WHITE_HERB,
#line 10333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10332
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10334
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10339
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10340
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10342
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10347
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10348
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10350
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10355
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10355
            .heldItem = ITEM_WHITE_HERB,
#line 10357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10356
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10358
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10363
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10363
            .heldItem = ITEM_WHITE_HERB,
#line 10365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10364
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10366
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10371
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
#line 10372
        .trainerName = _("NORMAN"),
#line 10373
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10374
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10376
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10377
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10378
        .doubleBattle = TRUE,
#line 10379
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10381
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10382
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10384
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10389
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10389
            .heldItem = ITEM_SITRUS_BERRY,
#line 10391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10390
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10392
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10397
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10398
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10400
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10405
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10405
            .heldItem = ITEM_SITRUS_BERRY,
#line 10407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10406
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10408
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10413
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_3] =
    {
#line 10414
        .trainerName = _("NORMAN"),
#line 10415
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10416
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10418
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10419
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10420
        .doubleBattle = TRUE,
#line 10421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10423
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10423
            .heldItem = ITEM_SITRUS_BERRY,
#line 10425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10424
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10426
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10431
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10432
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10434
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10439
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10440
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10442
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10447
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10448
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10450
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10455
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10455
            .heldItem = ITEM_SITRUS_BERRY,
#line 10457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10456
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10458
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10463
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_4] =
    {
#line 10464
        .trainerName = _("NORMAN"),
#line 10465
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10466
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10468
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10469
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10470
        .doubleBattle = TRUE,
#line 10471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10473
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10473
            .heldItem = ITEM_SITRUS_BERRY,
#line 10475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10474
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10476
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10481
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10482
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10484
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10489
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10490
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10492
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10497
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10498
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10500
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10505
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10505
            .heldItem = ITEM_SITRUS_BERRY,
#line 10507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10506
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10508
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10513
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_5] =
    {
#line 10514
        .trainerName = _("NORMAN"),
#line 10515
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10516
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10518
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10519
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10520
        .doubleBattle = TRUE,
#line 10521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10523
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10523
            .heldItem = ITEM_SITRUS_BERRY,
#line 10525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10524
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10526
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10531
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10532
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10534
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10539
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10540
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10542
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10547
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10548
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10550
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10555
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10556
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10558
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10563
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10563
            .heldItem = ITEM_SITRUS_BERRY,
#line 10565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10564
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10566
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10571
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10572
        .trainerName = _("WINONA"),
#line 10573
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10574
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 10575
F_TRAINER_FEMALE | 
#line 10576
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10577
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10578
        .doubleBattle = TRUE,
#line 10579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10581
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10581
            .heldItem = ITEM_SITRUS_BERRY,
#line 10583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10582
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10584
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10589
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10590
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10592
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10597
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10598
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10600
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10605
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10606
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10608
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10613
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10613
            .heldItem = ITEM_CHESTO_BERRY,
#line 10615
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10614
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10616
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10621
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10622
        .trainerName = _("WINONA"),
#line 10623
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10624
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 10625
F_TRAINER_FEMALE | 
#line 10626
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10627
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10628
        .doubleBattle = TRUE,
#line 10629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10631
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10632
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10634
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10639
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10640
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10642
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10647
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10647
            .heldItem = ITEM_SITRUS_BERRY,
#line 10649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10648
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10650
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10655
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10656
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10658
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10663
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10664
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10666
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10671
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10671
            .heldItem = ITEM_CHESTO_BERRY,
#line 10673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10672
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10674
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10679
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10680
        .trainerName = _("WINONA"),
#line 10681
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10682
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 10683
F_TRAINER_FEMALE | 
#line 10684
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10685
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10686
        .doubleBattle = TRUE,
#line 10687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10689
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10690
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10692
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10697
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10698
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10700
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10705
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10705
            .heldItem = ITEM_SITRUS_BERRY,
#line 10707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10706
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10708
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10713
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10714
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10716
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10721
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10722
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10724
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10729
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10729
            .heldItem = ITEM_CHESTO_BERRY,
#line 10731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10730
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10732
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10737
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 10738
        .trainerName = _("WINONA"),
#line 10739
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10740
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 10741
F_TRAINER_FEMALE | 
#line 10742
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10743
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10744
        .doubleBattle = TRUE,
#line 10745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10747
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10748
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10750
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10755
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10756
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10758
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10763
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10764
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10766
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10771
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10771
            .heldItem = ITEM_SITRUS_BERRY,
#line 10773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10772
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10774
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10779
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10780
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10782
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10787
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10787
            .heldItem = ITEM_CHESTO_BERRY,
#line 10789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10788
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10790
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10795
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10796
        .trainerName = _("TATE&LIZA"),
#line 10797
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10798
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10800
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10801
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10802
        .doubleBattle = TRUE,
#line 10803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10805
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10806
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10808
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10813
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10814
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10816
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10821
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10821
            .heldItem = ITEM_CHESTO_BERRY,
#line 10823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10822
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10824
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10829
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10829
            .heldItem = ITEM_CHESTO_BERRY,
#line 10831
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10830
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10832
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10837
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10837
            .heldItem = ITEM_SITRUS_BERRY,
#line 10839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10838
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10840
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10845
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10846
        .trainerName = _("TATE&LIZA"),
#line 10847
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10848
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10850
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10851
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10852
        .doubleBattle = TRUE,
#line 10853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10855
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10856
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10858
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10863
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10864
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10866
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10871
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10872
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10874
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10879
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10879
            .heldItem = ITEM_CHESTO_BERRY,
#line 10881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10880
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10882
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10887
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10887
            .heldItem = ITEM_CHESTO_BERRY,
#line 10889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10888
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10890
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10895
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10895
            .heldItem = ITEM_SITRUS_BERRY,
#line 10897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10896
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10898
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10903
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10904
        .trainerName = _("TATE&LIZA"),
#line 10905
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10906
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10908
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10909
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10910
        .doubleBattle = TRUE,
#line 10911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10913
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10914
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10916
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10921
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10922
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10924
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10929
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10930
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10932
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10937
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10937
            .heldItem = ITEM_CHESTO_BERRY,
#line 10939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10938
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10940
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10945
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10945
            .heldItem = ITEM_CHESTO_BERRY,
#line 10947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10946
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10948
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10953
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10953
            .heldItem = ITEM_SITRUS_BERRY,
#line 10955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10954
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10956
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10961
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10962
        .trainerName = _("TATE&LIZA"),
#line 10963
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10964
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10966
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10967
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10968
        .doubleBattle = TRUE,
#line 10969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10971
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10972
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10974
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10979
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10980
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10982
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10987
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10988
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10990
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10995
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10995
            .heldItem = ITEM_CHESTO_BERRY,
#line 10997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10996
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10998
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11003
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11003
            .heldItem = ITEM_CHESTO_BERRY,
#line 11005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11004
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11006
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11011
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11011
            .heldItem = ITEM_SITRUS_BERRY,
#line 11013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11012
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11014
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11019
    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
#line 11020
        .trainerName = _("JUAN"),
#line 11021
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11022
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11024
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11025
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11026
        .doubleBattle = TRUE,
#line 11027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11029
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11030
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11032
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11037
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11039
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11038
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11040
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11045
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11046
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11048
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11053
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11053
            .heldItem = ITEM_CHESTO_BERRY,
#line 11055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11054
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11056
                MOVE_REST,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11061
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11061
            .heldItem = ITEM_CHESTO_BERRY,
#line 11063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11062
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11064
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11069
    [DIFFICULTY_NORMAL][TRAINER_JUAN_3] =
    {
#line 11070
        .trainerName = _("JUAN"),
#line 11071
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11072
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11074
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11075
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11076
        .doubleBattle = TRUE,
#line 11077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11079
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11080
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11082
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11087
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11088
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11090
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11095
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11096
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11098
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11103
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11103
            .heldItem = ITEM_CHESTO_BERRY,
#line 11105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11104
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11106
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11111
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11111
            .heldItem = ITEM_CHESTO_BERRY,
#line 11113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11112
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11114
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11119
    [DIFFICULTY_NORMAL][TRAINER_JUAN_4] =
    {
#line 11120
        .trainerName = _("JUAN"),
#line 11121
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11122
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11124
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11125
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11126
        .doubleBattle = TRUE,
#line 11127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11129
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11130
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11132
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11137
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11138
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11140
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11145
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11146
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11148
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11153
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11154
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11156
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11161
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11161
            .heldItem = ITEM_CHESTO_BERRY,
#line 11163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11162
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11164
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11169
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11169
            .heldItem = ITEM_CHESTO_BERRY,
#line 11171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11170
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11172
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11177
    [DIFFICULTY_NORMAL][TRAINER_JUAN_5] =
    {
#line 11178
        .trainerName = _("JUAN"),
#line 11179
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11180
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11182
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11183
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11184
        .doubleBattle = TRUE,
#line 11185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11187
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11188
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11190
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11195
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11196
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11198
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11203
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11204
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11206
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 11211
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11212
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11214
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 11219
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11219
            .heldItem = ITEM_CHESTO_BERRY,
#line 11221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11220
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11222
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11227
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11227
            .heldItem = ITEM_CHESTO_BERRY,
#line 11229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11228
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11230
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11235
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 11236
        .trainerName = _("ANGELO"),
#line 11237
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11238
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 11240
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11241
        .doubleBattle = FALSE,
#line 11242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11244
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11246
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11245
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11247
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11251
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11253
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11252
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11254
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11258
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 11259
        .trainerName = _("DARIUS"),
#line 11260
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11261
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 11263
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11264
        .doubleBattle = FALSE,
#line 11265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11267
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11269
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11268
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11271
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 11272
        .trainerName = _("STEVEN"),
#line 11273
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11274
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 11276
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11277
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11278
        .doubleBattle = FALSE,
#line 11279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11281
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11282
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11284
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11289
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11290
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11292
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11297
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11298
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11300
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11305
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11306
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11308
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11313
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11314
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11316
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11321
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11321
            .heldItem = ITEM_SITRUS_BERRY,
#line 11323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11322
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11324
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11329
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 11330
        .trainerName = _("ANABEL"),
#line 11331
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11332
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 11333
F_TRAINER_FEMALE | 
#line 11334
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11335
        .doubleBattle = FALSE,
#line 11336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11338
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11339
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11342
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 11343
        .trainerName = _("TUCKER"),
#line 11344
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11345
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 11347
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11348
        .doubleBattle = FALSE,
#line 11349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11351
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11352
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11355
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 11356
        .trainerName = _("SPENSER"),
#line 11357
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11358
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender =
#line 11360
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11361
        .doubleBattle = FALSE,
#line 11362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11364
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11365
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11368
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 11369
        .trainerName = _("GRETA"),
#line 11370
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11371
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender =
#line 11372
F_TRAINER_FEMALE | 
#line 11373
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11374
        .doubleBattle = FALSE,
#line 11375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11377
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11378
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11381
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 11382
        .trainerName = _("NOLAND"),
#line 11383
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11384
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 11386
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11387
        .doubleBattle = FALSE,
#line 11388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11390
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11391
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11394
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 11395
        .trainerName = _("LUCY"),
#line 11396
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11397
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 11398
F_TRAINER_FEMALE | 
#line 11399
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11400
        .doubleBattle = FALSE,
#line 11401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11403
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11404
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11407
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 11408
        .trainerName = _("BRANDON"),
#line 11409
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11410
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 11412
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11413
        .doubleBattle = FALSE,
#line 11414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11416
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11417
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11420
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 11421
        .trainerName = _("MARIELA"),
#line 11422
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11423
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 11424
F_TRAINER_FEMALE | 
#line 11425
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11426
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11428
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11429
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11432
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 11433
        .trainerName = _("ALVARO"),
#line 11434
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11435
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 11437
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11438
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11440
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11441
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11444
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11445
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11448
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 11449
        .trainerName = _("EVERETT"),
#line 11450
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11451
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 11453
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11454
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11456
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11457
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11460
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11461
        .trainerName = _("RED"),
#line 11462
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11463
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 11465
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11466
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11468
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11469
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11472
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11473
        .trainerName = _("LEAF"),
#line 11474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11475
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 11476
F_TRAINER_FEMALE | 
#line 11477
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11478
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11480
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11481
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11484
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11485
        .trainerName = _("BRENDAN"),
#line 11486
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11487
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 11489
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11490
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11492
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11493
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11496
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 11497
        .trainerName = _("MAY"),
#line 11498
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11499
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 11500
F_TRAINER_FEMALE | 
#line 11501
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11502
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11504
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11505
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11508
    [DIFFICULTY_NORMAL][TRAINER_WEEVIL] =
    {
#line 11509
        .trainerName = _("Weevil"),
#line 11510
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 11511
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 11513
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11514
        .doubleBattle = FALSE,
#line 11515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11517
            .species = SPECIES_SCYTHER,
#line 11517
            .gender = TRAINER_MON_MALE,
#line 11520
            .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
#line 11518
            .lvl = 3,
#line 11519
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11521
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
            },
            },
            {
#line 11524
            .species = SPECIES_HERACROSS,
#line 11524
            .gender = TRAINER_MON_MALE,
#line 11527
            .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
#line 11525
            .lvl = 3,
#line 11526
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11528
                MOVE_TACKLE,
                MOVE_LEER,
            },
            },
        },
    },
