//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [TRAINER_NONE] =
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
    [TRAINER_SAWYER_1] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_1] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
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
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
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
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
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
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
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
    [TRAINER_GABRIELLE_1] =
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
    [TRAINER_GRUNT_PETALBURG_WOODS] =
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
    [TRAINER_MARCEL] =
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
    [TRAINER_ALBERTO] =
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
    [TRAINER_ED] =
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
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
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
    [TRAINER_DECLAN] =
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
    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
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
    [TRAINER_GRUNT_WEATHER_INST_1] =
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
    [TRAINER_GRUNT_WEATHER_INST_2] =
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
    [TRAINER_GRUNT_WEATHER_INST_3] =
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
    [TRAINER_GRUNT_MUSEUM_1] =
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
    [TRAINER_GRUNT_MUSEUM_2] =
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
    [TRAINER_GRUNT_SPACE_CENTER_1] =
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
    [TRAINER_GRUNT_MT_PYRE_1] =
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
    [TRAINER_GRUNT_MT_PYRE_2] =
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
    [TRAINER_GRUNT_MT_PYRE_3] =
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
    [TRAINER_GRUNT_WEATHER_INST_4] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
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
    [TRAINER_FREDRICK] =
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
    [TRAINER_MATT] =
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
    [TRAINER_ZANDER] =
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
    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
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
    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
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
    [TRAINER_ARCHIE] =
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
    [TRAINER_LEAH] =
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
    [TRAINER_DAISY] =
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
    [TRAINER_ROSE_1] =
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
    [TRAINER_FELIX] =
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
    [TRAINER_VIOLET] =
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
    [TRAINER_DUSTY_1] =
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
    [TRAINER_CHIP] =
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
    [TRAINER_FOSTER] =
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
    [TRAINER_GABBY_AND_TY_1] =
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
    [TRAINER_GABBY_AND_TY_2] =
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
    [TRAINER_GABBY_AND_TY_3] =
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
    [TRAINER_GABBY_AND_TY_4] =
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
    [TRAINER_GABBY_AND_TY_5] =
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
    [TRAINER_GABBY_AND_TY_6] =
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
    [TRAINER_LOLA_1] =
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
    [TRAINER_AUSTINA] =
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
    [TRAINER_GWEN] =
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
    [TRAINER_RICKY_1] =
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
    [TRAINER_SIMON] =
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
    [TRAINER_CHARLIE] =
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
    [TRAINER_RANDALL] =
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
    [TRAINER_PARKER] =
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
    [TRAINER_GEORGE] =
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
    [TRAINER_BERKE] =
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
    [TRAINER_BRAXTON] =
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
    [TRAINER_VINCENT] =
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
    [TRAINER_LEROY] =
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
    [TRAINER_WILTON_1] =
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
    [TRAINER_EDGAR] =
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
    [TRAINER_ALBERT] =
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
    [TRAINER_SAMUEL] =
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
    [TRAINER_VITO] =
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
    [TRAINER_OWEN] =
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
    [TRAINER_WARREN] =
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
    [TRAINER_MARY] =
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
    [TRAINER_ALEXIA] =
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
    [TRAINER_JODY] =
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
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
    [TRAINER_WENDY] =
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
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
    [TRAINER_KEIRA] =
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
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
    [TRAINER_BROOKE_1] =
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
    [TRAINER_JENNIFER] =
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
    [TRAINER_HOPE] =
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
    [TRAINER_SHANNON] =
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
    [TRAINER_MICHELLE] =
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
    [TRAINER_CAROLINE] =
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
    [TRAINER_JULIE] =
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
    [TRAINER_PATRICIA] =
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
    [TRAINER_KINDRA] =
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
    [TRAINER_TAMMY] =
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
    [TRAINER_VALERIE_1] =
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
    [TRAINER_TASHA] =
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
    [TRAINER_CINDY_1] =
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
    [TRAINER_DAPHNE] =
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
    [TRAINER_GRUNT_SPACE_CENTER_2] =
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
    [TRAINER_BRIANNA] =
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
    [TRAINER_NAOMI] =
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
    [TRAINER_MELISSA] =
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
    [TRAINER_SHEILA] =
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
    [TRAINER_SHIRLEY] =
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
    [TRAINER_JESSICA_1] =
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
    [TRAINER_CONNIE] =
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
    [TRAINER_BRIDGET] =
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
    [TRAINER_OLIVIA] =
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
    [TRAINER_TIFFANY] =
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
    [TRAINER_WINSTON_1] =
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
    [TRAINER_MOLLIE] =
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
    [TRAINER_GARRET] =
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
    [TRAINER_STEVE_1] =
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
    [TRAINER_THALIA_1] =
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
    [TRAINER_MARK] =
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
    [TRAINER_GRUNT_MT_CHIMNEY_1] =
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
    [TRAINER_LUIS] =
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
    [TRAINER_DOMINIK] =
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
    [TRAINER_DOUGLAS] =
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
    [TRAINER_DARRIN] =
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
    [TRAINER_TONY_1] =
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
    [TRAINER_JEROME] =
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
    [TRAINER_MATTHEW] =
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
    [TRAINER_DAVID] =
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
    [TRAINER_SPENCER] =
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
    [TRAINER_ROLAND] =
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
    [TRAINER_NOLEN] =
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
    [TRAINER_STAN] =
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
    [TRAINER_BARRY] =
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
    [TRAINER_DEAN] =
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
    [TRAINER_RODNEY] =
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
    [TRAINER_RICHARD] =
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
    [TRAINER_HERMAN] =
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
    [TRAINER_SANTIAGO] =
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
    [TRAINER_GILBERT] =
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
    [TRAINER_FRANKLIN] =
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
    [TRAINER_KEVIN] =
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
    [TRAINER_JACK] =
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
    [TRAINER_DUDLEY] =
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
    [TRAINER_CHAD] =
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
    [TRAINER_TAKAO] =
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
    [TRAINER_HITOSHI] =
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
    [TRAINER_KIYO] =
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
    [TRAINER_KOICHI] =
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
    [TRAINER_NOB_1] =
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
    [TRAINER_YUJI] =
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
    [TRAINER_DAISUKE] =
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
    [TRAINER_ATSUSHI] =
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
    [TRAINER_KIRK] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
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
    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
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
    [TRAINER_SHAWN] =
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
    [TRAINER_FERNANDO_1] =
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
    [TRAINER_DALTON_1] =
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
    [TRAINER_COLE] =
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
    [TRAINER_JEFF] =
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
    [TRAINER_AXLE] =
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
    [TRAINER_JACE] =
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
    [TRAINER_KEEGAN] =
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
    [TRAINER_BERNIE_1] =
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
    [TRAINER_DREW] =
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
    [TRAINER_BEAU] =
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
    [TRAINER_LARRY] =
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
    [TRAINER_SHANE] =
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
    [TRAINER_JUSTIN] =
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
    [TRAINER_ETHAN_1] =
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
    [TRAINER_AUTUMN] =
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
    [TRAINER_TRAVIS] =
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
    [TRAINER_BRENT] =
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
    [TRAINER_DONALD] =
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
    [TRAINER_TAYLOR] =
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
    [TRAINER_JEFFREY_1] =
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
    [TRAINER_DEREK] =
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
    [TRAINER_EDWARD] =
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
    [TRAINER_PRESTON] =
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
    [TRAINER_VIRGIL] =
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
    [TRAINER_BLAKE] =
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
    [TRAINER_WILLIAM] =
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
    [TRAINER_JOSHUA] =
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
    [TRAINER_CAMERON_1] =
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
    [TRAINER_JACLYN] =
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
    [TRAINER_HANNAH] =
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
    [TRAINER_SAMANTHA] =
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
    [TRAINER_MAURA] =
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
    [TRAINER_KAYLA] =
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
    [TRAINER_ALEXIS] =
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
    [TRAINER_JACKI_1] =
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
    [TRAINER_WALTER_1] =
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
    [TRAINER_MICAH] =
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
    [TRAINER_THOMAS] =
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
    [TRAINER_SIDNEY] =
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
#line 3073
        .mugshotEnabled = TRUE,
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
    [TRAINER_PHOEBE] =
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
        .mugshotEnabled = TRUE,
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
    [TRAINER_GLACIA] =
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
        .mugshotEnabled = TRUE,
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
    [TRAINER_DRAKE] =
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
        .mugshotEnabled = TRUE,
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
    [TRAINER_ROXANNE_1] =
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
    [TRAINER_BRAWLY_1] =
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
    [TRAINER_WATTSON_1] =
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
    [TRAINER_FLANNERY_1] =
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
    [TRAINER_NORMAN_1] =
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
    [TRAINER_WINONA_1] =
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
    [TRAINER_TATE_AND_LIZA_1] =
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
    [TRAINER_JUAN_1] =
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
    [TRAINER_JERRY_1] =
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
    [TRAINER_TED] =
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
    [TRAINER_PAUL] =
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
    [TRAINER_KAREN_1] =
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
    [TRAINER_GEORGIA] =
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
    [TRAINER_KAREN_2] =
    {
#line 3682
        .trainerName = _("KAREN"),
#line 3683
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3684
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 3685
F_TRAINER_FEMALE | 
#line 3686
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3687
        .doubleBattle = FALSE,
#line 3688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3690
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3691
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3694
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3696
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3695
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3698
    [TRAINER_KAREN_3] =
    {
#line 3699
        .trainerName = _("KAREN"),
#line 3700
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3701
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 3702
F_TRAINER_FEMALE | 
#line 3703
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3704
        .doubleBattle = FALSE,
#line 3705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3707
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3708
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3711
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3713
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3712
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3715
    [TRAINER_KAREN_4] =
    {
#line 3716
        .trainerName = _("KAREN"),
#line 3717
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3718
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 3719
F_TRAINER_FEMALE | 
#line 3720
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3721
        .doubleBattle = FALSE,
#line 3722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3724
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3725
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3728
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3730
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3729
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3732
    [TRAINER_KAREN_5] =
    {
#line 3733
        .trainerName = _("KAREN"),
#line 3734
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3735
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 3736
F_TRAINER_FEMALE | 
#line 3737
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3738
        .doubleBattle = FALSE,
#line 3739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3741
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3742
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3745
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3747
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3746
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3749
    [TRAINER_KATE_AND_JOY] =
    {
#line 3750
        .trainerName = _("KATE & JOY"),
#line 3751
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3752
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 3754
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3755
        .doubleBattle = TRUE,
#line 3756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3758
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3759
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3761
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 3766
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3767
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3769
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3774
    [TRAINER_ANNA_AND_MEG_1] =
    {
#line 3775
        .trainerName = _("ANNA & MEG"),
#line 3776
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3777
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 3779
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3780
        .doubleBattle = TRUE,
#line 3781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3783
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3784
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3786
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 3791
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3792
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3794
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 3798
    [TRAINER_VICTOR] =
    {
#line 3799
        .trainerName = _("VICTOR"),
#line 3800
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3801
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 3803
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3804
        .doubleBattle = FALSE,
#line 3805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3807
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .heldItem = ITEM_ORAN_BERRY,
#line 3809
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3808
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3811
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3811
            .heldItem = ITEM_ORAN_BERRY,
#line 3813
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3812
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3815
    [TRAINER_MIGUEL_1] =
    {
#line 3816
        .trainerName = _("MIGUEL"),
#line 3817
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3818
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 3820
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3821
        .doubleBattle = FALSE,
#line 3822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3824
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .heldItem = ITEM_ORAN_BERRY,
#line 3826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3825
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3828
    [TRAINER_COLTON] =
    {
#line 3829
        .trainerName = _("COLTON"),
#line 3830
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3831
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 3833
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3834
        .doubleBattle = FALSE,
#line 3835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3837
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3837
            .heldItem = ITEM_ORAN_BERRY,
#line 3839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3838
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3840
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3845
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .heldItem = ITEM_ORAN_BERRY,
#line 3847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3846
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3848
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3853
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3853
            .heldItem = ITEM_ORAN_BERRY,
#line 3855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3854
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3856
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3861
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .heldItem = ITEM_ORAN_BERRY,
#line 3863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3862
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3864
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3869
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3869
            .heldItem = ITEM_ORAN_BERRY,
#line 3871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3870
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3872
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3877
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3877
            .heldItem = ITEM_ORAN_BERRY,
#line 3879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3878
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3880
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3885
    [TRAINER_VICTORIA] =
    {
#line 3886
        .trainerName = _("VICTORIA"),
#line 3887
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3888
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 3889
F_TRAINER_FEMALE | 
#line 3890
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3891
        .doubleBattle = FALSE,
#line 3892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3894
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3894
            .heldItem = ITEM_ORAN_BERRY,
#line 3896
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3895
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3898
    [TRAINER_VANESSA] =
    {
#line 3899
        .trainerName = _("VANESSA"),
#line 3900
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3901
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 3902
F_TRAINER_FEMALE | 
#line 3903
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3904
        .doubleBattle = FALSE,
#line 3905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3907
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3907
            .heldItem = ITEM_ORAN_BERRY,
#line 3909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3908
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3911
    [TRAINER_BETHANY] =
    {
#line 3912
        .trainerName = _("BETHANY"),
#line 3913
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3914
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 3915
F_TRAINER_FEMALE | 
#line 3916
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3917
        .doubleBattle = FALSE,
#line 3918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3920
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3920
            .heldItem = ITEM_ORAN_BERRY,
#line 3922
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3921
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3924
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3924
            .heldItem = ITEM_ORAN_BERRY,
#line 3926
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3925
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3928
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3928
            .heldItem = ITEM_ORAN_BERRY,
#line 3930
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3929
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3932
    [TRAINER_ISABEL_1] =
    {
#line 3933
        .trainerName = _("ISABEL"),
#line 3934
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3935
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 3936
F_TRAINER_FEMALE | 
#line 3937
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3938
        .doubleBattle = FALSE,
#line 3939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3941
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .heldItem = ITEM_ORAN_BERRY,
#line 3943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3942
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3945
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3945
            .heldItem = ITEM_ORAN_BERRY,
#line 3947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3946
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3949
    [TRAINER_TIMOTHY_1] =
    {
#line 3950
        .trainerName = _("TIMOTHY"),
#line 3951
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3952
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 3954
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3955
        .doubleBattle = FALSE,
#line 3956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3958
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3959
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3962
    [TRAINER_VICKY] =
    {
#line 3963
        .trainerName = _("VICKY"),
#line 3964
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3965
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 3966
F_TRAINER_FEMALE | 
#line 3967
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3968
        .doubleBattle = FALSE,
#line 3969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3971
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3973
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3972
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3974
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 3979
    [TRAINER_SHELBY_1] =
    {
#line 3980
        .trainerName = _("SHELBY"),
#line 3981
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3982
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 3983
F_TRAINER_FEMALE | 
#line 3984
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3985
        .doubleBattle = FALSE,
#line 3986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3988
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3990
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3989
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3992
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3994
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3993
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3996
    [TRAINER_CALVIN_1] =
    {
#line 3997
        .trainerName = _("CALVIN"),
#line 3998
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3999
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4001
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4002
        .doubleBattle = FALSE,
#line 4003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4005
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4006
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4009
    [TRAINER_BILLY] =
    {
#line 4010
        .trainerName = _("BILLY"),
#line 4011
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4012
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4014
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4015
        .doubleBattle = FALSE,
#line 4016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4018
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4019
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4022
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4023
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4026
    [TRAINER_JOSH] =
    {
#line 4027
        .trainerName = _("JOSH"),
#line 4028
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4029
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4031
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4032
        .doubleBattle = FALSE,
#line 4033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4035
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4037
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4036
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4038
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4040
    [TRAINER_TOMMY] =
    {
#line 4041
        .trainerName = _("TOMMY"),
#line 4042
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4043
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4046
        .doubleBattle = FALSE,
#line 4047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4049
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4051
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4050
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4053
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4054
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4057
    [TRAINER_JOEY] =
    {
#line 4058
        .trainerName = _("JOEY"),
#line 4059
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4060
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4062
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4063
        .doubleBattle = FALSE,
#line 4064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4066
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4067
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4070
    [TRAINER_BEN] =
    {
#line 4071
        .trainerName = _("BEN"),
#line 4072
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4073
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4075
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4076
        .doubleBattle = FALSE,
#line 4077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4079
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4081
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4080
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4082
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4087
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4089
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4088
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4090
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4095
    [TRAINER_QUINCY] =
    {
#line 4096
        .trainerName = _("QUINCY"),
#line 4097
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4098
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 4100
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4101
        .items = { ITEM_FULL_RESTORE },
#line 4102
        .doubleBattle = FALSE,
#line 4103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4105
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4107
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4106
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4108
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4113
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4115
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4114
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4116
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4121
    [TRAINER_KATELYNN] =
    {
#line 4122
        .trainerName = _("KATELYNN"),
#line 4123
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4124
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 4125
F_TRAINER_FEMALE | 
#line 4126
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4127
        .items = { ITEM_FULL_RESTORE },
#line 4128
        .doubleBattle = FALSE,
#line 4129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4131
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4132
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4134
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4139
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4141
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4140
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4142
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4147
    [TRAINER_JAYLEN] =
    {
#line 4148
        .trainerName = _("JAYLEN"),
#line 4149
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4150
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4152
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4153
        .doubleBattle = FALSE,
#line 4154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4156
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4157
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4160
    [TRAINER_DILLON] =
    {
#line 4161
        .trainerName = _("DILLON"),
#line 4162
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4163
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4165
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4166
        .doubleBattle = FALSE,
#line 4167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4169
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4170
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4173
    [TRAINER_EDDIE] =
    {
#line 4174
        .trainerName = _("EDDIE"),
#line 4175
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4176
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4178
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4179
        .doubleBattle = FALSE,
#line 4180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4182
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4183
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4186
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4187
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4190
    [TRAINER_ALLEN] =
    {
#line 4191
        .trainerName = _("ALLEN"),
#line 4192
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4193
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4196
        .doubleBattle = FALSE,
#line 4197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4199
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4200
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4203
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4204
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4207
    [TRAINER_TIMMY] =
    {
#line 4208
        .trainerName = _("TIMMY"),
#line 4209
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4210
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4212
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4213
        .doubleBattle = FALSE,
#line 4214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4216
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4217
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4220
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4221
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4224
    [TRAINER_WALLACE] =
    {
#line 4225
        .trainerName = _("WALLACE"),
#line 4226
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4227
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender = 
#line 4229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4230
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 4231
        .doubleBattle = FALSE,
#line 4232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 4233
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4235
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4236
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4238
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4243
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4244
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4246
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4251
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4252
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4254
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4259
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4260
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4262
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4267
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4268
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4270
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4275
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .heldItem = ITEM_SITRUS_BERRY,
#line 4277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4276
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4278
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4283
    [TRAINER_ANDREW] =
    {
#line 4284
        .trainerName = _("ANDREW"),
#line 4285
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4286
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4288
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4289
        .doubleBattle = FALSE,
#line 4290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4292
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4296
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4297
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4300
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4304
    [TRAINER_IVAN] =
    {
#line 4305
        .trainerName = _("IVAN"),
#line 4306
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4307
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4309
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4310
        .doubleBattle = FALSE,
#line 4311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4314
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4317
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4318
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4321
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4322
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4325
    [TRAINER_CLAUDE] =
    {
#line 4326
        .trainerName = _("CLAUDE"),
#line 4327
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4328
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4330
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4331
        .doubleBattle = FALSE,
#line 4332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4334
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4335
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4338
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4339
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4342
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4343
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4346
    [TRAINER_ELLIOT_1] =
    {
#line 4347
        .trainerName = _("ELLIOT"),
#line 4348
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4349
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4351
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4352
        .doubleBattle = FALSE,
#line 4353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4355
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4356
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4359
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4360
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4363
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4364
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4367
    [TRAINER_NED] =
    {
#line 4368
        .trainerName = _("NED"),
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
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4377
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4380
    [TRAINER_DALE] =
    {
#line 4381
        .trainerName = _("DALE"),
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4389
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4390
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4393
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4394
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4397
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4398
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4401
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4402
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4405
    [TRAINER_NOLAN] =
    {
#line 4406
        .trainerName = _("NOLAN"),
#line 4407
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4408
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4410
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4411
        .doubleBattle = FALSE,
#line 4412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4414
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4415
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4418
    [TRAINER_BARNY] =
    {
#line 4419
        .trainerName = _("BARNY"),
#line 4420
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4421
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4423
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4424
        .doubleBattle = FALSE,
#line 4425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4427
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4428
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4431
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4432
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4435
    [TRAINER_WADE] =
    {
#line 4436
        .trainerName = _("WADE"),
#line 4437
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4438
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4440
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4441
        .doubleBattle = FALSE,
#line 4442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4444
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4445
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4448
    [TRAINER_CARTER] =
    {
#line 4449
        .trainerName = _("CARTER"),
#line 4450
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4451
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4453
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4454
        .doubleBattle = FALSE,
#line 4455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4457
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4459
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4458
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4461
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4462
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4465
    [TRAINER_RONALD] =
    {
#line 4466
        .trainerName = _("RONALD"),
#line 4467
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4468
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 4470
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4471
        .doubleBattle = FALSE,
#line 4472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4474
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4475
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4478
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4479
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4482
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4483
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4486
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4487
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4490
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4491
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4494
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4495
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4498
    [TRAINER_JACOB] =
    {
#line 4499
        .trainerName = _("JACOB"),
#line 4500
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4501
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4503
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4504
        .doubleBattle = FALSE,
#line 4505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4507
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4508
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4511
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4512
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4515
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4517
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4516
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4519
    [TRAINER_ANTHONY] =
    {
#line 4520
        .trainerName = _("ANTHONY"),
#line 4521
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4522
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4524
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4525
        .doubleBattle = FALSE,
#line 4526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4528
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4529
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4532
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4533
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4536
    [TRAINER_BENJAMIN_1] =
    {
#line 4537
        .trainerName = _("BENJAMIN"),
#line 4538
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4539
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4541
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4542
        .doubleBattle = FALSE,
#line 4543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4545
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4546
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4549
    [TRAINER_ABIGAIL_1] =
    {
#line 4550
        .trainerName = _("ABIGAIL"),
#line 4551
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4552
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4553
F_TRAINER_FEMALE | 
#line 4554
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4555
        .doubleBattle = FALSE,
#line 4556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4558
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4559
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4562
    [TRAINER_JASMINE] =
    {
#line 4563
        .trainerName = _("JASMINE"),
#line 4564
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4565
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4566
F_TRAINER_FEMALE | 
#line 4567
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4568
        .doubleBattle = FALSE,
#line 4569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4571
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4573
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4572
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4575
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4577
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4576
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4579
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4580
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4583
    [TRAINER_DYLAN_1] =
    {
#line 4584
        .trainerName = _("DYLAN"),
#line 4585
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4586
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4588
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4589
        .doubleBattle = FALSE,
#line 4590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4592
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4593
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4596
    [TRAINER_MARIA_1] =
    {
#line 4597
        .trainerName = _("MARIA"),
#line 4598
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4599
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4600
F_TRAINER_FEMALE | 
#line 4601
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4602
        .doubleBattle = FALSE,
#line 4603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4605
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4606
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4609
    [TRAINER_CAMDEN] =
    {
#line 4610
        .trainerName = _("CAMDEN"),
#line 4611
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4612
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4614
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4615
        .doubleBattle = FALSE,
#line 4616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4618
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4619
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4622
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4623
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4626
    [TRAINER_DEMETRIUS] =
    {
#line 4627
        .trainerName = _("DEMETRIUS"),
#line 4628
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4629
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 4631
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4632
        .doubleBattle = FALSE,
#line 4633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4635
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4636
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4639
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4640
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4643
    [TRAINER_ISAIAH_1] =
    {
#line 4644
        .trainerName = _("ISAIAH"),
#line 4645
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4646
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4648
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4649
        .doubleBattle = FALSE,
#line 4650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4652
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4653
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4656
    [TRAINER_PABLO_1] =
    {
#line 4657
        .trainerName = _("PABLO"),
#line 4658
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4659
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4661
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4662
        .doubleBattle = FALSE,
#line 4663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4665
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4666
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4669
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4670
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4673
    [TRAINER_CHASE] =
    {
#line 4674
        .trainerName = _("CHASE"),
#line 4675
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4676
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 4678
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4679
        .doubleBattle = FALSE,
#line 4680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4682
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4683
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4686
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4688
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4687
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4690
    [TRAINER_ISOBEL] =
    {
#line 4691
        .trainerName = _("ISOBEL"),
#line 4692
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4693
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4694
F_TRAINER_FEMALE | 
#line 4695
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4696
        .doubleBattle = FALSE,
#line 4697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4699
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4700
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4703
    [TRAINER_DONNY] =
    {
#line 4704
        .trainerName = _("DONNY"),
#line 4705
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4706
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4707
F_TRAINER_FEMALE | 
#line 4708
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4709
        .doubleBattle = FALSE,
#line 4710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4712
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4713
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4716
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4718
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4717
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4720
    [TRAINER_TALIA] =
    {
#line 4721
        .trainerName = _("TALIA"),
#line 4722
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4723
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4724
F_TRAINER_FEMALE | 
#line 4725
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4726
        .doubleBattle = FALSE,
#line 4727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4729
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4730
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4733
    [TRAINER_KATELYN_1] =
    {
#line 4734
        .trainerName = _("KATELYN"),
#line 4735
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4736
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4737
F_TRAINER_FEMALE | 
#line 4738
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4739
        .doubleBattle = FALSE,
#line 4740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4742
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4743
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4746
    [TRAINER_ALLISON] =
    {
#line 4747
        .trainerName = _("ALLISON"),
#line 4748
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4749
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 4750
F_TRAINER_FEMALE | 
#line 4751
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4752
        .doubleBattle = FALSE,
#line 4753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4755
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4756
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4759
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4761
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4760
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4763
    [TRAINER_NICOLAS_1] =
    {
#line 4764
        .trainerName = _("NICOLAS"),
#line 4765
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4766
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 4768
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4769
        .doubleBattle = FALSE,
#line 4770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4772
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4774
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4773
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4776
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4778
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4777
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4780
    [TRAINER_AARON] =
    {
#line 4781
        .trainerName = _("AARON"),
#line 4782
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4783
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 4785
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4786
        .doubleBattle = FALSE,
#line 4787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4789
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4790
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4792
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 4797
    [TRAINER_PERRY] =
    {
#line 4798
        .trainerName = _("PERRY"),
#line 4799
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4800
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4802
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4803
        .doubleBattle = FALSE,
#line 4804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4806
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4807
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4810
    [TRAINER_HUGH] =
    {
#line 4811
        .trainerName = _("HUGH"),
#line 4812
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4813
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4815
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4816
        .doubleBattle = FALSE,
#line 4817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4819
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4820
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4823
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4824
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4827
    [TRAINER_PHIL] =
    {
#line 4828
        .trainerName = _("PHIL"),
#line 4829
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4830
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4832
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4833
        .doubleBattle = FALSE,
#line 4834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4836
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4837
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4840
    [TRAINER_JARED] =
    {
#line 4841
        .trainerName = _("JARED"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4849
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4851
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4850
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4853
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4855
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4854
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4857
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4859
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4858
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4861
    [TRAINER_HUMBERTO] =
    {
#line 4862
        .trainerName = _("HUMBERTO"),
#line 4863
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4864
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4866
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4867
        .doubleBattle = FALSE,
#line 4868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4870
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4872
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4871
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4874
    [TRAINER_PRESLEY] =
    {
#line 4875
        .trainerName = _("PRESLEY"),
#line 4876
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4877
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4879
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4880
        .doubleBattle = FALSE,
#line 4881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4883
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4884
            .lvl = 33,
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
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4891
    [TRAINER_EDWARDO] =
    {
#line 4892
        .trainerName = _("EDWARDO"),
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
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4902
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4901
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4904
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4906
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4905
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4908
    [TRAINER_COLIN] =
    {
#line 4909
        .trainerName = _("COLIN"),
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
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4918
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4921
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4922
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4925
    [TRAINER_ROBERT_1] =
    {
#line 4926
        .trainerName = _("ROBERT"),
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
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4935
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4938
    [TRAINER_BENNY] =
    {
#line 4939
        .trainerName = _("BENNY"),
#line 4940
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4941
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4943
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4944
        .doubleBattle = FALSE,
#line 4945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4947
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4948
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4951
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4952
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4955
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4956
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4959
    [TRAINER_CHESTER] =
    {
#line 4960
        .trainerName = _("CHESTER"),
#line 4961
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4962
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4964
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4965
        .doubleBattle = FALSE,
#line 4966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4968
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4969
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4972
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4973
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4976
    [TRAINER_ALEX] =
    {
#line 4977
        .trainerName = _("ALEX"),
#line 4978
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4979
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4981
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4982
        .doubleBattle = FALSE,
#line 4983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4985
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4986
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4989
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4990
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4993
    [TRAINER_BECK] =
    {
#line 4994
        .trainerName = _("BECK"),
#line 4995
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4996
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 4998
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4999
        .doubleBattle = FALSE,
#line 5000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5002
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5003
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5006
    [TRAINER_YASU] =
    {
#line 5007
        .trainerName = _("YASU"),
#line 5008
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5009
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5011
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5012
        .doubleBattle = FALSE,
#line 5013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5015
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5016
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5019
    [TRAINER_TAKASHI] =
    {
#line 5020
        .trainerName = _("TAKASHI"),
#line 5021
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5022
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5024
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5025
        .doubleBattle = FALSE,
#line 5026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5028
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5029
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5032
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5033
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5036
    [TRAINER_DIANNE] =
    {
#line 5037
        .trainerName = _("DIANNE"),
#line 5038
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5039
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 5040
F_TRAINER_FEMALE | 
#line 5041
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5042
        .items = { ITEM_FULL_RESTORE },
#line 5043
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5045
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5046
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5048
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5051
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5052
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5054
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5057
    [TRAINER_JANI] =
    {
#line 5058
        .trainerName = _("JANI"),
#line 5059
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5060
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 5061
F_TRAINER_FEMALE | 
#line 5062
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5063
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5065
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5066
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5069
    [TRAINER_LAO_1] =
    {
#line 5070
        .trainerName = _("LAO"),
#line 5071
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5072
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5074
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5075
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5077
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5078
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5080
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5085
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5086
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5088
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5093
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5094
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5096
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5101
    [TRAINER_LUNG] =
    {
#line 5102
        .trainerName = _("LUNG"),
#line 5103
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5104
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5106
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5107
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5109
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5110
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5113
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5114
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5117
    [TRAINER_JOCELYN] =
    {
#line 5118
        .trainerName = _("JOCELYN"),
#line 5119
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5120
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5121
F_TRAINER_FEMALE | 
#line 5122
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5123
        .doubleBattle = FALSE,
#line 5124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5126
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5128
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5127
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5130
    [TRAINER_LAURA] =
    {
#line 5131
        .trainerName = _("LAURA"),
#line 5132
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5133
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5134
F_TRAINER_FEMALE | 
#line 5135
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5136
        .doubleBattle = FALSE,
#line 5137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5139
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5141
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5140
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5143
    [TRAINER_CYNDY_1] =
    {
#line 5144
        .trainerName = _("CYNDY"),
#line 5145
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5146
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5147
F_TRAINER_FEMALE | 
#line 5148
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5149
        .doubleBattle = FALSE,
#line 5150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5152
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5154
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5153
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5156
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5158
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5157
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5160
    [TRAINER_CORA] =
    {
#line 5161
        .trainerName = _("CORA"),
#line 5162
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5163
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5164
F_TRAINER_FEMALE | 
#line 5165
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5166
        .doubleBattle = FALSE,
#line 5167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5169
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5171
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5170
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5173
    [TRAINER_PAULA] =
    {
#line 5174
        .trainerName = _("PAULA"),
#line 5175
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5176
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 5177
F_TRAINER_FEMALE | 
#line 5178
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5179
        .doubleBattle = FALSE,
#line 5180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5182
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5184
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5183
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5186
    [TRAINER_MADELINE_1] =
    {
#line 5187
        .trainerName = _("MADELINE"),
#line 5188
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5189
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5190
F_TRAINER_FEMALE | 
#line 5191
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5192
        .doubleBattle = FALSE,
#line 5193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5195
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5196
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5198
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5203
    [TRAINER_CLARISSA] =
    {
#line 5204
        .trainerName = _("CLARISSA"),
#line 5205
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5206
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5207
F_TRAINER_FEMALE | 
#line 5208
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5209
        .doubleBattle = FALSE,
#line 5210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5212
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5213
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5216
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5217
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5220
    [TRAINER_ANGELICA] =
    {
#line 5221
        .trainerName = _("ANGELICA"),
#line 5222
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5223
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5224
F_TRAINER_FEMALE | 
#line 5225
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5226
        .doubleBattle = FALSE,
#line 5227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5229
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5231
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5230
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5232
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 5237
    [TRAINER_BEVERLY] =
    {
#line 5238
        .trainerName = _("BEVERLY"),
#line 5239
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5240
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5241
F_TRAINER_FEMALE | 
#line 5242
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5243
        .doubleBattle = FALSE,
#line 5244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5246
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5247
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5250
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5251
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5254
    [TRAINER_IMANI] =
    {
#line 5255
        .trainerName = _("IMANI"),
#line 5256
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5257
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5258
F_TRAINER_FEMALE | 
#line 5259
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5260
        .doubleBattle = FALSE,
#line 5261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5263
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5264
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5267
    [TRAINER_KYLA] =
    {
#line 5268
        .trainerName = _("KYLA"),
#line 5269
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5270
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5271
F_TRAINER_FEMALE | 
#line 5272
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5273
        .doubleBattle = FALSE,
#line 5274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5276
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5277
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5280
    [TRAINER_DENISE] =
    {
#line 5281
        .trainerName = _("DENISE"),
#line 5282
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5283
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5284
F_TRAINER_FEMALE | 
#line 5285
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5286
        .doubleBattle = FALSE,
#line 5287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5289
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5290
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5293
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5294
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5297
    [TRAINER_BETH] =
    {
#line 5298
        .trainerName = _("BETH"),
#line 5299
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5300
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5301
F_TRAINER_FEMALE | 
#line 5302
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5303
        .doubleBattle = FALSE,
#line 5304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5306
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5307
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5310
    [TRAINER_TARA] =
    {
#line 5311
        .trainerName = _("TARA"),
#line 5312
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5313
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5314
F_TRAINER_FEMALE | 
#line 5315
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5316
        .doubleBattle = FALSE,
#line 5317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5319
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5320
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5323
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5324
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5327
    [TRAINER_MISSY] =
    {
#line 5328
        .trainerName = _("MISSY"),
#line 5329
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5330
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5331
F_TRAINER_FEMALE | 
#line 5332
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5333
        .doubleBattle = FALSE,
#line 5334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5336
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5337
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5340
    [TRAINER_ALICE] =
    {
#line 5341
        .trainerName = _("ALICE"),
#line 5342
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5343
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5344
F_TRAINER_FEMALE | 
#line 5345
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5346
        .doubleBattle = FALSE,
#line 5347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5349
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5350
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5353
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5354
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5357
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5358
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5361
    [TRAINER_JENNY_1] =
    {
#line 5362
        .trainerName = _("JENNY"),
#line 5363
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5364
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5365
F_TRAINER_FEMALE | 
#line 5366
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5367
        .doubleBattle = FALSE,
#line 5368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5370
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5371
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5374
    [TRAINER_GRACE] =
    {
#line 5375
        .trainerName = _("GRACE"),
#line 5376
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5377
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5378
F_TRAINER_FEMALE | 
#line 5379
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5380
        .doubleBattle = FALSE,
#line 5381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5383
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5384
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5387
    [TRAINER_TANYA] =
    {
#line 5388
        .trainerName = _("TANYA"),
#line 5389
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5390
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5391
F_TRAINER_FEMALE | 
#line 5392
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5393
        .doubleBattle = FALSE,
#line 5394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5396
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5397
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5400
    [TRAINER_SHARON] =
    {
#line 5401
        .trainerName = _("SHARON"),
#line 5402
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5403
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5404
F_TRAINER_FEMALE | 
#line 5405
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5406
        .doubleBattle = FALSE,
#line 5407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5409
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5410
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5413
    [TRAINER_NIKKI] =
    {
#line 5414
        .trainerName = _("NIKKI"),
#line 5415
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5416
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5417
F_TRAINER_FEMALE | 
#line 5418
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5419
        .doubleBattle = FALSE,
#line 5420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5422
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5423
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5426
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5427
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5430
    [TRAINER_BRENDA] =
    {
#line 5431
        .trainerName = _("BRENDA"),
#line 5432
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5433
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5434
F_TRAINER_FEMALE | 
#line 5435
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5436
        .doubleBattle = FALSE,
#line 5437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5439
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5440
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5443
    [TRAINER_KATIE] =
    {
#line 5444
        .trainerName = _("KATIE"),
#line 5445
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5446
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5447
F_TRAINER_FEMALE | 
#line 5448
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5449
        .doubleBattle = FALSE,
#line 5450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5452
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5453
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5456
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5457
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5460
    [TRAINER_SUSIE] =
    {
#line 5461
        .trainerName = _("SUSIE"),
#line 5462
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5463
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5464
F_TRAINER_FEMALE | 
#line 5465
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5466
        .doubleBattle = FALSE,
#line 5467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5469
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5470
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5473
    [TRAINER_KARA] =
    {
#line 5474
        .trainerName = _("KARA"),
#line 5475
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5476
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5477
F_TRAINER_FEMALE | 
#line 5478
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5479
        .doubleBattle = FALSE,
#line 5480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5483
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5486
    [TRAINER_DANA] =
    {
#line 5487
        .trainerName = _("DANA"),
#line 5488
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5489
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5490
F_TRAINER_FEMALE | 
#line 5491
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5492
        .doubleBattle = FALSE,
#line 5493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5495
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5496
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5499
    [TRAINER_SIENNA] =
    {
#line 5500
        .trainerName = _("SIENNA"),
#line 5501
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5502
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5503
F_TRAINER_FEMALE | 
#line 5504
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5505
        .doubleBattle = FALSE,
#line 5506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
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
            {
#line 5512
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5513
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5516
    [TRAINER_DEBRA] =
    {
#line 5517
        .trainerName = _("DEBRA"),
#line 5518
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5519
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5520
F_TRAINER_FEMALE | 
#line 5521
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5522
        .doubleBattle = FALSE,
#line 5523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5525
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5526
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5529
    [TRAINER_LINDA] =
    {
#line 5530
        .trainerName = _("LINDA"),
#line 5531
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5532
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5533
F_TRAINER_FEMALE | 
#line 5534
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5535
        .doubleBattle = FALSE,
#line 5536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5538
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5539
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5542
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5543
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5546
    [TRAINER_KAYLEE] =
    {
#line 5547
        .trainerName = _("KAYLEE"),
#line 5548
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5549
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5550
F_TRAINER_FEMALE | 
#line 5551
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5552
        .doubleBattle = FALSE,
#line 5553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5555
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5556
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5559
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5560
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5563
    [TRAINER_LAUREL] =
    {
#line 5564
        .trainerName = _("LAUREL"),
#line 5565
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5566
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5567
F_TRAINER_FEMALE | 
#line 5568
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5569
        .doubleBattle = FALSE,
#line 5570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5572
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5573
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5576
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5577
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5580
    [TRAINER_CARLEE] =
    {
#line 5581
        .trainerName = _("CARLEE"),
#line 5582
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5583
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 5584
F_TRAINER_FEMALE | 
#line 5585
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5586
        .doubleBattle = FALSE,
#line 5587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5589
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5590
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5593
    [TRAINER_HEIDI] =
    {
#line 5594
        .trainerName = _("HEIDI"),
#line 5595
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5596
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5597
F_TRAINER_FEMALE | 
#line 5598
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5599
        .doubleBattle = FALSE,
#line 5600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5602
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5603
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5605
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 5610
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5611
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5613
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 5618
    [TRAINER_BECKY] =
    {
#line 5619
        .trainerName = _("BECKY"),
#line 5620
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5621
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5622
F_TRAINER_FEMALE | 
#line 5623
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5624
        .doubleBattle = FALSE,
#line 5625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5627
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5628
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5630
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 5635
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5636
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5638
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 5643
    [TRAINER_CAROL] =
    {
#line 5644
        .trainerName = _("CAROL"),
#line 5645
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5646
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5647
F_TRAINER_FEMALE | 
#line 5648
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5649
        .doubleBattle = FALSE,
#line 5650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5652
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5653
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5656
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5657
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5660
    [TRAINER_NANCY] =
    {
#line 5661
        .trainerName = _("NANCY"),
#line 5662
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5663
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5664
F_TRAINER_FEMALE | 
#line 5665
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5666
        .doubleBattle = FALSE,
#line 5667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5669
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5670
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5673
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5674
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5677
    [TRAINER_MARTHA] =
    {
#line 5678
        .trainerName = _("MARTHA"),
#line 5679
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5680
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5681
F_TRAINER_FEMALE | 
#line 5682
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5683
        .doubleBattle = FALSE,
#line 5684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5686
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5687
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5690
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5691
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5694
    [TRAINER_DIANA_1] =
    {
#line 5695
        .trainerName = _("DIANA"),
#line 5696
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5697
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5698
F_TRAINER_FEMALE | 
#line 5699
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5700
        .doubleBattle = FALSE,
#line 5701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5704
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5707
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5708
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5711
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5712
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5715
    [TRAINER_CEDRIC] =
    {
#line 5716
        .trainerName = _("CEDRIC"),
#line 5717
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5718
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 5720
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5721
        .doubleBattle = FALSE,
#line 5722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5724
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5725
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5727
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 5732
    [TRAINER_IRENE] =
    {
#line 5733
        .trainerName = _("IRENE"),
#line 5734
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5735
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 5736
F_TRAINER_FEMALE | 
#line 5737
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5738
        .doubleBattle = FALSE,
#line 5739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5741
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5742
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5745
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5746
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5749
    [TRAINER_AMY_AND_LIV_1] =
    {
#line 5750
        .trainerName = _("AMY & LIV"),
#line 5751
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5752
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 5754
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5755
        .doubleBattle = TRUE,
#line 5756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5758
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5759
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5762
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5763
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5766
    [TRAINER_GINA_AND_MIA_1] =
    {
#line 5767
        .trainerName = _("GINA & MIA"),
#line 5768
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5769
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 5771
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5772
        .doubleBattle = TRUE,
#line 5773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5775
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5776
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5779
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5780
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5783
    [TRAINER_MIU_AND_YUKI] =
    {
#line 5784
        .trainerName = _("MIU & YUKI"),
#line 5785
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5786
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 5788
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5789
        .doubleBattle = TRUE,
#line 5790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5792
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5796
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5797
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5800
    [TRAINER_HUEY] =
    {
#line 5801
        .trainerName = _("HUEY"),
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
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5811
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5810
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5813
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5815
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5814
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5817
    [TRAINER_EDMOND] =
    {
#line 5818
        .trainerName = _("EDMOND"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5826
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5827
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5830
    [TRAINER_ERNEST_1] =
    {
#line 5831
        .trainerName = _("ERNEST"),
#line 5832
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5833
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 5835
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5836
        .doubleBattle = FALSE,
#line 5837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5839
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5840
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5843
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5844
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5847
    [TRAINER_DWAYNE] =
    {
#line 5848
        .trainerName = _("DWAYNE"),
#line 5849
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5850
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 5852
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5853
        .doubleBattle = FALSE,
#line 5854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5856
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5857
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5860
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5861
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5864
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5865
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5868
    [TRAINER_PHILLIP] =
    {
#line 5869
        .trainerName = _("PHILLIP"),
#line 5870
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5871
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 5873
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5874
        .doubleBattle = FALSE,
#line 5875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5877
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5878
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5881
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5882
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5885
    [TRAINER_LEONARD] =
    {
#line 5886
        .trainerName = _("LEONARD"),
#line 5887
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5888
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 5890
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5891
        .doubleBattle = FALSE,
#line 5892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5894
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5895
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5898
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5899
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5902
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5903
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5906
    [TRAINER_DUNCAN] =
    {
#line 5907
        .trainerName = _("DUNCAN"),
#line 5908
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5909
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 5911
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5912
        .doubleBattle = FALSE,
#line 5913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5915
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5916
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5919
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5920
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5923
    [TRAINER_ELI] =
    {
#line 5924
        .trainerName = _("ELI"),
#line 5925
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5926
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 5928
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5929
        .doubleBattle = FALSE,
#line 5930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5932
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5934
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5933
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5936
    [TRAINER_ANNIKA] =
    {
#line 5937
        .trainerName = _("ANNIKA"),
#line 5938
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5939
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 5940
F_TRAINER_FEMALE | 
#line 5941
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5942
        .doubleBattle = FALSE,
#line 5943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5945
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5945
            .heldItem = ITEM_ORAN_BERRY,
#line 5947
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5946
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5948
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 5953
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5953
            .heldItem = ITEM_ORAN_BERRY,
#line 5955
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5954
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5956
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 5961
    [TRAINER_JAZMYN] =
    {
#line 5962
        .trainerName = _("JAZMYN"),
#line 5963
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5964
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 5965
F_TRAINER_FEMALE | 
#line 5966
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5967
        .items = { ITEM_HYPER_POTION },
#line 5968
        .doubleBattle = FALSE,
#line 5969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5971
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5972
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5975
    [TRAINER_JONAS] =
    {
#line 5976
        .trainerName = _("JONAS"),
#line 5977
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5978
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 5980
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5981
        .doubleBattle = FALSE,
#line 5982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5984
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5985
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5987
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 5992
    [TRAINER_KAYLEY] =
    {
#line 5993
        .trainerName = _("KAYLEY"),
#line 5994
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5995
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 5996
F_TRAINER_FEMALE | 
#line 5997
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5998
        .doubleBattle = FALSE,
#line 5999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6001
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6002
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6004
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 6009
    [TRAINER_AURON] =
    {
#line 6010
        .trainerName = _("AURON"),
#line 6011
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6012
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 6014
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6015
        .doubleBattle = FALSE,
#line 6016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6018
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6019
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6022
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6023
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6026
    [TRAINER_KELVIN] =
    {
#line 6027
        .trainerName = _("KELVIN"),
#line 6028
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6029
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6031
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6032
        .doubleBattle = FALSE,
#line 6033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6035
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6036
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6039
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6041
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6040
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6043
    [TRAINER_MARLEY] =
    {
#line 6044
        .trainerName = _("MARLEY"),
#line 6045
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6046
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6047
F_TRAINER_FEMALE | 
#line 6048
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6049
        .items = { ITEM_HYPER_POTION },
#line 6050
        .doubleBattle = FALSE,
#line 6051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6053
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6054
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6056
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 6061
    [TRAINER_REYNA] =
    {
#line 6062
        .trainerName = _("REYNA"),
#line 6063
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6064
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6065
F_TRAINER_FEMALE | 
#line 6066
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6067
        .doubleBattle = FALSE,
#line 6068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6070
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6072
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6071
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6074
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6076
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6075
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6078
    [TRAINER_HUDSON] =
    {
#line 6079
        .trainerName = _("HUDSON"),
#line 6080
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6081
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6083
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6084
        .doubleBattle = FALSE,
#line 6085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6087
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6088
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6091
    [TRAINER_CONOR] =
    {
#line 6092
        .trainerName = _("CONOR"),
#line 6093
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6094
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 6096
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6097
        .doubleBattle = FALSE,
#line 6098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6100
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6101
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6104
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6106
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6105
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6108
    [TRAINER_EDWIN_1] =
    {
#line 6109
        .trainerName = _("EDWIN"),
#line 6110
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6111
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 6113
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6114
        .doubleBattle = FALSE,
#line 6115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6117
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6118
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6121
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6122
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6125
    [TRAINER_HECTOR] =
    {
#line 6126
        .trainerName = _("HECTOR"),
#line 6127
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6128
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 6130
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6131
        .doubleBattle = FALSE,
#line 6132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6134
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6135
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6138
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6139
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6142
    [TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6143
        .trainerName = _("TABITHA"),
#line 6144
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6145
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 6147
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6148
        .doubleBattle = FALSE,
#line 6149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6151
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6153
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6152
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6155
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6157
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6156
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6159
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6161
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6160
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6163
    [TRAINER_WALLY_VR_1] =
    {
#line 6164
        .trainerName = _("WALLY"),
#line 6165
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6166
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 6168
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6169
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6170
        .doubleBattle = FALSE,
#line 6171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6173
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6175
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6174
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6176
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 6181
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6183
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6182
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6184
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 6189
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6191
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6190
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6192
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 6197
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6199
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6198
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6200
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 6205
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6207
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6206
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6208
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 6213
    [TRAINER_BRENDAN_ROUTE_101] =
    {
#line 6214
        .trainerName = _("Brendan"),
#line 6215
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6216
        .trainerPic = TRAINER_PIC_RIVAL_BRENDAN,
        .encounterMusic_gender = 
#line 6218
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6219
        .doubleBattle = FALSE,
#line 6220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6222
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6223
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6225
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 6228
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6229
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6231
                MOVE_TACKLE,
            },
            },
        },
    },
#line 6233
    [TRAINER_ISAAC_1] =
    {
#line 6234
        .trainerName = _("ISAAC"),
#line 6235
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6236
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 6238
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6239
        .doubleBattle = FALSE,
#line 6240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6242
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6243
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6246
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6247
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6250
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6251
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6254
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6255
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6258
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6259
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6262
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6263
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6266
    [TRAINER_DAVIS] =
    {
#line 6267
        .trainerName = _("DAVIS"),
#line 6268
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6269
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 6271
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6272
        .doubleBattle = FALSE,
#line 6273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6275
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6276
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6279
    [TRAINER_MITCHELL] =
    {
#line 6280
        .trainerName = _("MITCHELL"),
#line 6281
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6282
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 6284
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6285
        .doubleBattle = FALSE,
#line 6286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6288
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6289
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6291
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6296
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6297
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6299
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 6304
    [TRAINER_LYDIA_1] =
    {
#line 6305
        .trainerName = _("LYDIA"),
#line 6306
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6307
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 6308
F_TRAINER_FEMALE | 
#line 6309
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6310
        .doubleBattle = FALSE,
#line 6311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6313
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6314
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6317
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6318
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6321
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6322
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6325
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6326
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6329
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6330
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6333
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6334
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6337
    [TRAINER_HALLE] =
    {
#line 6338
        .trainerName = _("HALLE"),
#line 6339
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6340
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6341
F_TRAINER_FEMALE | 
#line 6342
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6343
        .items = { ITEM_FULL_RESTORE },
#line 6344
        .doubleBattle = FALSE,
#line 6345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6347
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6348
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6351
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6352
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6355
    [TRAINER_GARRISON] =
    {
#line 6356
        .trainerName = _("GARRISON"),
#line 6357
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6358
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 6360
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6361
        .doubleBattle = FALSE,
#line 6362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6364
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6365
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6368
    [TRAINER_JACKSON_1] =
    {
#line 6369
        .trainerName = _("JACKSON"),
#line 6370
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6371
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 6373
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6374
        .items = { ITEM_FULL_RESTORE },
#line 6375
        .doubleBattle = FALSE,
#line 6376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6378
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6380
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6379
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6382
    [TRAINER_LORENZO] =
    {
#line 6383
        .trainerName = _("LORENZO"),
#line 6384
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6385
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 6387
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6388
        .items = { ITEM_FULL_RESTORE },
#line 6389
        .doubleBattle = FALSE,
#line 6390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6392
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6393
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6396
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6398
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6397
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6400
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6402
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6401
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6404
    [TRAINER_SEBASTIAN] =
    {
#line 6405
        .trainerName = _("SEBASTIAN"),
#line 6406
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6407
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 6409
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6410
        .items = { ITEM_FULL_RESTORE },
#line 6411
        .doubleBattle = FALSE,
#line 6412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6414
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6416
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6415
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6418
    [TRAINER_CATHERINE_1] =
    {
#line 6419
        .trainerName = _("CATHERINE"),
#line 6420
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6421
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 6422
F_TRAINER_FEMALE | 
#line 6423
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6424
        .items = { ITEM_FULL_RESTORE },
#line 6425
        .doubleBattle = FALSE,
#line 6426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6428
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6430
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6429
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6432
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6434
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6433
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6436
    [TRAINER_JENNA] =
    {
#line 6437
        .trainerName = _("JENNA"),
#line 6438
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6439
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 6440
F_TRAINER_FEMALE | 
#line 6441
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6442
        .items = { ITEM_FULL_RESTORE },
#line 6443
        .doubleBattle = FALSE,
#line 6444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6446
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6448
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6447
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6450
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6452
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6451
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6454
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6456
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6455
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6458
    [TRAINER_SOPHIA] =
    {
#line 6459
        .trainerName = _("SOPHIA"),
#line 6460
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6461
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 6462
F_TRAINER_FEMALE | 
#line 6463
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6464
        .items = { ITEM_FULL_RESTORE },
#line 6465
        .doubleBattle = FALSE,
#line 6466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6468
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6470
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6469
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6472
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6474
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6473
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6476
    [TRAINER_JULIO] =
    {
#line 6477
        .trainerName = _("JULIO"),
#line 6478
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6479
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6481
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6482
        .doubleBattle = FALSE,
#line 6483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6485
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6486
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6489
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6490
        .trainerName = _("GRUNT"),
#line 6491
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6492
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 6494
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6495
        .doubleBattle = FALSE,
#line 6496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6498
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6499
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6502
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6504
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6503
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6506
    [TRAINER_GRUNT_UNUSED] =
    {
#line 6507
        .trainerName = _("GRUNT"),
#line 6508
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6509
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 6510
F_TRAINER_FEMALE | 
#line 6511
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6512
        .doubleBattle = FALSE,
#line 6513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6515
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6516
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6519
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6520
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6523
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6524
        .trainerName = _("GRUNT"),
#line 6525
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6526
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 6527
F_TRAINER_FEMALE | 
#line 6528
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6529
        .doubleBattle = FALSE,
#line 6530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6532
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6533
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6536
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6537
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6540
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6541
        .trainerName = _("GRUNT"),
#line 6542
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6543
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6545
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6546
        .doubleBattle = FALSE,
#line 6547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6549
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6551
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6550
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6553
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6555
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6554
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6557
    [TRAINER_MARC] =
    {
#line 6558
        .trainerName = _("MARC"),
#line 6559
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6560
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 6562
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6563
        .doubleBattle = FALSE,
#line 6564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6566
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6568
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6567
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6570
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6572
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6571
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6574
    [TRAINER_BRENDEN] =
    {
#line 6575
        .trainerName = _("BRENDEN"),
#line 6576
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6577
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6579
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6580
        .doubleBattle = FALSE,
#line 6581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6583
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6584
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6587
    [TRAINER_LILITH] =
    {
#line 6588
        .trainerName = _("LILITH"),
#line 6589
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6590
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6591
F_TRAINER_FEMALE | 
#line 6592
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6593
        .doubleBattle = FALSE,
#line 6594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6596
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6598
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6597
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6600
    [TRAINER_CRISTIAN] =
    {
#line 6601
        .trainerName = _("CRISTIAN"),
#line 6602
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6603
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 6605
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6606
        .doubleBattle = FALSE,
#line 6607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6609
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6611
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6610
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6613
    [TRAINER_SYLVIA] =
    {
#line 6614
        .trainerName = _("SYLVIA"),
#line 6615
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6616
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 6617
F_TRAINER_FEMALE | 
#line 6618
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6619
        .doubleBattle = FALSE,
#line 6620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6622
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6624
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6623
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6626
    [TRAINER_LEONARDO] =
    {
#line 6627
        .trainerName = _("LEONARDO"),
#line 6628
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6629
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 6631
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6632
        .doubleBattle = FALSE,
#line 6633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6635
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6636
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6639
    [TRAINER_ATHENA] =
    {
#line 6640
        .trainerName = _("ATHENA"),
#line 6641
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6642
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6643
F_TRAINER_FEMALE | 
#line 6644
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6645
        .items = { ITEM_HYPER_POTION },
#line 6646
        .doubleBattle = FALSE,
#line 6647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6649
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6651
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6650
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6652
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6656
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6658
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6657
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6659
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 6662
    [TRAINER_HARRISON] =
    {
#line 6663
        .trainerName = _("HARRISON"),
#line 6664
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6665
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 6667
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6668
        .doubleBattle = FALSE,
#line 6669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6671
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6672
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6675
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 6676
        .trainerName = _("GRUNT"),
#line 6677
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6678
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6680
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6681
        .doubleBattle = FALSE,
#line 6682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6684
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6685
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6688
    [TRAINER_CLARENCE] =
    {
#line 6689
        .trainerName = _("CLARENCE"),
#line 6690
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6691
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 6693
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6694
        .doubleBattle = FALSE,
#line 6695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6697
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6698
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6701
    [TRAINER_TERRY] =
    {
#line 6702
        .trainerName = _("TERRY"),
#line 6703
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6704
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 6705
F_TRAINER_FEMALE | 
#line 6706
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6707
        .doubleBattle = FALSE,
#line 6708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6710
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6711
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6714
    [TRAINER_NATE] =
    {
#line 6715
        .trainerName = _("NATE"),
#line 6716
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6717
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 6719
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6720
        .doubleBattle = FALSE,
#line 6721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6723
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6725
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6724
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6727
    [TRAINER_KATHLEEN] =
    {
#line 6728
        .trainerName = _("KATHLEEN"),
#line 6729
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6730
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 6731
F_TRAINER_FEMALE | 
#line 6732
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6733
        .doubleBattle = FALSE,
#line 6734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6736
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6738
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6737
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6740
    [TRAINER_CLIFFORD] =
    {
#line 6741
        .trainerName = _("CLIFFORD"),
#line 6742
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6743
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 6745
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6746
        .doubleBattle = FALSE,
#line 6747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6749
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6750
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6753
    [TRAINER_NICHOLAS] =
    {
#line 6754
        .trainerName = _("NICHOLAS"),
#line 6755
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6756
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 6758
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6759
        .doubleBattle = FALSE,
#line 6760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6762
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6763
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6766
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 6767
        .trainerName = _("GRUNT"),
#line 6768
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6769
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 6770
F_TRAINER_FEMALE | 
#line 6771
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6772
        .doubleBattle = FALSE,
#line 6773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6775
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6776
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6779
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6780
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6783
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 6784
        .trainerName = _("GRUNT"),
#line 6785
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6786
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6788
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6789
        .doubleBattle = FALSE,
#line 6790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6792
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6793
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6796
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 6797
        .trainerName = _("GRUNT"),
#line 6798
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6799
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6801
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6802
        .doubleBattle = FALSE,
#line 6803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6805
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6806
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6809
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 6810
        .trainerName = _("GRUNT"),
#line 6811
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6812
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6814
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6815
        .doubleBattle = FALSE,
#line 6816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6818
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6819
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6822
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 6823
        .trainerName = _("GRUNT"),
#line 6824
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6825
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6827
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6828
        .doubleBattle = FALSE,
#line 6829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6831
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6832
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6835
    [TRAINER_MACEY] =
    {
#line 6836
        .trainerName = _("MACEY"),
#line 6837
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6838
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 6839
F_TRAINER_FEMALE | 
#line 6840
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6841
        .doubleBattle = FALSE,
#line 6842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6844
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6845
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6848
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 6849
        .trainerName = _("BRENDAN"),
#line 6850
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6851
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6853
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6854
        .doubleBattle = FALSE,
#line 6855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6857
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6859
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6858
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6861
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6863
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6862
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6865
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 6866
        .trainerName = _("BRENDAN"),
#line 6867
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6868
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6870
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6871
        .doubleBattle = FALSE,
#line 6872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6874
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6875
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6878
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6880
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6879
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6882
    [TRAINER_PAXTON] =
    {
#line 6883
        .trainerName = _("PAXTON"),
#line 6884
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6885
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 6887
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6888
        .doubleBattle = FALSE,
#line 6889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6891
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6892
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6895
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6896
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6899
    [TRAINER_ISABELLA] =
    {
#line 6900
        .trainerName = _("ISABELLA"),
#line 6901
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6902
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6903
F_TRAINER_FEMALE | 
#line 6904
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6905
        .doubleBattle = FALSE,
#line 6906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6908
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6909
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6912
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 6913
        .trainerName = _("GRUNT"),
#line 6914
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6915
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 6916
F_TRAINER_FEMALE | 
#line 6917
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6918
        .doubleBattle = FALSE,
#line 6919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6921
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6922
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6925
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6926
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6929
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 6930
        .trainerName = _("TABITHA"),
#line 6931
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6932
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 6934
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6935
        .doubleBattle = FALSE,
#line 6936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6938
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6940
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6939
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6942
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6944
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6943
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6946
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6948
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6947
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6950
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6952
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6951
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6954
    [TRAINER_JONATHAN] =
    {
#line 6955
        .trainerName = _("JONATHAN"),
#line 6956
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6957
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 6959
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6960
        .items = { ITEM_HYPER_POTION },
#line 6961
        .doubleBattle = FALSE,
#line 6962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6964
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6965
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6968
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6969
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6972
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 6973
        .trainerName = _("BRENDAN"),
#line 6974
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6975
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6977
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6978
        .doubleBattle = FALSE,
#line 6979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6981
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6983
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6982
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6985
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6987
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6986
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6989
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 6990
        .trainerName = _("MAY"),
#line 6991
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6992
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 6993
F_TRAINER_FEMALE | 
#line 6994
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6995
        .doubleBattle = FALSE,
#line 6996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6998
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7000
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6999
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7002
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7004
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7003
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7006
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7007
        .trainerName = _("MAXIE"),
#line 7008
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7009
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 7011
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7012
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7013
        .doubleBattle = FALSE,
#line 7014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7016
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7018
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7017
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7020
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7022
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7021
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7024
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7025
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7028
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7029
        .trainerName = _("MAXIE"),
#line 7030
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7031
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 7033
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7034
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7035
        .doubleBattle = FALSE,
#line 7036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7038
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7040
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7039
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7042
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7043
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7046
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7047
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7050
    [TRAINER_TIANA] =
    {
#line 7051
        .trainerName = _("TIANA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7059
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7060
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7063
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7064
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7067
    [TRAINER_HALEY_1] =
    {
#line 7068
        .trainerName = _("HALEY"),
#line 7069
        .trainerClass = TRAINER_CLASS_LASS,
#line 7070
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7071
F_TRAINER_FEMALE | 
#line 7072
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7073
        .doubleBattle = FALSE,
#line 7074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7076
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7077
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7080
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7081
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7084
    [TRAINER_JANICE] =
    {
#line 7085
        .trainerName = _("JANICE"),
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7094
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7097
    [TRAINER_VIVI] =
    {
#line 7098
        .trainerName = _("VIVI"),
#line 7099
        .trainerClass = TRAINER_CLASS_WINSTRATE,
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7106
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7108
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7107
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7110
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7111
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7114
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7115
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7118
    [TRAINER_SALLY] =
    {
#line 7119
        .trainerName = _("SALLY"),
#line 7120
        .trainerClass = TRAINER_CLASS_LASS,
#line 7121
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7122
F_TRAINER_FEMALE | 
#line 7123
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7124
        .doubleBattle = FALSE,
#line 7125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7127
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7128
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7131
    [TRAINER_ROBIN] =
    {
#line 7132
        .trainerName = _("ROBIN"),
#line 7133
        .trainerClass = TRAINER_CLASS_LASS,
#line 7134
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7135
F_TRAINER_FEMALE | 
#line 7136
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7137
        .doubleBattle = FALSE,
#line 7138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7140
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7141
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7144
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7145
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7148
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7149
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7152
    [TRAINER_ANDREA] =
    {
#line 7153
        .trainerName = _("ANDREA"),
#line 7154
        .trainerClass = TRAINER_CLASS_LASS,
#line 7155
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7156
F_TRAINER_FEMALE | 
#line 7157
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7158
        .doubleBattle = FALSE,
#line 7159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7161
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7163
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7162
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7165
    [TRAINER_CRISSY] =
    {
#line 7166
        .trainerName = _("CRISSY"),
#line 7167
        .trainerClass = TRAINER_CLASS_LASS,
#line 7168
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7169
F_TRAINER_FEMALE | 
#line 7170
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7171
        .doubleBattle = FALSE,
#line 7172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7174
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7176
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7175
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7178
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7180
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7179
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7182
    [TRAINER_RICK] =
    {
#line 7183
        .trainerName = _("RICK"),
#line 7184
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7185
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7187
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7188
        .doubleBattle = FALSE,
#line 7189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7191
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7192
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7195
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7196
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7199
    [TRAINER_LYLE] =
    {
#line 7200
        .trainerName = _("LYLE"),
#line 7201
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7202
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7204
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7205
        .doubleBattle = FALSE,
#line 7206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7208
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7209
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7212
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7213
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7216
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7217
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7220
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7221
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7224
    [TRAINER_JOSE] =
    {
#line 7225
        .trainerName = _("JOSE"),
#line 7226
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7227
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7230
        .doubleBattle = FALSE,
#line 7231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7233
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7234
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7237
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7239
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7238
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7241
    [TRAINER_DOUG] =
    {
#line 7242
        .trainerName = _("DOUG"),
#line 7243
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7244
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7246
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7247
        .doubleBattle = FALSE,
#line 7248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7250
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7251
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7254
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7255
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7258
    [TRAINER_GREG] =
    {
#line 7259
        .trainerName = _("GREG"),
#line 7260
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7261
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7263
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7264
        .doubleBattle = FALSE,
#line 7265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7267
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7268
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7271
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7272
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7275
    [TRAINER_KENT] =
    {
#line 7276
        .trainerName = _("KENT"),
#line 7277
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7278
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7281
        .doubleBattle = FALSE,
#line 7282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7284
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7285
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7288
    [TRAINER_JAMES_1] =
    {
#line 7289
        .trainerName = _("JAMES"),
#line 7290
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7291
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7294
        .doubleBattle = FALSE,
#line 7295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7297
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7298
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7301
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7302
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7305
    [TRAINER_BRICE] =
    {
#line 7306
        .trainerName = _("BRICE"),
#line 7307
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7308
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7310
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7311
        .doubleBattle = FALSE,
#line 7312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7314
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7315
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7318
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7319
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7322
    [TRAINER_TRENT_1] =
    {
#line 7323
        .trainerName = _("TRENT"),
#line 7324
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7325
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7327
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7328
        .doubleBattle = FALSE,
#line 7329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7331
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7332
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7335
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7336
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7339
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7340
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7343
    [TRAINER_LENNY] =
    {
#line 7344
        .trainerName = _("LENNY"),
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
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7356
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7357
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7360
    [TRAINER_LUCAS_1] =
    {
#line 7361
        .trainerName = _("LUCAS"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7369
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7370
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7373
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7374
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7377
    [TRAINER_ALAN] =
    {
#line 7378
        .trainerName = _("ALAN"),
#line 7379
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7380
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7382
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7383
        .doubleBattle = FALSE,
#line 7384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7386
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7387
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7390
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7391
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7394
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7395
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7398
    [TRAINER_CLARK] =
    {
#line 7399
        .trainerName = _("CLARK"),
#line 7400
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7401
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7403
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7404
        .doubleBattle = FALSE,
#line 7405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7407
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7408
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7411
    [TRAINER_ERIC] =
    {
#line 7412
        .trainerName = _("ERIC"),
#line 7413
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7414
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7416
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7417
        .doubleBattle = FALSE,
#line 7418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7420
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7421
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7424
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7425
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7428
    [TRAINER_MIKE_2] =
    {
#line 7429
        .trainerName = _("MIKE"),
#line 7430
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7431
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7433
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7434
        .doubleBattle = FALSE,
#line 7435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7437
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7438
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7441
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7442
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7445
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7446
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7449
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 7450
        .trainerName = _("DEZ & LUKE"),
#line 7451
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7452
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 7454
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7455
        .doubleBattle = TRUE,
#line 7456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7458
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7459
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7462
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7463
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7466
    [TRAINER_LEA_AND_JED] =
    {
#line 7467
        .trainerName = _("LEA & JED"),
#line 7468
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7469
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 7471
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7472
        .doubleBattle = TRUE,
#line 7473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7475
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7476
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7479
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7480
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7483
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 7484
        .trainerName = _("KIRA & DAN"),
#line 7485
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7486
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 7488
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7489
        .doubleBattle = TRUE,
#line 7490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7492
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7493
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7496
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7497
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7500
    [TRAINER_JOHANNA] =
    {
#line 7501
        .trainerName = _("JOHANNA"),
#line 7502
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7503
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 7504
F_TRAINER_FEMALE | 
#line 7505
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7506
        .doubleBattle = FALSE,
#line 7507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7509
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7510
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7513
    [TRAINER_GERALD] =
    {
#line 7514
        .trainerName = _("GERALD"),
#line 7515
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7516
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 7518
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7519
        .items = { ITEM_HYPER_POTION },
#line 7520
        .doubleBattle = FALSE,
#line 7521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7523
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7525
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7524
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7526
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 7531
    [TRAINER_VIVIAN] =
    {
#line 7532
        .trainerName = _("VIVIAN"),
#line 7533
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7534
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7535
F_TRAINER_FEMALE | 
#line 7536
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7537
        .doubleBattle = FALSE,
#line 7538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7540
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7542
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7541
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7543
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7548
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7550
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7549
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7551
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 7556
    [TRAINER_DANIELLE] =
    {
#line 7557
        .trainerName = _("DANIELLE"),
#line 7558
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7559
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7560
F_TRAINER_FEMALE | 
#line 7561
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7562
        .doubleBattle = FALSE,
#line 7563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7565
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7567
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7566
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7568
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7573
    [TRAINER_HIDEO] =
    {
#line 7574
        .trainerName = _("HIDEO"),
#line 7575
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7576
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7578
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7579
        .doubleBattle = FALSE,
#line 7580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7582
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7583
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7585
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 7590
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7591
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7593
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 7598
    [TRAINER_KEIGO] =
    {
#line 7599
        .trainerName = _("KEIGO"),
#line 7600
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7601
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7603
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7604
        .doubleBattle = FALSE,
#line 7605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7607
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7608
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7610
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 7615
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7616
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7618
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7623
    [TRAINER_RILEY] =
    {
#line 7624
        .trainerName = _("RILEY"),
#line 7625
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7626
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7628
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7629
        .doubleBattle = FALSE,
#line 7630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7632
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7633
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7635
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 7640
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7641
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7643
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 7648
    [TRAINER_FLINT] =
    {
#line 7649
        .trainerName = _("FLINT"),
#line 7650
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7651
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 7653
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7654
        .doubleBattle = FALSE,
#line 7655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7657
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7658
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7661
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7663
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7662
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7665
    [TRAINER_ASHLEY] =
    {
#line 7666
        .trainerName = _("ASHLEY"),
#line 7667
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7668
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7669
F_TRAINER_FEMALE | 
#line 7670
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7671
        .doubleBattle = FALSE,
#line 7672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7674
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7676
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7675
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7678
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7679
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7682
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7684
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7683
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7686
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 7687
        .trainerName = _("WALLY"),
#line 7688
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7689
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7691
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7692
        .doubleBattle = FALSE,
#line 7693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7695
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7696
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7699
    [TRAINER_WALLY_VR_2] =
    {
#line 7700
        .trainerName = _("WALLY"),
#line 7701
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7702
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7704
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7705
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7706
        .doubleBattle = FALSE,
#line 7707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7709
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7711
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7710
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7712
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7717
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7719
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7718
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7720
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7725
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7726
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7728
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7733
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7735
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7734
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7736
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7741
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7743
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7742
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7744
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7749
    [TRAINER_WALLY_VR_3] =
    {
#line 7750
        .trainerName = _("WALLY"),
#line 7751
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7752
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7754
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7755
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7756
        .doubleBattle = FALSE,
#line 7757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7759
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7761
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7760
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7762
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7767
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7768
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7770
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7775
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7777
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7776
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7778
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7783
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7784
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7786
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7791
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7793
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7792
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7794
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7799
    [TRAINER_WALLY_VR_4] =
    {
#line 7800
        .trainerName = _("WALLY"),
#line 7801
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7802
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7804
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7805
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7806
        .doubleBattle = FALSE,
#line 7807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7809
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7810
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7812
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7817
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7819
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7818
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7820
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7825
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7827
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7826
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7828
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7833
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7835
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7834
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7836
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7841
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7843
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7842
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7844
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7849
    [TRAINER_WALLY_VR_5] =
    {
#line 7850
        .trainerName = _("WALLY"),
#line 7851
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7852
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7854
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7855
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7856
        .doubleBattle = FALSE,
#line 7857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7859
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7861
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7860
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7862
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7867
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7869
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7868
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7870
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7875
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7877
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7876
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7878
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7883
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7885
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7884
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7886
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7891
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7893
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7892
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7894
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7899
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 7900
        .trainerName = _("BRENDAN"),
#line 7901
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7902
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7904
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7905
        .doubleBattle = FALSE,
#line 7906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7908
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7910
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7909
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7912
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7914
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7913
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7916
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7918
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7917
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7920
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7921
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7924
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 7925
        .trainerName = _("BRENDAN"),
#line 7926
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7927
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7929
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7930
        .doubleBattle = FALSE,
#line 7931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7933
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7935
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7934
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7937
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7939
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7938
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7941
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7943
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7942
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7945
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7947
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7946
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7949
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 7950
        .trainerName = _("BRENDAN"),
#line 7951
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7952
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7954
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7955
        .doubleBattle = FALSE,
#line 7956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7958
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7960
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7959
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7962
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7964
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7963
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7966
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7967
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7970
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7972
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7971
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7974
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 7975
        .trainerName = _("MAY"),
#line 7976
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7977
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7978
F_TRAINER_FEMALE | 
#line 7979
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7980
        .doubleBattle = FALSE,
#line 7981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7983
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7984
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7987
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7989
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7988
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7991
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7993
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7992
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7995
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7997
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7996
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7999
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8000
        .trainerName = _("MAY"),
#line 8001
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8002
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8003
F_TRAINER_FEMALE | 
#line 8004
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8005
        .doubleBattle = FALSE,
#line 8006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8008
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8009
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8012
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8014
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8013
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8016
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8018
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8017
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8020
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8022
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8021
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8024
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8025
        .trainerName = _("MAY"),
#line 8026
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8027
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8028
F_TRAINER_FEMALE | 
#line 8029
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8030
        .doubleBattle = FALSE,
#line 8031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8033
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8035
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8034
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8037
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8039
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8038
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8041
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8043
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8042
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8045
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8047
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8046
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8049
    [TRAINER_JONAH] =
    {
#line 8050
        .trainerName = _("JONAH"),
#line 8051
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8052
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8054
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8055
        .doubleBattle = FALSE,
#line 8056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8058
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8059
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8062
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8063
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8066
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8067
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8070
    [TRAINER_HENRY] =
    {
#line 8071
        .trainerName = _("HENRY"),
#line 8072
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8073
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8075
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8076
        .doubleBattle = FALSE,
#line 8077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8079
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8080
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8083
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8084
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8087
    [TRAINER_ROGER] =
    {
#line 8088
        .trainerName = _("ROGER"),
#line 8089
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8090
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8092
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8093
        .doubleBattle = FALSE,
#line 8094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8096
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8097
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8100
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8101
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8104
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8105
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8108
    [TRAINER_ALEXA] =
    {
#line 8109
        .trainerName = _("ALEXA"),
#line 8110
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8111
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8112
F_TRAINER_FEMALE | 
#line 8113
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8114
        .items = { ITEM_FULL_RESTORE },
#line 8115
        .doubleBattle = FALSE,
#line 8116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8118
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8119
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8122
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8123
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8126
    [TRAINER_RUBEN] =
    {
#line 8127
        .trainerName = _("RUBEN"),
#line 8128
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8129
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8131
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8132
        .items = { ITEM_HYPER_POTION },
#line 8133
        .doubleBattle = FALSE,
#line 8134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8136
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8138
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8137
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8140
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8142
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8141
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8144
    [TRAINER_KOJI_1] =
    {
#line 8145
        .trainerName = _("KOJI"),
#line 8146
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8147
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 8149
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8150
        .doubleBattle = FALSE,
#line 8151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8153
            .species = SPECIES_MACHOKE,
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
    [TRAINER_WAYNE] =
    {
#line 8158
        .trainerName = _("WAYNE"),
#line 8159
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8160
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8162
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8163
        .doubleBattle = FALSE,
#line 8164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8166
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8167
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8170
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8171
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8174
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8175
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8178
    [TRAINER_AIDAN] =
    {
#line 8179
        .trainerName = _("AIDAN"),
#line 8180
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8181
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 8183
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8184
        .doubleBattle = FALSE,
#line 8185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8187
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8188
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8191
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8192
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8195
    [TRAINER_REED] =
    {
#line 8196
        .trainerName = _("REED"),
#line 8197
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8198
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8200
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8201
        .doubleBattle = FALSE,
#line 8202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8204
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8205
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8208
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8209
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8212
    [TRAINER_TISHA] =
    {
#line 8213
        .trainerName = _("TISHA"),
#line 8214
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8215
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 8216
F_TRAINER_FEMALE | 
#line 8217
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8218
        .doubleBattle = FALSE,
#line 8219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8221
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8222
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8225
    [TRAINER_TORI_AND_TIA] =
    {
#line 8226
        .trainerName = _("TORI & TIA"),
#line 8227
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8228
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 8230
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8231
        .doubleBattle = TRUE,
#line 8232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8234
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8235
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8238
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8239
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8242
    [TRAINER_KIM_AND_IRIS] =
    {
#line 8243
        .trainerName = _("KIM & IRIS"),
#line 8244
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8245
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 8247
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8248
        .doubleBattle = TRUE,
#line 8249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8251
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8252
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8254
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 8259
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8260
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8262
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 8267
    [TRAINER_TYRA_AND_IVY] =
    {
#line 8268
        .trainerName = _("TYRA & IVY"),
#line 8269
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8270
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 8272
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8273
        .doubleBattle = TRUE,
#line 8274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8276
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8277
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8279
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 8284
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8285
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8287
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 8292
    [TRAINER_MEL_AND_PAUL] =
    {
#line 8293
        .trainerName = _("MEL & PAUL"),
#line 8294
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8295
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 8297
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8298
        .doubleBattle = TRUE,
#line 8299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8301
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8302
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8304
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 8309
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8310
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8312
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 8317
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 8318
        .trainerName = _("JOHN & JAY"),
#line 8319
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8320
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 8322
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8323
        .doubleBattle = TRUE,
#line 8324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8326
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8328
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8327
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8329
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 8334
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8335
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8337
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 8342
    [TRAINER_RELI_AND_IAN] =
    {
#line 8343
        .trainerName = _("RELI & IAN"),
#line 8344
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8345
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 8347
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8348
        .doubleBattle = TRUE,
#line 8349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8351
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8352
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8355
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8356
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8359
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 8360
        .trainerName = _("LILA & ROY"),
#line 8361
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8362
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 8364
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8365
        .doubleBattle = TRUE,
#line 8366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8368
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8369
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8372
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8373
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8376
    [TRAINER_LISA_AND_RAY] =
    {
#line 8377
        .trainerName = _("LISA & RAY"),
#line 8378
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8379
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 8381
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8382
        .doubleBattle = TRUE,
#line 8383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8385
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8386
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8389
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8390
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8393
    [TRAINER_CHRIS] =
    {
#line 8394
        .trainerName = _("CHRIS"),
#line 8395
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8396
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8398
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8399
        .doubleBattle = FALSE,
#line 8400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8402
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8403
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8406
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8407
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8410
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8411
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8414
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8415
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8418
    [TRAINER_DAWSON] =
    {
#line 8419
        .trainerName = _("DAWSON"),
#line 8420
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8421
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 8423
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8424
        .doubleBattle = FALSE,
#line 8425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8427
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8427
            .heldItem = ITEM_NUGGET,
#line 8429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8428
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8431
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8432
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8435
    [TRAINER_SARAH] =
    {
#line 8436
        .trainerName = _("SARAH"),
#line 8437
        .trainerClass = TRAINER_CLASS_LADY,
#line 8438
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 8439
F_TRAINER_FEMALE | 
#line 8440
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8441
        .items = { ITEM_FULL_RESTORE },
#line 8442
        .doubleBattle = FALSE,
#line 8443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8445
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8446
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8449
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .heldItem = ITEM_NUGGET,
#line 8451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8450
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8453
    [TRAINER_DARIAN] =
    {
#line 8454
        .trainerName = _("DARIAN"),
#line 8455
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8456
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8458
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8459
        .doubleBattle = FALSE,
#line 8460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8462
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8463
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8466
    [TRAINER_HAILEY] =
    {
#line 8467
        .trainerName = _("HAILEY"),
#line 8468
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8469
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 8470
F_TRAINER_FEMALE | 
#line 8471
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8472
        .doubleBattle = FALSE,
#line 8473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8475
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8476
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8479
    [TRAINER_CHANDLER] =
    {
#line 8480
        .trainerName = _("CHANDLER"),
#line 8481
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8482
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 8484
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8485
        .doubleBattle = FALSE,
#line 8486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8488
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8489
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8492
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8493
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8496
    [TRAINER_KALEB] =
    {
#line 8497
        .trainerName = _("KALEB"),
#line 8498
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8499
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 8501
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8502
        .doubleBattle = FALSE,
#line 8503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8505
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .heldItem = ITEM_ORAN_BERRY,
#line 8507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8506
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8509
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8509
            .heldItem = ITEM_ORAN_BERRY,
#line 8511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8510
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8513
    [TRAINER_JOSEPH] =
    {
#line 8514
        .trainerName = _("JOSEPH"),
#line 8515
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8516
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 8518
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8519
        .doubleBattle = FALSE,
#line 8520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8522
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8523
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8526
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8527
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8530
    [TRAINER_ALYSSA] =
    {
#line 8531
        .trainerName = _("ALYSSA"),
#line 8532
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8533
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 8534
F_TRAINER_FEMALE | 
#line 8535
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8536
        .doubleBattle = FALSE,
#line 8537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8539
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8540
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8543
    [TRAINER_MARCOS] =
    {
#line 8544
        .trainerName = _("MARCOS"),
#line 8545
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8546
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 8548
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8549
        .doubleBattle = FALSE,
#line 8550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8552
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8554
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8553
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8556
    [TRAINER_RHETT] =
    {
#line 8557
        .trainerName = _("RHETT"),
#line 8558
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8559
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 8561
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8562
        .doubleBattle = FALSE,
#line 8563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8565
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8567
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8566
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8569
    [TRAINER_TYRON] =
    {
#line 8570
        .trainerName = _("TYRON"),
#line 8571
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8572
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 8574
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8575
        .doubleBattle = FALSE,
#line 8576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8578
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8579
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8582
    [TRAINER_CELINA] =
    {
#line 8583
        .trainerName = _("CELINA"),
#line 8584
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8585
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 8586
F_TRAINER_FEMALE | 
#line 8587
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8588
        .doubleBattle = FALSE,
#line 8589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8591
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8592
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8595
    [TRAINER_BIANCA] =
    {
#line 8596
        .trainerName = _("BIANCA"),
#line 8597
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8598
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8599
F_TRAINER_FEMALE | 
#line 8600
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8601
        .doubleBattle = FALSE,
#line 8602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8604
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8605
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8608
    [TRAINER_HAYDEN] =
    {
#line 8609
        .trainerName = _("HAYDEN"),
#line 8610
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 8611
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 8613
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8614
        .doubleBattle = FALSE,
#line 8615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8617
            .species = SPECIES_NUMEL,
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
    [TRAINER_SOPHIE] =
    {
#line 8622
        .trainerName = _("SOPHIE"),
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8631
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8634
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8635
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8638
    [TRAINER_COBY] =
    {
#line 8639
        .trainerName = _("COBY"),
#line 8640
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8641
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 8643
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8644
        .doubleBattle = FALSE,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8648
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8651
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8652
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8655
    [TRAINER_LAWRENCE] =
    {
#line 8656
        .trainerName = _("LAWRENCE"),
#line 8657
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8658
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 8660
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8661
        .doubleBattle = FALSE,
#line 8662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8664
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8665
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8668
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8669
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8672
    [TRAINER_WYATT] =
    {
#line 8673
        .trainerName = _("WYATT"),
#line 8674
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8675
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 8677
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8678
        .doubleBattle = FALSE,
#line 8679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8681
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8682
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8685
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8686
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8689
    [TRAINER_ANGELINA] =
    {
#line 8690
        .trainerName = _("ANGELINA"),
#line 8691
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8692
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8693
F_TRAINER_FEMALE | 
#line 8694
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8695
        .doubleBattle = FALSE,
#line 8696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8698
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8699
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8702
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8703
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8706
    [TRAINER_KAI] =
    {
#line 8707
        .trainerName = _("KAI"),
#line 8708
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8709
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8711
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8712
        .doubleBattle = FALSE,
#line 8713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8715
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8716
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8719
    [TRAINER_CHARLOTTE] =
    {
#line 8720
        .trainerName = _("CHARLOTTE"),
#line 8721
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8722
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8723
F_TRAINER_FEMALE | 
#line 8724
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8725
        .doubleBattle = FALSE,
#line 8726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8728
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8729
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8732
    [TRAINER_DEANDRE] =
    {
#line 8733
        .trainerName = _("DEANDRE"),
#line 8734
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 8735
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 8737
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8738
        .doubleBattle = FALSE,
#line 8739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8741
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8742
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8745
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8746
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8749
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8750
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8753
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 8754
        .trainerName = _("GRUNT"),
#line 8755
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8756
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8758
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8759
        .doubleBattle = FALSE,
#line 8760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8762
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8763
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8766
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 8767
        .trainerName = _("GRUNT"),
#line 8768
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8769
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8771
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8772
        .doubleBattle = FALSE,
#line 8773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8775
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8776
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8779
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 8780
        .trainerName = _("GRUNT"),
#line 8781
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8782
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8784
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8785
        .doubleBattle = FALSE,
#line 8786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8788
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8789
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8792
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 8793
        .trainerName = _("GRUNT"),
#line 8794
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8795
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8797
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8798
        .doubleBattle = FALSE,
#line 8799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8801
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8802
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8805
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8806
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8809
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 8810
        .trainerName = _("GRUNT"),
#line 8811
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8812
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8814
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8815
        .doubleBattle = FALSE,
#line 8816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8818
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8819
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8822
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8823
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8826
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 8827
        .trainerName = _("GRUNT"),
#line 8828
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8829
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8831
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8832
        .doubleBattle = FALSE,
#line 8833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8835
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8836
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8839
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 8840
        .trainerName = _("GRUNT"),
#line 8841
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8842
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8844
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8845
        .doubleBattle = FALSE,
#line 8846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8848
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8849
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8852
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 8853
        .trainerName = _("GRUNT"),
#line 8854
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8855
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8857
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8858
        .doubleBattle = FALSE,
#line 8859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8861
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8862
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8865
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 8866
        .trainerName = _("GRUNT"),
#line 8867
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8868
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8870
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8871
        .doubleBattle = FALSE,
#line 8872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8874
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8875
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8878
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 8879
        .trainerName = _("GRUNT"),
#line 8880
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8881
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8883
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8884
        .doubleBattle = FALSE,
#line 8885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8887
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8888
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8891
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 8892
        .trainerName = _("GRUNT"),
#line 8893
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8894
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8896
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8897
        .doubleBattle = FALSE,
#line 8898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8900
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8901
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8904
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 8905
        .trainerName = _("GRUNT"),
#line 8906
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8907
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8909
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8910
        .doubleBattle = FALSE,
#line 8911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8913
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8914
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8917
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 8918
        .trainerName = _("GRUNT"),
#line 8919
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8920
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8922
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8923
        .doubleBattle = FALSE,
#line 8924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8926
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8927
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8930
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 8931
        .trainerName = _("GRUNT"),
#line 8932
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8933
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8934
F_TRAINER_FEMALE | 
#line 8935
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8936
        .doubleBattle = FALSE,
#line 8937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8939
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8940
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8943
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 8944
        .trainerName = _("GRUNT"),
#line 8945
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8946
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8947
F_TRAINER_FEMALE | 
#line 8948
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8949
        .doubleBattle = FALSE,
#line 8950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8952
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8953
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8956
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 8957
        .trainerName = _("GRUNT"),
#line 8958
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8959
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8960
F_TRAINER_FEMALE | 
#line 8961
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8962
        .doubleBattle = FALSE,
#line 8963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8965
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8966
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8969
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 8970
        .trainerName = _("TABITHA"),
#line 8971
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8972
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 8974
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8975
        .doubleBattle = FALSE,
#line 8976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8978
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8980
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8979
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8982
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8984
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8983
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8986
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8988
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8987
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8990
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8992
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8991
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8994
    [TRAINER_DARCY] =
    {
#line 8995
        .trainerName = _("DARCY"),
#line 8996
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8997
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8998
F_TRAINER_FEMALE | 
#line 8999
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9000
        .items = { ITEM_HYPER_POTION },
#line 9001
        .doubleBattle = FALSE,
#line 9002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9004
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9005
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9008
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9009
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9012
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9013
        .trainerName = _("MAXIE"),
#line 9014
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9015
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9017
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9018
        .doubleBattle = FALSE,
#line 9019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9021
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9023
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9022
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9025
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9026
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9029
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9030
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9033
    [TRAINER_PETE] =
    {
#line 9034
        .trainerName = _("PETE"),
#line 9035
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9036
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9038
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9039
        .doubleBattle = FALSE,
#line 9040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9042
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9043
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9046
    [TRAINER_ISABELLE] =
    {
#line 9047
        .trainerName = _("ISABELLE"),
#line 9048
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9049
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 9050
F_TRAINER_FEMALE | 
#line 9051
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9052
        .doubleBattle = FALSE,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9055
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9056
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9059
    [TRAINER_ANDRES_1] =
    {
#line 9060
        .trainerName = _("ANDRES"),
#line 9061
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9062
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 9064
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9065
        .doubleBattle = FALSE,
#line 9066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9068
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9070
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9069
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9072
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9074
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9073
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9076
    [TRAINER_JOSUE] =
    {
#line 9077
        .trainerName = _("JOSUE"),
#line 9078
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9079
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 9081
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9082
        .doubleBattle = FALSE,
#line 9083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9085
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9087
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9086
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9089
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9091
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9090
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9093
    [TRAINER_CAMRON] =
    {
#line 9094
        .trainerName = _("CAMRON"),
#line 9095
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9096
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 9098
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9099
        .doubleBattle = FALSE,
#line 9100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9102
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9103
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9106
    [TRAINER_CORY_1] =
    {
#line 9107
        .trainerName = _("CORY"),
#line 9108
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9109
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 9111
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9112
        .doubleBattle = FALSE,
#line 9113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9115
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9116
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9119
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9120
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9123
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9124
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9127
    [TRAINER_CAROLINA] =
    {
#line 9128
        .trainerName = _("CAROLINA"),
#line 9129
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9130
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9131
F_TRAINER_FEMALE | 
#line 9132
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9133
        .items = { ITEM_HYPER_POTION },
#line 9134
        .doubleBattle = FALSE,
#line 9135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9137
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9139
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9138
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9141
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9143
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9142
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9145
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9146
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9149
    [TRAINER_ELIJAH] =
    {
#line 9150
        .trainerName = _("ELIJAH"),
#line 9151
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9152
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 9154
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9155
        .doubleBattle = FALSE,
#line 9156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9158
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9159
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9162
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9163
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9166
    [TRAINER_CELIA] =
    {
#line 9167
        .trainerName = _("CELIA"),
#line 9168
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9169
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 9170
F_TRAINER_FEMALE | 
#line 9171
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9172
        .doubleBattle = FALSE,
#line 9173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9175
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9176
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9179
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9180
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9183
    [TRAINER_BRYAN] =
    {
#line 9184
        .trainerName = _("BRYAN"),
#line 9185
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9186
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 9188
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9189
        .doubleBattle = FALSE,
#line 9190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9192
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9193
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9196
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9197
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9200
    [TRAINER_BRANDEN] =
    {
#line 9201
        .trainerName = _("BRANDEN"),
#line 9202
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9203
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 9205
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9206
        .doubleBattle = FALSE,
#line 9207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9209
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9210
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9213
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9214
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9217
    [TRAINER_BRYANT] =
    {
#line 9218
        .trainerName = _("BRYANT"),
#line 9219
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9220
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 9222
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9223
        .doubleBattle = FALSE,
#line 9224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9226
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9227
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9230
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9231
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9234
    [TRAINER_SHAYLA] =
    {
#line 9235
        .trainerName = _("SHAYLA"),
#line 9236
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9237
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 9238
F_TRAINER_FEMALE | 
#line 9239
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9240
        .doubleBattle = FALSE,
#line 9241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9243
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9244
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9247
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9248
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9251
    [TRAINER_KYRA] =
    {
#line 9252
        .trainerName = _("KYRA"),
#line 9253
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9254
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9255
F_TRAINER_FEMALE | 
#line 9256
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9257
        .doubleBattle = FALSE,
#line 9258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9260
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9261
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9264
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9265
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9268
    [TRAINER_JAIDEN] =
    {
#line 9269
        .trainerName = _("JAIDEN"),
#line 9270
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9271
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9273
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9274
        .doubleBattle = FALSE,
#line 9275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9277
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9278
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9281
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9282
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9285
    [TRAINER_ALIX] =
    {
#line 9286
        .trainerName = _("ALIX"),
#line 9287
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9288
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9289
F_TRAINER_FEMALE | 
#line 9290
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9291
        .doubleBattle = FALSE,
#line 9292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9294
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9295
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9298
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9299
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9302
    [TRAINER_HELENE] =
    {
#line 9303
        .trainerName = _("HELENE"),
#line 9304
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9305
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9306
F_TRAINER_FEMALE | 
#line 9307
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9308
        .doubleBattle = FALSE,
#line 9309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9311
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9312
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9315
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9316
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9319
    [TRAINER_MARLENE] =
    {
#line 9320
        .trainerName = _("MARLENE"),
#line 9321
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9322
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9323
F_TRAINER_FEMALE | 
#line 9324
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9325
        .doubleBattle = FALSE,
#line 9326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9328
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9329
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9332
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9333
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9336
    [TRAINER_DEVAN] =
    {
#line 9337
        .trainerName = _("DEVAN"),
#line 9338
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9339
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9341
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9342
        .doubleBattle = FALSE,
#line 9343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9345
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9346
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9349
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9350
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9353
    [TRAINER_JOHNSON] =
    {
#line 9354
        .trainerName = _("JOHNSON"),
#line 9355
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9356
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 9358
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9359
        .doubleBattle = FALSE,
#line 9360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9362
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9363
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9366
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9367
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [TRAINER_MELINA] =
    {
#line 9371
        .trainerName = _("MELINA"),
#line 9372
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9373
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9374
F_TRAINER_FEMALE | 
#line 9375
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9376
        .doubleBattle = FALSE,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9380
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9383
    [TRAINER_BRANDI] =
    {
#line 9384
        .trainerName = _("BRANDI"),
#line 9385
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9386
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9387
F_TRAINER_FEMALE | 
#line 9388
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9389
        .doubleBattle = FALSE,
#line 9390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9392
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9393
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9396
    [TRAINER_AISHA] =
    {
#line 9397
        .trainerName = _("AISHA"),
#line 9398
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9399
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9400
F_TRAINER_FEMALE | 
#line 9401
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9402
        .doubleBattle = FALSE,
#line 9403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9405
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9406
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9409
    [TRAINER_MAKAYLA] =
    {
#line 9410
        .trainerName = _("MAKAYLA"),
#line 9411
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9412
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 9413
F_TRAINER_FEMALE | 
#line 9414
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9415
        .items = { ITEM_HYPER_POTION },
#line 9416
        .doubleBattle = FALSE,
#line 9417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9419
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9420
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9423
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9424
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9427
    [TRAINER_FABIAN] =
    {
#line 9428
        .trainerName = _("FABIAN"),
#line 9429
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9430
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 9432
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9433
        .doubleBattle = FALSE,
#line 9434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9436
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9437
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9440
    [TRAINER_DAYTON] =
    {
#line 9441
        .trainerName = _("DAYTON"),
#line 9442
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9443
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 9445
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9446
        .doubleBattle = FALSE,
#line 9447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9449
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9450
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9453
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9454
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9457
    [TRAINER_RACHEL] =
    {
#line 9458
        .trainerName = _("RACHEL"),
#line 9459
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9460
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 9461
F_TRAINER_FEMALE | 
#line 9462
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9463
        .doubleBattle = FALSE,
#line 9464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9466
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9467
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9470
    [TRAINER_LEONEL] =
    {
#line 9471
        .trainerName = _("LEONEL"),
#line 9472
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9473
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9475
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9476
        .items = { ITEM_HYPER_POTION },
#line 9477
        .doubleBattle = FALSE,
#line 9478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9480
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9482
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9481
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9483
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 9487
    [TRAINER_CALLIE] =
    {
#line 9488
        .trainerName = _("CALLIE"),
#line 9489
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9490
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9491
F_TRAINER_FEMALE | 
#line 9492
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9493
        .doubleBattle = FALSE,
#line 9494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9496
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9497
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9500
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9501
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9504
    [TRAINER_CALE] =
    {
#line 9505
        .trainerName = _("CALE"),
#line 9506
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9507
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 9509
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9510
        .doubleBattle = FALSE,
#line 9511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9513
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9514
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9517
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9518
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9521
    [TRAINER_MYLES] =
    {
#line 9522
        .trainerName = _("MYLES"),
#line 9523
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9524
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9526
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9527
        .doubleBattle = FALSE,
#line 9528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9530
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9532
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9531
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9534
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9536
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9535
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9538
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9539
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9542
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9543
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9546
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9547
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9550
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9551
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [TRAINER_PAT] =
    {
#line 9555
        .trainerName = _("PAT"),
#line 9556
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9557
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9558
F_TRAINER_FEMALE | 
#line 9559
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9560
        .doubleBattle = FALSE,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9564
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9568
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9571
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9573
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9572
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9575
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9577
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9576
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9579
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9581
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9580
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9583
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9585
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9584
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9587
    [TRAINER_CRISTIN_1] =
    {
#line 9588
        .trainerName = _("CRISTIN"),
#line 9589
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9590
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9591
F_TRAINER_FEMALE | 
#line 9592
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9593
        .items = { ITEM_HYPER_POTION },
#line 9594
        .doubleBattle = FALSE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9598
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9601
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9602
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9605
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9606
        .trainerName = _("MAY"),
#line 9607
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9608
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9609
F_TRAINER_FEMALE | 
#line 9610
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9611
        .doubleBattle = FALSE,
#line 9612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9614
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9615
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9618
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9620
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9619
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9622
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9623
        .trainerName = _("MAY"),
#line 9624
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9625
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9626
F_TRAINER_FEMALE | 
#line 9627
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9628
        .doubleBattle = FALSE,
#line 9629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9631
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9632
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9635
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9636
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9639
    [TRAINER_ROXANNE_2] =
    {
#line 9640
        .trainerName = _("ROXANNE"),
#line 9641
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9642
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9643
F_TRAINER_FEMALE | 
#line 9644
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9645
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9646
        .doubleBattle = TRUE,
#line 9647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9649
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9650
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9652
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9657
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9657
            .heldItem = ITEM_SITRUS_BERRY,
#line 9659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9658
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9660
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9665
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9666
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9668
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9673
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9673
            .heldItem = ITEM_SITRUS_BERRY,
#line 9675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9674
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9676
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9681
    [TRAINER_ROXANNE_3] =
    {
#line 9682
        .trainerName = _("ROXANNE"),
#line 9683
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9684
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9685
F_TRAINER_FEMALE | 
#line 9686
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9687
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9688
        .doubleBattle = TRUE,
#line 9689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9691
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9692
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9694
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9699
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9700
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9702
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9707
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9707
            .heldItem = ITEM_SITRUS_BERRY,
#line 9709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9708
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9710
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9715
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9716
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9718
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9723
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9723
            .heldItem = ITEM_SITRUS_BERRY,
#line 9725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9724
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9726
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9731
    [TRAINER_ROXANNE_4] =
    {
#line 9732
        .trainerName = _("ROXANNE"),
#line 9733
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9734
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9735
F_TRAINER_FEMALE | 
#line 9736
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9737
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9738
        .doubleBattle = TRUE,
#line 9739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9741
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9743
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9742
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9744
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9749
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9750
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9752
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9757
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9757
            .heldItem = ITEM_SITRUS_BERRY,
#line 9759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9758
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9760
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9765
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9766
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9768
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9773
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9773
            .heldItem = ITEM_SITRUS_BERRY,
#line 9775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9774
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9776
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9781
    [TRAINER_ROXANNE_5] =
    {
#line 9782
        .trainerName = _("ROXANNE"),
#line 9783
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9784
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9785
F_TRAINER_FEMALE | 
#line 9786
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9787
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9788
        .doubleBattle = TRUE,
#line 9789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9791
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9792
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9794
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9799
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9800
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9802
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9807
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9808
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9810
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9815
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .heldItem = ITEM_SITRUS_BERRY,
#line 9817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9816
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9818
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9823
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9824
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9826
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9831
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9831
            .heldItem = ITEM_SITRUS_BERRY,
#line 9833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9832
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9834
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9839
    [TRAINER_BRAWLY_2] =
    {
#line 9840
        .trainerName = _("BRAWLY"),
#line 9841
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9842
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9844
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9845
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9846
        .doubleBattle = TRUE,
#line 9847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9849
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9849
            .heldItem = ITEM_SITRUS_BERRY,
#line 9851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9850
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9852
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9857
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9858
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9860
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 9865
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9866
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9868
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9873
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9873
            .heldItem = ITEM_SITRUS_BERRY,
#line 9875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9874
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9876
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9881
    [TRAINER_BRAWLY_3] =
    {
#line 9882
        .trainerName = _("BRAWLY"),
#line 9883
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9884
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9886
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9887
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9888
        .doubleBattle = TRUE,
#line 9889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9891
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9891
            .heldItem = ITEM_SITRUS_BERRY,
#line 9893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9892
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9894
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9899
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9900
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9902
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 9907
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9908
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9910
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9915
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9915
            .heldItem = ITEM_SITRUS_BERRY,
#line 9917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9916
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9918
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9923
    [TRAINER_BRAWLY_4] =
    {
#line 9924
        .trainerName = _("BRAWLY"),
#line 9925
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9926
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9928
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9929
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9930
        .doubleBattle = TRUE,
#line 9931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9933
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9935
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9934
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9936
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9941
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9941
            .heldItem = ITEM_SITRUS_BERRY,
#line 9943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9942
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9944
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9949
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9950
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9952
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 9957
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9958
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9960
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9965
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9965
            .heldItem = ITEM_SITRUS_BERRY,
#line 9967
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9966
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9968
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9973
    [TRAINER_BRAWLY_5] =
    {
#line 9974
        .trainerName = _("BRAWLY"),
#line 9975
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9976
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9979
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9980
        .doubleBattle = TRUE,
#line 9981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9983
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9984
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9986
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 9991
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9992
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9994
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9999
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9999
            .heldItem = ITEM_SITRUS_BERRY,
#line 10001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10000
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10002
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 10007
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10008
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10010
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10015
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10016
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10018
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 10023
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10023
            .heldItem = ITEM_SITRUS_BERRY,
#line 10025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10024
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10026
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10031
    [TRAINER_WATTSON_2] =
    {
#line 10032
        .trainerName = _("WATTSON"),
#line 10033
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10034
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10036
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10037
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10038
        .doubleBattle = TRUE,
#line 10039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10041
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10042
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10044
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10049
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10050
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10052
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10057
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10057
            .heldItem = ITEM_SITRUS_BERRY,
#line 10059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10058
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10060
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10065
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10065
            .heldItem = ITEM_SITRUS_BERRY,
#line 10067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10066
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10068
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10073
    [TRAINER_WATTSON_3] =
    {
#line 10074
        .trainerName = _("WATTSON"),
#line 10075
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10076
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10078
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10079
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10080
        .doubleBattle = TRUE,
#line 10081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10083
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10084
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10086
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 10091
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10092
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10094
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10099
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10100
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10102
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10107
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .heldItem = ITEM_SITRUS_BERRY,
#line 10109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10108
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10110
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10115
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10115
            .heldItem = ITEM_SITRUS_BERRY,
#line 10117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10116
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10118
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10123
    [TRAINER_WATTSON_4] =
    {
#line 10124
        .trainerName = _("WATTSON"),
#line 10125
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10126
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10128
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10129
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10130
        .doubleBattle = TRUE,
#line 10131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10133
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10134
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10136
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10141
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10142
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10144
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10149
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10150
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10152
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10157
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10157
            .heldItem = ITEM_SITRUS_BERRY,
#line 10159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10158
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10160
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10165
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10165
            .heldItem = ITEM_SITRUS_BERRY,
#line 10167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10166
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10168
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10173
    [TRAINER_WATTSON_5] =
    {
#line 10174
        .trainerName = _("WATTSON"),
#line 10175
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10176
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10178
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10179
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10180
        .doubleBattle = TRUE,
#line 10181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10183
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10184
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10186
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10191
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10192
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10194
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10199
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10200
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10202
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10207
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10208
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10210
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10215
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10215
            .heldItem = ITEM_SITRUS_BERRY,
#line 10217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10216
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10218
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10223
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10223
            .heldItem = ITEM_SITRUS_BERRY,
#line 10225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10224
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10226
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10231
    [TRAINER_FLANNERY_2] =
    {
#line 10232
        .trainerName = _("FLANNERY"),
#line 10233
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10234
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10235
F_TRAINER_FEMALE | 
#line 10236
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10237
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10238
        .doubleBattle = TRUE,
#line 10239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10241
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10241
            .heldItem = ITEM_WHITE_HERB,
#line 10243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10242
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10244
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10249
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10250
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10252
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10257
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10257
            .heldItem = ITEM_WHITE_HERB,
#line 10259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10258
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10260
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10265
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .heldItem = ITEM_WHITE_HERB,
#line 10267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10266
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10268
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10273
    [TRAINER_FLANNERY_3] =
    {
#line 10274
        .trainerName = _("FLANNERY"),
#line 10275
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10276
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10277
F_TRAINER_FEMALE | 
#line 10278
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10279
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10280
        .doubleBattle = TRUE,
#line 10281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10283
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10284
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10286
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10291
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10291
            .heldItem = ITEM_WHITE_HERB,
#line 10293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10292
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10294
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10299
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10300
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10302
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10307
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10307
            .heldItem = ITEM_WHITE_HERB,
#line 10309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10308
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10310
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10315
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .heldItem = ITEM_WHITE_HERB,
#line 10317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10316
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10318
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10323
    [TRAINER_FLANNERY_4] =
    {
#line 10324
        .trainerName = _("FLANNERY"),
#line 10325
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10326
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10327
F_TRAINER_FEMALE | 
#line 10328
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10329
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10330
        .doubleBattle = TRUE,
#line 10331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10333
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10334
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10336
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10341
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10342
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10344
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10349
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10349
            .heldItem = ITEM_WHITE_HERB,
#line 10351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10350
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10352
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10357
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10358
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10360
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10365
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10365
            .heldItem = ITEM_WHITE_HERB,
#line 10367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10366
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10368
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10373
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10373
            .heldItem = ITEM_WHITE_HERB,
#line 10375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10374
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10376
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10381
    [TRAINER_FLANNERY_5] =
    {
#line 10382
        .trainerName = _("FLANNERY"),
#line 10383
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10384
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10385
F_TRAINER_FEMALE | 
#line 10386
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10387
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10388
        .doubleBattle = TRUE,
#line 10389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10391
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10392
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10394
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10399
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10399
            .heldItem = ITEM_WHITE_HERB,
#line 10401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10400
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10402
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10407
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10408
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10410
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10415
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10416
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10418
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10423
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10423
            .heldItem = ITEM_WHITE_HERB,
#line 10425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10424
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10426
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10431
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10431
            .heldItem = ITEM_WHITE_HERB,
#line 10433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10432
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10434
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10439
    [TRAINER_NORMAN_2] =
    {
#line 10440
        .trainerName = _("NORMAN"),
#line 10441
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10442
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10444
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10445
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10446
        .doubleBattle = TRUE,
#line 10447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10449
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10450
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10452
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10457
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10457
            .heldItem = ITEM_SITRUS_BERRY,
#line 10459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10458
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10460
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10465
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10466
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10468
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10473
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10473
            .heldItem = ITEM_SITRUS_BERRY,
#line 10475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10474
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10476
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10481
    [TRAINER_NORMAN_3] =
    {
#line 10482
        .trainerName = _("NORMAN"),
#line 10483
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10484
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10486
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10487
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10488
        .doubleBattle = TRUE,
#line 10489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10491
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10491
            .heldItem = ITEM_SITRUS_BERRY,
#line 10493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10492
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10494
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10499
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10500
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10502
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10507
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10508
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10510
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10515
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10516
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10518
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10523
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10523
            .heldItem = ITEM_SITRUS_BERRY,
#line 10525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10524
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10526
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10531
    [TRAINER_NORMAN_4] =
    {
#line 10532
        .trainerName = _("NORMAN"),
#line 10533
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10534
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10536
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10537
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10538
        .doubleBattle = TRUE,
#line 10539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10541
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10541
            .heldItem = ITEM_SITRUS_BERRY,
#line 10543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10542
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10544
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10549
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10550
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10552
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10557
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10558
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10560
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10565
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10567
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10566
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10568
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10573
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10573
            .heldItem = ITEM_SITRUS_BERRY,
#line 10575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10574
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10576
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10581
    [TRAINER_NORMAN_5] =
    {
#line 10582
        .trainerName = _("NORMAN"),
#line 10583
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10584
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10586
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10587
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10588
        .doubleBattle = TRUE,
#line 10589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10591
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10591
            .heldItem = ITEM_SITRUS_BERRY,
#line 10593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10592
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10594
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10599
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10600
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10602
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10607
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10608
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10610
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10615
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10616
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10618
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10623
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10624
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10626
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10631
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10631
            .heldItem = ITEM_SITRUS_BERRY,
#line 10633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10632
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10634
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10639
    [TRAINER_WINONA_2] =
    {
#line 10640
        .trainerName = _("WINONA"),
#line 10641
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10642
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10643
F_TRAINER_FEMALE | 
#line 10644
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10645
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10646
        .doubleBattle = TRUE,
#line 10647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10649
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10649
            .heldItem = ITEM_SITRUS_BERRY,
#line 10651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10650
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10652
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10657
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10658
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10660
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10665
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10666
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10668
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10673
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10674
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10676
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10681
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10681
            .heldItem = ITEM_CHESTO_BERRY,
#line 10683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10682
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10684
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10689
    [TRAINER_WINONA_3] =
    {
#line 10690
        .trainerName = _("WINONA"),
#line 10691
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10692
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10693
F_TRAINER_FEMALE | 
#line 10694
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10695
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10696
        .doubleBattle = TRUE,
#line 10697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10699
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10700
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10702
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10707
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10708
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10710
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10715
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10715
            .heldItem = ITEM_SITRUS_BERRY,
#line 10717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10716
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10718
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10723
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10724
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10726
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10731
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10732
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10734
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10739
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10739
            .heldItem = ITEM_CHESTO_BERRY,
#line 10741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10740
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10742
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10747
    [TRAINER_WINONA_4] =
    {
#line 10748
        .trainerName = _("WINONA"),
#line 10749
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10750
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10751
F_TRAINER_FEMALE | 
#line 10752
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10753
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10754
        .doubleBattle = TRUE,
#line 10755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10757
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10758
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10760
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10765
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10766
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10768
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10773
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10773
            .heldItem = ITEM_SITRUS_BERRY,
#line 10775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10774
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10776
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10781
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10782
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10784
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10789
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10790
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10792
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10797
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10797
            .heldItem = ITEM_CHESTO_BERRY,
#line 10799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10798
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10800
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10805
    [TRAINER_WINONA_5] =
    {
#line 10806
        .trainerName = _("WINONA"),
#line 10807
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10808
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10809
F_TRAINER_FEMALE | 
#line 10810
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10811
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10812
        .doubleBattle = TRUE,
#line 10813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10815
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10816
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10818
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10823
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10824
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10826
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10831
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10832
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10834
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10839
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10839
            .heldItem = ITEM_SITRUS_BERRY,
#line 10841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10840
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10842
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10847
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10848
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10850
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10855
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10855
            .heldItem = ITEM_CHESTO_BERRY,
#line 10857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10856
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10858
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10863
    [TRAINER_TATE_AND_LIZA_2] =
    {
#line 10864
        .trainerName = _("TATE&LIZA"),
#line 10865
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10866
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 10868
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10869
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10870
        .doubleBattle = TRUE,
#line 10871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10873
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10874
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10876
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10881
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10882
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10884
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10889
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10889
            .heldItem = ITEM_CHESTO_BERRY,
#line 10891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10890
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10892
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10897
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10897
            .heldItem = ITEM_CHESTO_BERRY,
#line 10899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10898
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10900
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10905
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10905
            .heldItem = ITEM_SITRUS_BERRY,
#line 10907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10906
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10908
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10913
    [TRAINER_TATE_AND_LIZA_3] =
    {
#line 10914
        .trainerName = _("TATE&LIZA"),
#line 10915
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10916
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 10918
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10919
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10920
        .doubleBattle = TRUE,
#line 10921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10923
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10924
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10926
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10931
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10932
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10934
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10939
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10940
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10942
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10947
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10947
            .heldItem = ITEM_CHESTO_BERRY,
#line 10949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10948
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10950
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10955
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10955
            .heldItem = ITEM_CHESTO_BERRY,
#line 10957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10956
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10958
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10963
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10963
            .heldItem = ITEM_SITRUS_BERRY,
#line 10965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10964
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10966
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10971
    [TRAINER_TATE_AND_LIZA_4] =
    {
#line 10972
        .trainerName = _("TATE&LIZA"),
#line 10973
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10974
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 10976
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10977
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10978
        .doubleBattle = TRUE,
#line 10979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10981
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10982
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10984
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10989
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10990
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10992
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10997
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10998
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11000
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11005
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11005
            .heldItem = ITEM_CHESTO_BERRY,
#line 11007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11006
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11008
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11013
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11013
            .heldItem = ITEM_CHESTO_BERRY,
#line 11015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11014
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11016
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11021
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11021
            .heldItem = ITEM_SITRUS_BERRY,
#line 11023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11022
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11024
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11029
    [TRAINER_TATE_AND_LIZA_5] =
    {
#line 11030
        .trainerName = _("TATE&LIZA"),
#line 11031
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11032
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 11034
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11035
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11036
        .doubleBattle = TRUE,
#line 11037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11039
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11040
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11042
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11047
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11048
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11050
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11055
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11056
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11058
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11063
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11063
            .heldItem = ITEM_CHESTO_BERRY,
#line 11065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11064
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11066
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11071
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11071
            .heldItem = ITEM_CHESTO_BERRY,
#line 11073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11072
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11074
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11079
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11079
            .heldItem = ITEM_SITRUS_BERRY,
#line 11081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11080
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11082
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11087
    [TRAINER_JUAN_2] =
    {
#line 11088
        .trainerName = _("JUAN"),
#line 11089
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11090
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11092
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11093
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11094
        .doubleBattle = TRUE,
#line 11095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11097
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11098
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11100
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11105
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11106
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11108
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11113
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11114
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11116
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11121
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11121
            .heldItem = ITEM_CHESTO_BERRY,
#line 11123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11122
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11124
                MOVE_REST,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11129
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11129
            .heldItem = ITEM_CHESTO_BERRY,
#line 11131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11130
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11132
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11137
    [TRAINER_JUAN_3] =
    {
#line 11138
        .trainerName = _("JUAN"),
#line 11139
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11140
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11142
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11143
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11144
        .doubleBattle = TRUE,
#line 11145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11147
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11148
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11150
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11155
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11156
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11158
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11163
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11164
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11166
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11171
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11171
            .heldItem = ITEM_CHESTO_BERRY,
#line 11173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11172
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11174
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11179
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11179
            .heldItem = ITEM_CHESTO_BERRY,
#line 11181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11180
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11182
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11187
    [TRAINER_JUAN_4] =
    {
#line 11188
        .trainerName = _("JUAN"),
#line 11189
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11190
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11193
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11194
        .doubleBattle = TRUE,
#line 11195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11197
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11198
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11200
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11205
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11206
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11208
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11213
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11214
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11216
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11221
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11222
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11224
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11229
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11229
            .heldItem = ITEM_CHESTO_BERRY,
#line 11231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11230
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11232
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11237
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11237
            .heldItem = ITEM_CHESTO_BERRY,
#line 11239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11238
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11240
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11245
    [TRAINER_JUAN_5] =
    {
#line 11246
        .trainerName = _("JUAN"),
#line 11247
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11248
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11250
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11251
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11252
        .doubleBattle = TRUE,
#line 11253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11255
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11256
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11258
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11263
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11264
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11266
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11271
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11272
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11274
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 11279
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11280
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11282
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 11287
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11287
            .heldItem = ITEM_CHESTO_BERRY,
#line 11289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11288
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11290
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11295
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11295
            .heldItem = ITEM_CHESTO_BERRY,
#line 11297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11296
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11298
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11303
    [TRAINER_ANGELO] =
    {
#line 11304
        .trainerName = _("ANGELO"),
#line 11305
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11306
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 11308
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11309
        .doubleBattle = FALSE,
#line 11310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11312
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11314
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11313
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11315
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11319
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11321
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11320
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11322
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11326
    [TRAINER_DARIUS] =
    {
#line 11327
        .trainerName = _("DARIUS"),
#line 11328
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11329
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11331
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11332
        .doubleBattle = FALSE,
#line 11333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11335
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11337
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11336
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11339
    [TRAINER_STEVEN] =
    {
#line 11340
        .trainerName = _("STEVEN"),
#line 11341
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11342
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 11344
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11345
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11346
        .doubleBattle = FALSE,
#line 11347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11349
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11350
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11352
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11357
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11358
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11360
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11365
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11366
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11368
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11373
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11374
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11376
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11381
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11382
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11384
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11389
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11389
            .heldItem = ITEM_SITRUS_BERRY,
#line 11391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11390
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11392
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11397
    [TRAINER_ANABEL] =
    {
#line 11398
        .trainerName = _("ANABEL"),
#line 11399
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11400
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 11401
F_TRAINER_FEMALE | 
#line 11402
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11403
        .doubleBattle = FALSE,
#line 11404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11406
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11407
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11410
    [TRAINER_TUCKER] =
    {
#line 11411
        .trainerName = _("TUCKER"),
#line 11412
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11413
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 11415
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11416
        .doubleBattle = FALSE,
#line 11417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11419
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11420
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11423
    [TRAINER_SPENSER] =
    {
#line 11424
        .trainerName = _("SPENSER"),
#line 11425
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11426
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 11428
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11429
        .doubleBattle = FALSE,
#line 11430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11432
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11433
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11436
    [TRAINER_GRETA] =
    {
#line 11437
        .trainerName = _("GRETA"),
#line 11438
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11439
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 11440
F_TRAINER_FEMALE | 
#line 11441
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11442
        .doubleBattle = FALSE,
#line 11443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11445
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11446
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11449
    [TRAINER_NOLAND] =
    {
#line 11450
        .trainerName = _("NOLAND"),
#line 11451
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11452
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 11454
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11455
        .doubleBattle = FALSE,
#line 11456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11458
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11459
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11462
    [TRAINER_LUCY] =
    {
#line 11463
        .trainerName = _("LUCY"),
#line 11464
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11465
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 11466
F_TRAINER_FEMALE | 
#line 11467
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11468
        .doubleBattle = FALSE,
#line 11469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11471
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11472
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11475
    [TRAINER_BRANDON] =
    {
#line 11476
        .trainerName = _("BRANDON"),
#line 11477
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11478
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 11480
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11481
        .doubleBattle = FALSE,
#line 11482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11484
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11485
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11488
    [TRAINER_MARIELA] =
    {
#line 11489
        .trainerName = _("MARIELA"),
#line 11490
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11491
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11492
F_TRAINER_FEMALE | 
#line 11493
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11494
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11496
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11497
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11500
    [TRAINER_ALVARO] =
    {
#line 11501
        .trainerName = _("ALVARO"),
#line 11502
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11503
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 11505
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11506
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11508
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11509
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11512
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11513
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11516
    [TRAINER_EVERETT] =
    {
#line 11517
        .trainerName = _("EVERETT"),
#line 11518
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11519
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 11521
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11522
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11524
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11525
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11528
    [TRAINER_RED] =
    {
#line 11529
        .trainerName = _("RED"),
#line 11530
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11531
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 11533
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11534
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11536
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11537
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11540
    [TRAINER_LEAF] =
    {
#line 11541
        .trainerName = _("LEAF"),
#line 11542
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11543
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 11544
F_TRAINER_FEMALE | 
#line 11545
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11546
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11548
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11549
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11552
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11553
        .trainerName = _("BRENDAN"),
#line 11554
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11555
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 11557
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11558
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11560
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11561
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11564
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 11565
        .trainerName = _("MAY"),
#line 11566
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11567
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 11568
F_TRAINER_FEMALE | 
#line 11569
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11570
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11572
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11573
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11576
    [TRAINER_WEEVIL] =
    {
#line 11577
        .trainerName = _("Weevil"),
#line 11578
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 11579
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 11581
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11582
        .doubleBattle = FALSE,
#line 11583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11585
            .species = SPECIES_SCYTHER,
#line 11585
            .gender = TRAINER_MON_MALE,
#line 11588
            .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
#line 11586
            .lvl = 3,
#line 11587
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11589
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
            },
            },
            {
#line 11592
            .species = SPECIES_HERACROSS,
#line 11592
            .gender = TRAINER_MON_MALE,
#line 11595
            .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
#line 11593
            .lvl = 3,
#line 11594
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11596
                MOVE_TACKLE,
                MOVE_LEER,
            },
            },
        },
    },
