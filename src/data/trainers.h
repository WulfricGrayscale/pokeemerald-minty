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
        .trainerPic = TRAINER_PIC_BRENDAN,
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
            },
            {
#line 6226
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6227
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6229
                MOVE_TACKLE,
            },
            },
        },
    },
#line 6231
    [TRAINER_ISAAC_1] =
    {
#line 6232
        .trainerName = _("ISAAC"),
#line 6233
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6234
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 6236
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6237
        .doubleBattle = FALSE,
#line 6238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6240
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6241
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6244
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6245
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6248
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6249
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6252
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6253
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6256
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6257
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6260
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6261
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6264
    [TRAINER_DAVIS] =
    {
#line 6265
        .trainerName = _("DAVIS"),
#line 6266
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6267
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 6269
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6270
        .doubleBattle = FALSE,
#line 6271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6273
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6274
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6277
    [TRAINER_MITCHELL] =
    {
#line 6278
        .trainerName = _("MITCHELL"),
#line 6279
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6280
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 6282
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6283
        .doubleBattle = FALSE,
#line 6284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6286
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6287
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6289
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6294
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6295
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6297
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 6302
    [TRAINER_LYDIA_1] =
    {
#line 6303
        .trainerName = _("LYDIA"),
#line 6304
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6305
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 6306
F_TRAINER_FEMALE | 
#line 6307
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6308
        .doubleBattle = FALSE,
#line 6309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6311
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6312
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6315
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6316
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6319
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6320
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6323
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6324
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6327
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6328
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6331
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6332
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6335
    [TRAINER_HALLE] =
    {
#line 6336
        .trainerName = _("HALLE"),
#line 6337
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6338
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6339
F_TRAINER_FEMALE | 
#line 6340
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6341
        .items = { ITEM_FULL_RESTORE },
#line 6342
        .doubleBattle = FALSE,
#line 6343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6345
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6346
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6349
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6350
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6353
    [TRAINER_GARRISON] =
    {
#line 6354
        .trainerName = _("GARRISON"),
#line 6355
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6356
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 6358
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6359
        .doubleBattle = FALSE,
#line 6360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6362
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6363
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6366
    [TRAINER_JACKSON_1] =
    {
#line 6367
        .trainerName = _("JACKSON"),
#line 6368
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6369
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 6371
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6372
        .items = { ITEM_FULL_RESTORE },
#line 6373
        .doubleBattle = FALSE,
#line 6374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6376
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6378
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6377
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6380
    [TRAINER_LORENZO] =
    {
#line 6381
        .trainerName = _("LORENZO"),
#line 6382
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6383
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 6385
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6386
        .items = { ITEM_FULL_RESTORE },
#line 6387
        .doubleBattle = FALSE,
#line 6388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6390
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6392
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6391
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6394
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6396
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6395
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6398
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6400
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6399
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6402
    [TRAINER_SEBASTIAN] =
    {
#line 6403
        .trainerName = _("SEBASTIAN"),
#line 6404
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6405
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 6407
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6408
        .items = { ITEM_FULL_RESTORE },
#line 6409
        .doubleBattle = FALSE,
#line 6410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6412
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6414
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6413
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6416
    [TRAINER_CATHERINE_1] =
    {
#line 6417
        .trainerName = _("CATHERINE"),
#line 6418
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6419
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 6420
F_TRAINER_FEMALE | 
#line 6421
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6422
        .items = { ITEM_FULL_RESTORE },
#line 6423
        .doubleBattle = FALSE,
#line 6424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6426
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6428
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6427
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6430
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6432
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6431
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6434
    [TRAINER_JENNA] =
    {
#line 6435
        .trainerName = _("JENNA"),
#line 6436
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6437
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 6438
F_TRAINER_FEMALE | 
#line 6439
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6440
        .items = { ITEM_FULL_RESTORE },
#line 6441
        .doubleBattle = FALSE,
#line 6442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6444
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6446
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6445
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6448
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6450
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6449
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6452
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6454
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6453
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6456
    [TRAINER_SOPHIA] =
    {
#line 6457
        .trainerName = _("SOPHIA"),
#line 6458
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6459
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 6460
F_TRAINER_FEMALE | 
#line 6461
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6462
        .items = { ITEM_FULL_RESTORE },
#line 6463
        .doubleBattle = FALSE,
#line 6464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6466
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6468
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6467
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6470
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6472
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6471
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6474
    [TRAINER_JULIO] =
    {
#line 6475
        .trainerName = _("JULIO"),
#line 6476
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6477
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6479
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6480
        .doubleBattle = FALSE,
#line 6481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6483
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6484
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6487
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6488
        .trainerName = _("GRUNT"),
#line 6489
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6490
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 6492
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6493
        .doubleBattle = FALSE,
#line 6494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6496
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6498
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6497
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6500
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6502
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6501
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6504
    [TRAINER_GRUNT_UNUSED] =
    {
#line 6505
        .trainerName = _("GRUNT"),
#line 6506
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6507
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 6508
F_TRAINER_FEMALE | 
#line 6509
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6510
        .doubleBattle = FALSE,
#line 6511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6513
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6514
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6517
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6518
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6521
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6522
        .trainerName = _("GRUNT"),
#line 6523
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6524
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 6525
F_TRAINER_FEMALE | 
#line 6526
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6527
        .doubleBattle = FALSE,
#line 6528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6530
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6531
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6534
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6535
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6538
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6539
        .trainerName = _("GRUNT"),
#line 6540
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6541
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6543
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6544
        .doubleBattle = FALSE,
#line 6545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6547
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6549
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6548
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6551
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6553
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6552
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6555
    [TRAINER_MARC] =
    {
#line 6556
        .trainerName = _("MARC"),
#line 6557
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6558
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 6560
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6561
        .doubleBattle = FALSE,
#line 6562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6564
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6566
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6565
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6568
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6570
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6569
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6572
    [TRAINER_BRENDEN] =
    {
#line 6573
        .trainerName = _("BRENDEN"),
#line 6574
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6575
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 6577
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6578
        .doubleBattle = FALSE,
#line 6579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6581
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6582
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6585
    [TRAINER_LILITH] =
    {
#line 6586
        .trainerName = _("LILITH"),
#line 6587
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6588
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6589
F_TRAINER_FEMALE | 
#line 6590
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6591
        .doubleBattle = FALSE,
#line 6592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6594
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6596
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6595
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6598
    [TRAINER_CRISTIAN] =
    {
#line 6599
        .trainerName = _("CRISTIAN"),
#line 6600
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6601
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 6603
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6604
        .doubleBattle = FALSE,
#line 6605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6607
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6609
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6608
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6611
    [TRAINER_SYLVIA] =
    {
#line 6612
        .trainerName = _("SYLVIA"),
#line 6613
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6614
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 6615
F_TRAINER_FEMALE | 
#line 6616
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6617
        .doubleBattle = FALSE,
#line 6618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6620
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6622
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6621
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6624
    [TRAINER_LEONARDO] =
    {
#line 6625
        .trainerName = _("LEONARDO"),
#line 6626
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6627
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 6629
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6630
        .doubleBattle = FALSE,
#line 6631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6633
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6634
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6637
    [TRAINER_ATHENA] =
    {
#line 6638
        .trainerName = _("ATHENA"),
#line 6639
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6640
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6641
F_TRAINER_FEMALE | 
#line 6642
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6643
        .items = { ITEM_HYPER_POTION },
#line 6644
        .doubleBattle = FALSE,
#line 6645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6647
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6649
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6648
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6650
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6654
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6656
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6655
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6657
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 6660
    [TRAINER_HARRISON] =
    {
#line 6661
        .trainerName = _("HARRISON"),
#line 6662
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6663
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 6665
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6666
        .doubleBattle = FALSE,
#line 6667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6669
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6670
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6673
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 6674
        .trainerName = _("GRUNT"),
#line 6675
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6676
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6678
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6679
        .doubleBattle = FALSE,
#line 6680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6682
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6683
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6686
    [TRAINER_CLARENCE] =
    {
#line 6687
        .trainerName = _("CLARENCE"),
#line 6688
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6689
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 6691
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6692
        .doubleBattle = FALSE,
#line 6693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6695
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6696
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6699
    [TRAINER_TERRY] =
    {
#line 6700
        .trainerName = _("TERRY"),
#line 6701
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6702
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 6703
F_TRAINER_FEMALE | 
#line 6704
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6705
        .doubleBattle = FALSE,
#line 6706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6708
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6709
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6712
    [TRAINER_NATE] =
    {
#line 6713
        .trainerName = _("NATE"),
#line 6714
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6715
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 6717
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6718
        .doubleBattle = FALSE,
#line 6719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6721
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6723
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6722
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6725
    [TRAINER_KATHLEEN] =
    {
#line 6726
        .trainerName = _("KATHLEEN"),
#line 6727
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6728
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 6729
F_TRAINER_FEMALE | 
#line 6730
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6731
        .doubleBattle = FALSE,
#line 6732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6734
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6736
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6735
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6738
    [TRAINER_CLIFFORD] =
    {
#line 6739
        .trainerName = _("CLIFFORD"),
#line 6740
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6741
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 6743
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6744
        .doubleBattle = FALSE,
#line 6745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6747
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6748
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6751
    [TRAINER_NICHOLAS] =
    {
#line 6752
        .trainerName = _("NICHOLAS"),
#line 6753
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6754
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 6756
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6757
        .doubleBattle = FALSE,
#line 6758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6760
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6761
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6764
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 6765
        .trainerName = _("GRUNT"),
#line 6766
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6767
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 6768
F_TRAINER_FEMALE | 
#line 6769
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6770
        .doubleBattle = FALSE,
#line 6771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6773
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6774
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6777
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6778
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6781
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 6782
        .trainerName = _("GRUNT"),
#line 6783
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6784
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6786
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6787
        .doubleBattle = FALSE,
#line 6788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6790
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6791
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6794
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 6795
        .trainerName = _("GRUNT"),
#line 6796
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6797
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6799
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6800
        .doubleBattle = FALSE,
#line 6801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6803
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6804
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6807
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 6808
        .trainerName = _("GRUNT"),
#line 6809
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6810
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6812
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6813
        .doubleBattle = FALSE,
#line 6814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6816
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6817
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6820
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 6821
        .trainerName = _("GRUNT"),
#line 6822
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6823
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 6825
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6826
        .doubleBattle = FALSE,
#line 6827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6829
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6830
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6833
    [TRAINER_MACEY] =
    {
#line 6834
        .trainerName = _("MACEY"),
#line 6835
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6836
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 6837
F_TRAINER_FEMALE | 
#line 6838
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6839
        .doubleBattle = FALSE,
#line 6840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6842
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6843
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6846
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 6847
        .trainerName = _("BRENDAN"),
#line 6848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6849
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6851
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6852
        .doubleBattle = FALSE,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6856
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6859
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6861
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6860
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6863
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 6864
        .trainerName = _("BRENDAN"),
#line 6865
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6866
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6868
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6869
        .doubleBattle = FALSE,
#line 6870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6872
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6874
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6873
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6876
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6878
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6877
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6880
    [TRAINER_PAXTON] =
    {
#line 6881
        .trainerName = _("PAXTON"),
#line 6882
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6883
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 6885
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6886
        .doubleBattle = FALSE,
#line 6887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6889
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6890
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6893
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6894
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6897
    [TRAINER_ISABELLA] =
    {
#line 6898
        .trainerName = _("ISABELLA"),
#line 6899
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6900
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6901
F_TRAINER_FEMALE | 
#line 6902
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6903
        .doubleBattle = FALSE,
#line 6904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6906
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6907
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6910
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 6911
        .trainerName = _("GRUNT"),
#line 6912
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6913
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 6914
F_TRAINER_FEMALE | 
#line 6915
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6916
        .doubleBattle = FALSE,
#line 6917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6919
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6920
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6923
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6924
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6927
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 6928
        .trainerName = _("TABITHA"),
#line 6929
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6930
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 6932
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6933
        .doubleBattle = FALSE,
#line 6934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6936
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6938
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6937
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6940
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6942
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6941
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6944
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6946
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6945
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6948
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6950
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6949
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6952
    [TRAINER_JONATHAN] =
    {
#line 6953
        .trainerName = _("JONATHAN"),
#line 6954
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6955
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 6957
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6958
        .items = { ITEM_HYPER_POTION },
#line 6959
        .doubleBattle = FALSE,
#line 6960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6962
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6963
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6966
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6967
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6970
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 6971
        .trainerName = _("BRENDAN"),
#line 6972
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6973
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6975
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6976
        .doubleBattle = FALSE,
#line 6977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6979
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6981
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6980
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6983
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6985
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6984
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6987
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 6988
        .trainerName = _("MAY"),
#line 6989
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6990
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 6991
F_TRAINER_FEMALE | 
#line 6992
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6993
        .doubleBattle = FALSE,
#line 6994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6996
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6998
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6997
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7000
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7002
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7001
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7004
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7005
        .trainerName = _("MAXIE"),
#line 7006
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7007
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 7009
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7010
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7011
        .doubleBattle = FALSE,
#line 7012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7014
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7016
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7015
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7018
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7020
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7019
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7022
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7024
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7023
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7026
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7027
        .trainerName = _("MAXIE"),
#line 7028
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7029
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 7031
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7032
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7033
        .doubleBattle = FALSE,
#line 7034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7036
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7038
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7037
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7040
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7042
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7041
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7044
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7046
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7045
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7048
    [TRAINER_TIANA] =
    {
#line 7049
        .trainerName = _("TIANA"),
#line 7050
        .trainerClass = TRAINER_CLASS_LASS,
#line 7051
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7052
F_TRAINER_FEMALE | 
#line 7053
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7054
        .doubleBattle = FALSE,
#line 7055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7057
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7058
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7061
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7062
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7065
    [TRAINER_HALEY_1] =
    {
#line 7066
        .trainerName = _("HALEY"),
#line 7067
        .trainerClass = TRAINER_CLASS_LASS,
#line 7068
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7069
F_TRAINER_FEMALE | 
#line 7070
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7071
        .doubleBattle = FALSE,
#line 7072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7074
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7075
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7078
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7079
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7082
    [TRAINER_JANICE] =
    {
#line 7083
        .trainerName = _("JANICE"),
#line 7084
        .trainerClass = TRAINER_CLASS_LASS,
#line 7085
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7086
F_TRAINER_FEMALE | 
#line 7087
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7088
        .doubleBattle = FALSE,
#line 7089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7091
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7092
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7095
    [TRAINER_VIVI] =
    {
#line 7096
        .trainerName = _("VIVI"),
#line 7097
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7098
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7099
F_TRAINER_FEMALE | 
#line 7100
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7101
        .doubleBattle = FALSE,
#line 7102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7104
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7106
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7105
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7108
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7110
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7109
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7112
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7114
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7113
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7116
    [TRAINER_SALLY] =
    {
#line 7117
        .trainerName = _("SALLY"),
#line 7118
        .trainerClass = TRAINER_CLASS_LASS,
#line 7119
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7120
F_TRAINER_FEMALE | 
#line 7121
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7122
        .doubleBattle = FALSE,
#line 7123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7125
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7126
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7129
    [TRAINER_ROBIN] =
    {
#line 7130
        .trainerName = _("ROBIN"),
#line 7131
        .trainerClass = TRAINER_CLASS_LASS,
#line 7132
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7133
F_TRAINER_FEMALE | 
#line 7134
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7135
        .doubleBattle = FALSE,
#line 7136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7138
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7139
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7142
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7143
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7146
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7147
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7150
    [TRAINER_ANDREA] =
    {
#line 7151
        .trainerName = _("ANDREA"),
#line 7152
        .trainerClass = TRAINER_CLASS_LASS,
#line 7153
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7154
F_TRAINER_FEMALE | 
#line 7155
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7156
        .doubleBattle = FALSE,
#line 7157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7159
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7161
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7160
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7163
    [TRAINER_CRISSY] =
    {
#line 7164
        .trainerName = _("CRISSY"),
#line 7165
        .trainerClass = TRAINER_CLASS_LASS,
#line 7166
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 7167
F_TRAINER_FEMALE | 
#line 7168
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7169
        .doubleBattle = FALSE,
#line 7170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7172
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7174
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7173
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7176
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7178
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7177
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7180
    [TRAINER_RICK] =
    {
#line 7181
        .trainerName = _("RICK"),
#line 7182
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7183
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7185
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7186
        .doubleBattle = FALSE,
#line 7187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7189
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7190
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7193
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7194
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7197
    [TRAINER_LYLE] =
    {
#line 7198
        .trainerName = _("LYLE"),
#line 7199
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7200
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7202
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7203
        .doubleBattle = FALSE,
#line 7204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7206
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7207
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7210
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7211
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7214
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7215
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7218
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7219
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7222
    [TRAINER_JOSE] =
    {
#line 7223
        .trainerName = _("JOSE"),
#line 7224
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7225
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7227
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7228
        .doubleBattle = FALSE,
#line 7229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7231
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7233
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7232
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7235
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7236
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7239
    [TRAINER_DOUG] =
    {
#line 7240
        .trainerName = _("DOUG"),
#line 7241
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7242
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7244
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7245
        .doubleBattle = FALSE,
#line 7246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7248
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7249
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7252
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7253
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7256
    [TRAINER_GREG] =
    {
#line 7257
        .trainerName = _("GREG"),
#line 7258
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7259
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7261
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7262
        .doubleBattle = FALSE,
#line 7263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7265
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7266
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7269
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7270
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7273
    [TRAINER_KENT] =
    {
#line 7274
        .trainerName = _("KENT"),
#line 7275
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7276
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7278
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7279
        .doubleBattle = FALSE,
#line 7280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7282
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7283
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7286
    [TRAINER_JAMES_1] =
    {
#line 7287
        .trainerName = _("JAMES"),
#line 7288
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7289
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 7291
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7292
        .doubleBattle = FALSE,
#line 7293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7295
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7296
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7299
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7300
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7303
    [TRAINER_BRICE] =
    {
#line 7304
        .trainerName = _("BRICE"),
#line 7305
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7306
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7308
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7309
        .doubleBattle = FALSE,
#line 7310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7312
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7313
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7316
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7317
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7320
    [TRAINER_TRENT_1] =
    {
#line 7321
        .trainerName = _("TRENT"),
#line 7322
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7323
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7325
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7326
        .doubleBattle = FALSE,
#line 7327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7329
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7330
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7333
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7334
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7337
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7338
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7341
    [TRAINER_LENNY] =
    {
#line 7342
        .trainerName = _("LENNY"),
#line 7343
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7344
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7346
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7347
        .doubleBattle = FALSE,
#line 7348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7350
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7351
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7354
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7355
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7358
    [TRAINER_LUCAS_1] =
    {
#line 7359
        .trainerName = _("LUCAS"),
#line 7360
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7361
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7363
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7364
        .doubleBattle = FALSE,
#line 7365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7367
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7368
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7371
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7372
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7375
    [TRAINER_ALAN] =
    {
#line 7376
        .trainerName = _("ALAN"),
#line 7377
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7378
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7380
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7381
        .doubleBattle = FALSE,
#line 7382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7384
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7385
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7388
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7389
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7392
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7393
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7396
    [TRAINER_CLARK] =
    {
#line 7397
        .trainerName = _("CLARK"),
#line 7398
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7399
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7401
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7402
        .doubleBattle = FALSE,
#line 7403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7405
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7406
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7409
    [TRAINER_ERIC] =
    {
#line 7410
        .trainerName = _("ERIC"),
#line 7411
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7412
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7414
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7415
        .doubleBattle = FALSE,
#line 7416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7418
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7419
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7422
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7423
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7426
    [TRAINER_MIKE_2] =
    {
#line 7427
        .trainerName = _("MIKE"),
#line 7428
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7429
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 7431
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7432
        .doubleBattle = FALSE,
#line 7433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7435
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7436
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7439
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7440
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7443
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7444
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7447
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 7448
        .trainerName = _("DEZ & LUKE"),
#line 7449
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7450
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 7452
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7453
        .doubleBattle = TRUE,
#line 7454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7456
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7457
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7460
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7461
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7464
    [TRAINER_LEA_AND_JED] =
    {
#line 7465
        .trainerName = _("LEA & JED"),
#line 7466
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7467
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 7469
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7470
        .doubleBattle = TRUE,
#line 7471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7473
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7474
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7477
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7478
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7481
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 7482
        .trainerName = _("KIRA & DAN"),
#line 7483
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7484
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 7486
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7487
        .doubleBattle = TRUE,
#line 7488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7490
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7491
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7494
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7495
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7498
    [TRAINER_JOHANNA] =
    {
#line 7499
        .trainerName = _("JOHANNA"),
#line 7500
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7501
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 7502
F_TRAINER_FEMALE | 
#line 7503
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7504
        .doubleBattle = FALSE,
#line 7505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7507
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7508
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7511
    [TRAINER_GERALD] =
    {
#line 7512
        .trainerName = _("GERALD"),
#line 7513
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7514
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 7516
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7517
        .items = { ITEM_HYPER_POTION },
#line 7518
        .doubleBattle = FALSE,
#line 7519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7521
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7523
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7522
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7524
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 7529
    [TRAINER_VIVIAN] =
    {
#line 7530
        .trainerName = _("VIVIAN"),
#line 7531
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7532
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7533
F_TRAINER_FEMALE | 
#line 7534
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7535
        .doubleBattle = FALSE,
#line 7536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7538
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7540
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7539
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7541
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7546
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7548
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7547
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7549
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 7554
    [TRAINER_DANIELLE] =
    {
#line 7555
        .trainerName = _("DANIELLE"),
#line 7556
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7557
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7558
F_TRAINER_FEMALE | 
#line 7559
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7560
        .doubleBattle = FALSE,
#line 7561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7563
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7565
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7564
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7566
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7571
    [TRAINER_HIDEO] =
    {
#line 7572
        .trainerName = _("HIDEO"),
#line 7573
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7574
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7576
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7577
        .doubleBattle = FALSE,
#line 7578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7580
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7581
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7583
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 7588
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7589
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7591
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 7596
    [TRAINER_KEIGO] =
    {
#line 7597
        .trainerName = _("KEIGO"),
#line 7598
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7599
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7601
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7602
        .doubleBattle = FALSE,
#line 7603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7605
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7606
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7608
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 7613
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7614
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7616
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7621
    [TRAINER_RILEY] =
    {
#line 7622
        .trainerName = _("RILEY"),
#line 7623
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7624
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 7626
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7627
        .doubleBattle = FALSE,
#line 7628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7630
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7631
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7633
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 7638
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7639
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7641
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 7646
    [TRAINER_FLINT] =
    {
#line 7647
        .trainerName = _("FLINT"),
#line 7648
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7649
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 7651
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7652
        .doubleBattle = FALSE,
#line 7653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7655
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7657
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7656
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7659
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7661
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7660
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7663
    [TRAINER_ASHLEY] =
    {
#line 7664
        .trainerName = _("ASHLEY"),
#line 7665
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7666
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7667
F_TRAINER_FEMALE | 
#line 7668
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7669
        .doubleBattle = FALSE,
#line 7670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7672
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7674
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7673
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7676
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7678
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7677
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7680
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7682
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7681
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7684
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 7685
        .trainerName = _("WALLY"),
#line 7686
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7687
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7689
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7690
        .doubleBattle = FALSE,
#line 7691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7693
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7695
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7694
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7697
    [TRAINER_WALLY_VR_2] =
    {
#line 7698
        .trainerName = _("WALLY"),
#line 7699
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7700
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7702
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7703
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7704
        .doubleBattle = FALSE,
#line 7705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7707
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7708
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7710
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7715
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7717
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7716
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7718
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7723
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7725
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7724
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7726
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7731
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7733
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7732
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7734
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7739
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7741
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7740
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7742
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7747
    [TRAINER_WALLY_VR_3] =
    {
#line 7748
        .trainerName = _("WALLY"),
#line 7749
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7750
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7752
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7753
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7754
        .doubleBattle = FALSE,
#line 7755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7757
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7759
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7758
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7760
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7765
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7767
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7766
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7768
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7773
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7775
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7774
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7776
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7781
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7783
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7782
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7784
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7789
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7791
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7790
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7792
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7797
    [TRAINER_WALLY_VR_4] =
    {
#line 7798
        .trainerName = _("WALLY"),
#line 7799
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7800
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7802
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7803
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7804
        .doubleBattle = FALSE,
#line 7805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7807
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7808
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7810
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7815
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7816
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7818
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7823
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7824
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7826
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7831
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7832
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7834
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7839
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7841
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7840
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7842
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7847
    [TRAINER_WALLY_VR_5] =
    {
#line 7848
        .trainerName = _("WALLY"),
#line 7849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7850
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 7852
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7853
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7854
        .doubleBattle = FALSE,
#line 7855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7857
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7859
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7858
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7860
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7865
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7867
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7866
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7868
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7873
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7875
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7874
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7876
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7881
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7883
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7882
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7884
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7889
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7891
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7890
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7892
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7897
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 7898
        .trainerName = _("BRENDAN"),
#line 7899
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7900
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7902
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7903
        .doubleBattle = FALSE,
#line 7904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7907
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7910
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7911
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7914
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7916
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7915
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7918
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7920
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7919
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7922
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 7923
        .trainerName = _("BRENDAN"),
#line 7924
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7925
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7927
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7928
        .doubleBattle = FALSE,
#line 7929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7931
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7933
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7932
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7935
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7937
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7936
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7939
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7941
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7940
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7943
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7945
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7944
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7947
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 7948
        .trainerName = _("BRENDAN"),
#line 7949
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7950
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 7952
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7953
        .doubleBattle = FALSE,
#line 7954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7956
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7958
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7957
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7960
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7961
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7964
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7966
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7965
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7968
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7969
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7972
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 7973
        .trainerName = _("MAY"),
#line 7974
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7975
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 7976
F_TRAINER_FEMALE | 
#line 7977
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7978
        .doubleBattle = FALSE,
#line 7979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7981
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7983
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7982
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7985
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7987
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7986
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7989
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7991
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7990
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7993
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7995
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7994
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7997
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 7998
        .trainerName = _("MAY"),
#line 7999
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8000
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8001
F_TRAINER_FEMALE | 
#line 8002
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8003
        .doubleBattle = FALSE,
#line 8004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8006
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8008
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8007
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8010
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8012
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8011
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8014
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8016
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8015
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8018
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8019
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8022
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8023
        .trainerName = _("MAY"),
#line 8024
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8025
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8026
F_TRAINER_FEMALE | 
#line 8027
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8028
        .doubleBattle = FALSE,
#line 8029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8031
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8033
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8032
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8035
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8037
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8036
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8039
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8041
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8040
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8043
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8045
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8044
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8047
    [TRAINER_JONAH] =
    {
#line 8048
        .trainerName = _("JONAH"),
#line 8049
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8050
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8052
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8053
        .doubleBattle = FALSE,
#line 8054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8056
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8057
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8060
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8061
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8064
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8065
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8068
    [TRAINER_HENRY] =
    {
#line 8069
        .trainerName = _("HENRY"),
#line 8070
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8071
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8073
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8074
        .doubleBattle = FALSE,
#line 8075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8077
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8078
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8081
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8082
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8085
    [TRAINER_ROGER] =
    {
#line 8086
        .trainerName = _("ROGER"),
#line 8087
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8088
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8090
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8091
        .doubleBattle = FALSE,
#line 8092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8094
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8095
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8098
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8099
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8102
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8103
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8106
    [TRAINER_ALEXA] =
    {
#line 8107
        .trainerName = _("ALEXA"),
#line 8108
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8109
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8110
F_TRAINER_FEMALE | 
#line 8111
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8112
        .items = { ITEM_FULL_RESTORE },
#line 8113
        .doubleBattle = FALSE,
#line 8114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8116
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8118
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8117
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8120
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8122
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8121
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8124
    [TRAINER_RUBEN] =
    {
#line 8125
        .trainerName = _("RUBEN"),
#line 8126
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8127
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8129
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8130
        .items = { ITEM_HYPER_POTION },
#line 8131
        .doubleBattle = FALSE,
#line 8132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8134
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8136
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8135
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8138
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8140
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8139
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8142
    [TRAINER_KOJI_1] =
    {
#line 8143
        .trainerName = _("KOJI"),
#line 8144
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8145
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 8147
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8148
        .doubleBattle = FALSE,
#line 8149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8151
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8152
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8155
    [TRAINER_WAYNE] =
    {
#line 8156
        .trainerName = _("WAYNE"),
#line 8157
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8158
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8160
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8161
        .doubleBattle = FALSE,
#line 8162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8164
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8165
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8168
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8169
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8172
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8173
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8176
    [TRAINER_AIDAN] =
    {
#line 8177
        .trainerName = _("AIDAN"),
#line 8178
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8179
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 8181
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8182
        .doubleBattle = FALSE,
#line 8183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8185
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8186
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8189
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8190
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8193
    [TRAINER_REED] =
    {
#line 8194
        .trainerName = _("REED"),
#line 8195
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8196
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 8198
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8199
        .doubleBattle = FALSE,
#line 8200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8202
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8203
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8206
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8207
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8210
    [TRAINER_TISHA] =
    {
#line 8211
        .trainerName = _("TISHA"),
#line 8212
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8213
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 8214
F_TRAINER_FEMALE | 
#line 8215
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8216
        .doubleBattle = FALSE,
#line 8217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8219
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8220
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8223
    [TRAINER_TORI_AND_TIA] =
    {
#line 8224
        .trainerName = _("TORI & TIA"),
#line 8225
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8226
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 8228
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8229
        .doubleBattle = TRUE,
#line 8230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8232
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8233
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8236
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8237
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8240
    [TRAINER_KIM_AND_IRIS] =
    {
#line 8241
        .trainerName = _("KIM & IRIS"),
#line 8242
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8243
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 8245
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8246
        .doubleBattle = TRUE,
#line 8247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8249
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8250
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8252
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 8257
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8258
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8260
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 8265
    [TRAINER_TYRA_AND_IVY] =
    {
#line 8266
        .trainerName = _("TYRA & IVY"),
#line 8267
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8268
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 8270
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8271
        .doubleBattle = TRUE,
#line 8272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8274
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8275
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8277
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 8282
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8283
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8285
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 8290
    [TRAINER_MEL_AND_PAUL] =
    {
#line 8291
        .trainerName = _("MEL & PAUL"),
#line 8292
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8293
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 8295
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8296
        .doubleBattle = TRUE,
#line 8297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8299
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8300
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8302
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 8307
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8308
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8310
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 8315
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 8316
        .trainerName = _("JOHN & JAY"),
#line 8317
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8318
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 8320
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8321
        .doubleBattle = TRUE,
#line 8322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8324
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8326
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8325
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8327
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 8332
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8334
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8333
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8335
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 8340
    [TRAINER_RELI_AND_IAN] =
    {
#line 8341
        .trainerName = _("RELI & IAN"),
#line 8342
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8343
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 8345
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8346
        .doubleBattle = TRUE,
#line 8347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8349
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8350
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8353
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8354
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8357
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 8358
        .trainerName = _("LILA & ROY"),
#line 8359
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8360
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 8362
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8363
        .doubleBattle = TRUE,
#line 8364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8366
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8367
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8370
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8371
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8374
    [TRAINER_LISA_AND_RAY] =
    {
#line 8375
        .trainerName = _("LISA & RAY"),
#line 8376
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8377
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 8379
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8380
        .doubleBattle = TRUE,
#line 8381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8383
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8384
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8387
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8388
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8391
    [TRAINER_CHRIS] =
    {
#line 8392
        .trainerName = _("CHRIS"),
#line 8393
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8394
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8396
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8397
        .doubleBattle = FALSE,
#line 8398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8400
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8401
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8404
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8405
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8408
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8409
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8412
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8413
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8416
    [TRAINER_DAWSON] =
    {
#line 8417
        .trainerName = _("DAWSON"),
#line 8418
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8419
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 8421
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8422
        .doubleBattle = FALSE,
#line 8423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8425
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8425
            .heldItem = ITEM_NUGGET,
#line 8427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8426
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8429
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8430
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8433
    [TRAINER_SARAH] =
    {
#line 8434
        .trainerName = _("SARAH"),
#line 8435
        .trainerClass = TRAINER_CLASS_LADY,
#line 8436
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 8437
F_TRAINER_FEMALE | 
#line 8438
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8439
        .items = { ITEM_FULL_RESTORE },
#line 8440
        .doubleBattle = FALSE,
#line 8441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8443
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8444
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8447
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8447
            .heldItem = ITEM_NUGGET,
#line 8449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8448
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8451
    [TRAINER_DARIAN] =
    {
#line 8452
        .trainerName = _("DARIAN"),
#line 8453
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8454
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8456
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8457
        .doubleBattle = FALSE,
#line 8458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8460
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8461
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8464
    [TRAINER_HAILEY] =
    {
#line 8465
        .trainerName = _("HAILEY"),
#line 8466
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8467
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 8468
F_TRAINER_FEMALE | 
#line 8469
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8470
        .doubleBattle = FALSE,
#line 8471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8473
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8474
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8477
    [TRAINER_CHANDLER] =
    {
#line 8478
        .trainerName = _("CHANDLER"),
#line 8479
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8480
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 8482
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8483
        .doubleBattle = FALSE,
#line 8484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8486
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8487
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8490
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8491
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8494
    [TRAINER_KALEB] =
    {
#line 8495
        .trainerName = _("KALEB"),
#line 8496
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8497
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 8499
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8500
        .doubleBattle = FALSE,
#line 8501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8503
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8503
            .heldItem = ITEM_ORAN_BERRY,
#line 8505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8504
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8507
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8507
            .heldItem = ITEM_ORAN_BERRY,
#line 8509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8508
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8511
    [TRAINER_JOSEPH] =
    {
#line 8512
        .trainerName = _("JOSEPH"),
#line 8513
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8514
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 8516
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8517
        .doubleBattle = FALSE,
#line 8518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8520
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8521
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8524
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8525
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8528
    [TRAINER_ALYSSA] =
    {
#line 8529
        .trainerName = _("ALYSSA"),
#line 8530
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8531
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 8532
F_TRAINER_FEMALE | 
#line 8533
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8534
        .doubleBattle = FALSE,
#line 8535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8537
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8538
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8541
    [TRAINER_MARCOS] =
    {
#line 8542
        .trainerName = _("MARCOS"),
#line 8543
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8544
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 8546
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8547
        .doubleBattle = FALSE,
#line 8548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8550
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8552
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8551
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8554
    [TRAINER_RHETT] =
    {
#line 8555
        .trainerName = _("RHETT"),
#line 8556
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8557
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 8559
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8560
        .doubleBattle = FALSE,
#line 8561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8563
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8565
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8564
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8567
    [TRAINER_TYRON] =
    {
#line 8568
        .trainerName = _("TYRON"),
#line 8569
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8570
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 8572
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8573
        .doubleBattle = FALSE,
#line 8574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8576
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8577
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8580
    [TRAINER_CELINA] =
    {
#line 8581
        .trainerName = _("CELINA"),
#line 8582
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8583
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 8584
F_TRAINER_FEMALE | 
#line 8585
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8586
        .doubleBattle = FALSE,
#line 8587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8589
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8590
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8593
    [TRAINER_BIANCA] =
    {
#line 8594
        .trainerName = _("BIANCA"),
#line 8595
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8596
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8597
F_TRAINER_FEMALE | 
#line 8598
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8599
        .doubleBattle = FALSE,
#line 8600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8602
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8603
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8606
    [TRAINER_HAYDEN] =
    {
#line 8607
        .trainerName = _("HAYDEN"),
#line 8608
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 8609
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 8611
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8612
        .doubleBattle = FALSE,
#line 8613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8615
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8616
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8619
    [TRAINER_SOPHIE] =
    {
#line 8620
        .trainerName = _("SOPHIE"),
#line 8621
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8622
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8623
F_TRAINER_FEMALE | 
#line 8624
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8625
        .doubleBattle = FALSE,
#line 8626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8628
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8629
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8632
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8633
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8636
    [TRAINER_COBY] =
    {
#line 8637
        .trainerName = _("COBY"),
#line 8638
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8639
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 8641
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8642
        .doubleBattle = FALSE,
#line 8643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8645
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8646
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8649
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8650
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8653
    [TRAINER_LAWRENCE] =
    {
#line 8654
        .trainerName = _("LAWRENCE"),
#line 8655
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8656
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 8658
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8659
        .doubleBattle = FALSE,
#line 8660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8662
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8663
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8666
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8667
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8670
    [TRAINER_WYATT] =
    {
#line 8671
        .trainerName = _("WYATT"),
#line 8672
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8673
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 8675
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8676
        .doubleBattle = FALSE,
#line 8677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8679
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8680
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8683
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8684
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8687
    [TRAINER_ANGELINA] =
    {
#line 8688
        .trainerName = _("ANGELINA"),
#line 8689
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8690
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8691
F_TRAINER_FEMALE | 
#line 8692
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8693
        .doubleBattle = FALSE,
#line 8694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8696
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8697
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8700
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8701
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8704
    [TRAINER_KAI] =
    {
#line 8705
        .trainerName = _("KAI"),
#line 8706
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8707
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 8709
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8710
        .doubleBattle = FALSE,
#line 8711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8713
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8714
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8717
    [TRAINER_CHARLOTTE] =
    {
#line 8718
        .trainerName = _("CHARLOTTE"),
#line 8719
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8720
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 8721
F_TRAINER_FEMALE | 
#line 8722
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8723
        .doubleBattle = FALSE,
#line 8724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8726
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8727
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8730
    [TRAINER_DEANDRE] =
    {
#line 8731
        .trainerName = _("DEANDRE"),
#line 8732
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 8733
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 8735
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8736
        .doubleBattle = FALSE,
#line 8737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8739
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8740
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8743
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8744
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8747
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8748
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8751
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 8752
        .trainerName = _("GRUNT"),
#line 8753
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8754
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8756
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8757
        .doubleBattle = FALSE,
#line 8758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8760
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8761
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8764
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 8765
        .trainerName = _("GRUNT"),
#line 8766
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8767
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8769
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8770
        .doubleBattle = FALSE,
#line 8771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8773
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8774
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8777
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 8778
        .trainerName = _("GRUNT"),
#line 8779
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8780
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8782
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8783
        .doubleBattle = FALSE,
#line 8784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8786
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8787
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8790
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 8791
        .trainerName = _("GRUNT"),
#line 8792
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8793
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8795
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8796
        .doubleBattle = FALSE,
#line 8797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8799
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8800
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8803
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8804
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8807
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 8808
        .trainerName = _("GRUNT"),
#line 8809
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8810
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8812
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8813
        .doubleBattle = FALSE,
#line 8814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8816
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8817
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8820
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8821
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8824
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 8825
        .trainerName = _("GRUNT"),
#line 8826
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8827
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8829
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8830
        .doubleBattle = FALSE,
#line 8831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8833
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8834
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8837
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 8838
        .trainerName = _("GRUNT"),
#line 8839
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8840
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8842
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8843
        .doubleBattle = FALSE,
#line 8844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8846
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8847
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8850
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 8851
        .trainerName = _("GRUNT"),
#line 8852
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8853
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8855
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8856
        .doubleBattle = FALSE,
#line 8857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8859
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8860
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8863
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 8864
        .trainerName = _("GRUNT"),
#line 8865
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8866
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8868
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8869
        .doubleBattle = FALSE,
#line 8870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8872
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8873
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8876
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 8877
        .trainerName = _("GRUNT"),
#line 8878
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8879
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8881
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8882
        .doubleBattle = FALSE,
#line 8883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8885
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8886
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8889
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 8890
        .trainerName = _("GRUNT"),
#line 8891
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8892
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8894
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8895
        .doubleBattle = FALSE,
#line 8896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8898
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8899
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8902
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 8903
        .trainerName = _("GRUNT"),
#line 8904
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8905
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8907
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8908
        .doubleBattle = FALSE,
#line 8909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8911
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8912
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 8916
        .trainerName = _("GRUNT"),
#line 8917
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8918
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 8920
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8921
        .doubleBattle = FALSE,
#line 8922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8924
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8925
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8928
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 8929
        .trainerName = _("GRUNT"),
#line 8930
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8931
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8932
F_TRAINER_FEMALE | 
#line 8933
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8934
        .doubleBattle = FALSE,
#line 8935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8937
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8938
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8941
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 8942
        .trainerName = _("GRUNT"),
#line 8943
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8944
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8945
F_TRAINER_FEMALE | 
#line 8946
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8947
        .doubleBattle = FALSE,
#line 8948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8950
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8951
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8954
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 8955
        .trainerName = _("GRUNT"),
#line 8956
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8957
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 8958
F_TRAINER_FEMALE | 
#line 8959
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8960
        .doubleBattle = FALSE,
#line 8961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8963
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8964
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8967
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 8968
        .trainerName = _("TABITHA"),
#line 8969
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8970
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 8972
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8973
        .doubleBattle = FALSE,
#line 8974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8976
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8978
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8977
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8980
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8981
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8984
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8985
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8988
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8990
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8989
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8992
    [TRAINER_DARCY] =
    {
#line 8993
        .trainerName = _("DARCY"),
#line 8994
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8995
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8996
F_TRAINER_FEMALE | 
#line 8997
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8998
        .items = { ITEM_HYPER_POTION },
#line 8999
        .doubleBattle = FALSE,
#line 9000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9002
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9003
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9006
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9007
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9010
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9011
        .trainerName = _("MAXIE"),
#line 9012
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9013
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9015
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9016
        .doubleBattle = FALSE,
#line 9017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9019
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9020
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9023
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9025
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9024
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9027
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9029
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9028
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9031
    [TRAINER_PETE] =
    {
#line 9032
        .trainerName = _("PETE"),
#line 9033
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9034
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9036
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9037
        .doubleBattle = FALSE,
#line 9038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9040
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9041
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9044
    [TRAINER_ISABELLE] =
    {
#line 9045
        .trainerName = _("ISABELLE"),
#line 9046
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9047
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 9048
F_TRAINER_FEMALE | 
#line 9049
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9050
        .doubleBattle = FALSE,
#line 9051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9053
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9054
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9057
    [TRAINER_ANDRES_1] =
    {
#line 9058
        .trainerName = _("ANDRES"),
#line 9059
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9060
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 9062
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9063
        .doubleBattle = FALSE,
#line 9064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9066
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9068
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9067
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9070
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9072
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9071
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9074
    [TRAINER_JOSUE] =
    {
#line 9075
        .trainerName = _("JOSUE"),
#line 9076
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9077
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 9079
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9080
        .doubleBattle = FALSE,
#line 9081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9083
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9085
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9084
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9087
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9089
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9088
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9091
    [TRAINER_CAMRON] =
    {
#line 9092
        .trainerName = _("CAMRON"),
#line 9093
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9094
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 9096
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9097
        .doubleBattle = FALSE,
#line 9098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9100
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9101
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9104
    [TRAINER_CORY_1] =
    {
#line 9105
        .trainerName = _("CORY"),
#line 9106
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9107
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 9109
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9110
        .doubleBattle = FALSE,
#line 9111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9113
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9114
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9117
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9118
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9121
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9122
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9125
    [TRAINER_CAROLINA] =
    {
#line 9126
        .trainerName = _("CAROLINA"),
#line 9127
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9128
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9129
F_TRAINER_FEMALE | 
#line 9130
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9131
        .items = { ITEM_HYPER_POTION },
#line 9132
        .doubleBattle = FALSE,
#line 9133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9135
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9137
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9136
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9139
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9141
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9140
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9143
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9145
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9144
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9147
    [TRAINER_ELIJAH] =
    {
#line 9148
        .trainerName = _("ELIJAH"),
#line 9149
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9150
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 9152
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9153
        .doubleBattle = FALSE,
#line 9154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9156
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9157
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9160
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9161
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9164
    [TRAINER_CELIA] =
    {
#line 9165
        .trainerName = _("CELIA"),
#line 9166
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9167
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 9168
F_TRAINER_FEMALE | 
#line 9169
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9170
        .doubleBattle = FALSE,
#line 9171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9173
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9174
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9177
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9178
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9181
    [TRAINER_BRYAN] =
    {
#line 9182
        .trainerName = _("BRYAN"),
#line 9183
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9184
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 9186
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9187
        .doubleBattle = FALSE,
#line 9188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9190
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9191
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9194
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9195
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9198
    [TRAINER_BRANDEN] =
    {
#line 9199
        .trainerName = _("BRANDEN"),
#line 9200
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9201
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 9203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9204
        .doubleBattle = FALSE,
#line 9205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9207
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9208
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9211
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9212
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9215
    [TRAINER_BRYANT] =
    {
#line 9216
        .trainerName = _("BRYANT"),
#line 9217
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9218
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 9220
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9221
        .doubleBattle = FALSE,
#line 9222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9224
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9225
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9228
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9229
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9232
    [TRAINER_SHAYLA] =
    {
#line 9233
        .trainerName = _("SHAYLA"),
#line 9234
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9235
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 9236
F_TRAINER_FEMALE | 
#line 9237
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9238
        .doubleBattle = FALSE,
#line 9239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9241
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9242
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9245
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9246
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9249
    [TRAINER_KYRA] =
    {
#line 9250
        .trainerName = _("KYRA"),
#line 9251
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9252
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9253
F_TRAINER_FEMALE | 
#line 9254
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9255
        .doubleBattle = FALSE,
#line 9256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9258
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9259
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9262
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9263
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9266
    [TRAINER_JAIDEN] =
    {
#line 9267
        .trainerName = _("JAIDEN"),
#line 9268
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9269
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 9271
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9272
        .doubleBattle = FALSE,
#line 9273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9275
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9276
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9279
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9280
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9283
    [TRAINER_ALIX] =
    {
#line 9284
        .trainerName = _("ALIX"),
#line 9285
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9286
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9287
F_TRAINER_FEMALE | 
#line 9288
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9289
        .doubleBattle = FALSE,
#line 9290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9292
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9293
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9296
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9297
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9300
    [TRAINER_HELENE] =
    {
#line 9301
        .trainerName = _("HELENE"),
#line 9302
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9303
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9304
F_TRAINER_FEMALE | 
#line 9305
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9306
        .doubleBattle = FALSE,
#line 9307
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9309
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9310
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9313
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9314
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9317
    [TRAINER_MARLENE] =
    {
#line 9318
        .trainerName = _("MARLENE"),
#line 9319
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9320
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9321
F_TRAINER_FEMALE | 
#line 9322
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9323
        .doubleBattle = FALSE,
#line 9324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9326
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9327
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9330
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9331
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9334
    [TRAINER_DEVAN] =
    {
#line 9335
        .trainerName = _("DEVAN"),
#line 9336
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9337
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9339
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9340
        .doubleBattle = FALSE,
#line 9341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9343
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9344
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9347
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9348
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9351
    [TRAINER_JOHNSON] =
    {
#line 9352
        .trainerName = _("JOHNSON"),
#line 9353
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9354
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 9356
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9357
        .doubleBattle = FALSE,
#line 9358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9360
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9361
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9364
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9365
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9368
    [TRAINER_MELINA] =
    {
#line 9369
        .trainerName = _("MELINA"),
#line 9370
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9371
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9372
F_TRAINER_FEMALE | 
#line 9373
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9374
        .doubleBattle = FALSE,
#line 9375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9377
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9378
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9381
    [TRAINER_BRANDI] =
    {
#line 9382
        .trainerName = _("BRANDI"),
#line 9383
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9384
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9385
F_TRAINER_FEMALE | 
#line 9386
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9387
        .doubleBattle = FALSE,
#line 9388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9390
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9391
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9394
    [TRAINER_AISHA] =
    {
#line 9395
        .trainerName = _("AISHA"),
#line 9396
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9397
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9398
F_TRAINER_FEMALE | 
#line 9399
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9400
        .doubleBattle = FALSE,
#line 9401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9403
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9404
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9407
    [TRAINER_MAKAYLA] =
    {
#line 9408
        .trainerName = _("MAKAYLA"),
#line 9409
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9410
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 9411
F_TRAINER_FEMALE | 
#line 9412
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9413
        .items = { ITEM_HYPER_POTION },
#line 9414
        .doubleBattle = FALSE,
#line 9415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9417
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9418
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9421
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9422
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9425
    [TRAINER_FABIAN] =
    {
#line 9426
        .trainerName = _("FABIAN"),
#line 9427
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9428
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 9430
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9431
        .doubleBattle = FALSE,
#line 9432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9434
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9435
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9438
    [TRAINER_DAYTON] =
    {
#line 9439
        .trainerName = _("DAYTON"),
#line 9440
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9441
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 9443
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9444
        .doubleBattle = FALSE,
#line 9445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9447
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9448
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9451
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9452
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9455
    [TRAINER_RACHEL] =
    {
#line 9456
        .trainerName = _("RACHEL"),
#line 9457
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9458
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 9459
F_TRAINER_FEMALE | 
#line 9460
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9461
        .doubleBattle = FALSE,
#line 9462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9464
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9465
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9468
    [TRAINER_LEONEL] =
    {
#line 9469
        .trainerName = _("LEONEL"),
#line 9470
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9473
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9474
        .items = { ITEM_HYPER_POTION },
#line 9475
        .doubleBattle = FALSE,
#line 9476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9478
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9479
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9481
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 9485
    [TRAINER_CALLIE] =
    {
#line 9486
        .trainerName = _("CALLIE"),
#line 9487
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9488
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9489
F_TRAINER_FEMALE | 
#line 9490
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9491
        .doubleBattle = FALSE,
#line 9492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9494
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9495
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9498
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9499
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9502
    [TRAINER_CALE] =
    {
#line 9503
        .trainerName = _("CALE"),
#line 9504
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9505
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 9507
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9508
        .doubleBattle = FALSE,
#line 9509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9511
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9512
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9515
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9516
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9519
    [TRAINER_MYLES] =
    {
#line 9520
        .trainerName = _("MYLES"),
#line 9521
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9522
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9524
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9525
        .doubleBattle = FALSE,
#line 9526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9528
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9530
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9529
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9532
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9534
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9533
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9536
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9538
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9537
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9540
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9542
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9541
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9544
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9546
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9545
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9548
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9550
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9549
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9552
    [TRAINER_PAT] =
    {
#line 9553
        .trainerName = _("PAT"),
#line 9554
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9555
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9556
F_TRAINER_FEMALE | 
#line 9557
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9558
        .doubleBattle = FALSE,
#line 9559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9561
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9563
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9562
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9565
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9567
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9566
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9569
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9571
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9570
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9573
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9575
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9574
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9577
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9579
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9578
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9581
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9583
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9582
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9585
    [TRAINER_CRISTIN_1] =
    {
#line 9586
        .trainerName = _("CRISTIN"),
#line 9587
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9588
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9589
F_TRAINER_FEMALE | 
#line 9590
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9591
        .items = { ITEM_HYPER_POTION },
#line 9592
        .doubleBattle = FALSE,
#line 9593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9595
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9597
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9596
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9599
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9601
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9600
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9603
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9604
        .trainerName = _("MAY"),
#line 9605
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9606
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9607
F_TRAINER_FEMALE | 
#line 9608
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9609
        .doubleBattle = FALSE,
#line 9610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9612
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9614
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9613
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9616
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9618
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9617
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9620
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9621
        .trainerName = _("MAY"),
#line 9622
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9623
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 9624
F_TRAINER_FEMALE | 
#line 9625
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9626
        .doubleBattle = FALSE,
#line 9627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9629
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9631
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9630
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9633
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9635
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9634
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9637
    [TRAINER_ROXANNE_2] =
    {
#line 9638
        .trainerName = _("ROXANNE"),
#line 9639
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9640
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9641
F_TRAINER_FEMALE | 
#line 9642
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9643
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9644
        .doubleBattle = TRUE,
#line 9645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9647
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9648
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9650
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9655
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9655
            .heldItem = ITEM_SITRUS_BERRY,
#line 9657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9656
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9658
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9663
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9664
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9666
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9671
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9671
            .heldItem = ITEM_SITRUS_BERRY,
#line 9673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9672
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9674
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9679
    [TRAINER_ROXANNE_3] =
    {
#line 9680
        .trainerName = _("ROXANNE"),
#line 9681
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9682
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9683
F_TRAINER_FEMALE | 
#line 9684
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9685
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9686
        .doubleBattle = TRUE,
#line 9687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9689
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9690
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9692
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9697
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9698
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9700
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9705
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9705
            .heldItem = ITEM_SITRUS_BERRY,
#line 9707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9706
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9708
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9713
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9714
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9716
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9721
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9721
            .heldItem = ITEM_SITRUS_BERRY,
#line 9723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9722
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9724
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9729
    [TRAINER_ROXANNE_4] =
    {
#line 9730
        .trainerName = _("ROXANNE"),
#line 9731
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9732
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9733
F_TRAINER_FEMALE | 
#line 9734
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9735
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9736
        .doubleBattle = TRUE,
#line 9737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9739
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9740
            .lvl = 42,
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
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9748
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9750
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9755
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .heldItem = ITEM_SITRUS_BERRY,
#line 9757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9756
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9758
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9763
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9764
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9766
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9771
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9771
            .heldItem = ITEM_SITRUS_BERRY,
#line 9773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9772
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9774
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9779
    [TRAINER_ROXANNE_5] =
    {
#line 9780
        .trainerName = _("ROXANNE"),
#line 9781
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9782
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 9783
F_TRAINER_FEMALE | 
#line 9784
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9785
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9786
        .doubleBattle = TRUE,
#line 9787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9789
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9790
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9792
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9797
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9798
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9800
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9805
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9806
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9808
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9813
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9813
            .heldItem = ITEM_SITRUS_BERRY,
#line 9815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9814
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9816
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9821
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9822
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9824
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9829
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9829
            .heldItem = ITEM_SITRUS_BERRY,
#line 9831
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9830
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9832
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9837
    [TRAINER_BRAWLY_2] =
    {
#line 9838
        .trainerName = _("BRAWLY"),
#line 9839
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9840
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9842
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9843
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9844
        .doubleBattle = TRUE,
#line 9845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9847
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .heldItem = ITEM_SITRUS_BERRY,
#line 9849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9848
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9850
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9855
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9856
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9858
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 9863
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9864
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9866
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9871
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9871
            .heldItem = ITEM_SITRUS_BERRY,
#line 9873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9872
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9874
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9879
    [TRAINER_BRAWLY_3] =
    {
#line 9880
        .trainerName = _("BRAWLY"),
#line 9881
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9882
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9884
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9885
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9886
        .doubleBattle = TRUE,
#line 9887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9889
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9889
            .heldItem = ITEM_SITRUS_BERRY,
#line 9891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9890
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9892
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9897
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9898
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9900
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 9905
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9906
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9908
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9913
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9913
            .heldItem = ITEM_SITRUS_BERRY,
#line 9915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9914
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9916
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9921
    [TRAINER_BRAWLY_4] =
    {
#line 9922
        .trainerName = _("BRAWLY"),
#line 9923
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9924
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9926
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9927
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9928
        .doubleBattle = TRUE,
#line 9929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9931
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9932
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9934
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9939
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9939
            .heldItem = ITEM_SITRUS_BERRY,
#line 9941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9940
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9942
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 9947
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9948
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9950
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 9955
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9956
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9958
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 9963
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .heldItem = ITEM_SITRUS_BERRY,
#line 9965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9964
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9966
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9971
    [TRAINER_BRAWLY_5] =
    {
#line 9972
        .trainerName = _("BRAWLY"),
#line 9973
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9974
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 9976
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9977
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9978
        .doubleBattle = TRUE,
#line 9979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9981
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9982
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9984
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 9989
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9990
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9992
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9997
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9997
            .heldItem = ITEM_SITRUS_BERRY,
#line 9999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9998
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10000
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 10005
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10006
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10008
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10013
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10014
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10016
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 10021
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10021
            .heldItem = ITEM_SITRUS_BERRY,
#line 10023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10022
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10024
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10029
    [TRAINER_WATTSON_2] =
    {
#line 10030
        .trainerName = _("WATTSON"),
#line 10031
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10032
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10034
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10035
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10036
        .doubleBattle = TRUE,
#line 10037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10039
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10040
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10042
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10047
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10048
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10050
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10055
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10055
            .heldItem = ITEM_SITRUS_BERRY,
#line 10057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10056
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10058
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10063
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10063
            .heldItem = ITEM_SITRUS_BERRY,
#line 10065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10064
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10066
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10071
    [TRAINER_WATTSON_3] =
    {
#line 10072
        .trainerName = _("WATTSON"),
#line 10073
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10074
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10076
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10077
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10078
        .doubleBattle = TRUE,
#line 10079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10081
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10082
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10084
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 10089
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10090
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10092
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10097
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10098
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10100
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10105
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10105
            .heldItem = ITEM_SITRUS_BERRY,
#line 10107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10106
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10108
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10113
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10113
            .heldItem = ITEM_SITRUS_BERRY,
#line 10115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10114
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10116
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10121
    [TRAINER_WATTSON_4] =
    {
#line 10122
        .trainerName = _("WATTSON"),
#line 10123
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10124
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10126
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10127
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10128
        .doubleBattle = TRUE,
#line 10129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10131
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10132
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10134
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10139
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10140
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10142
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10147
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10148
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10150
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10155
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10155
            .heldItem = ITEM_SITRUS_BERRY,
#line 10157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10156
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10158
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10163
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .heldItem = ITEM_SITRUS_BERRY,
#line 10165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10164
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10166
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10171
    [TRAINER_WATTSON_5] =
    {
#line 10172
        .trainerName = _("WATTSON"),
#line 10173
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10174
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 10176
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10177
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10178
        .doubleBattle = TRUE,
#line 10179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10181
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10182
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10184
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10189
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10190
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10192
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10197
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10198
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10200
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10205
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10206
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10208
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10213
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .heldItem = ITEM_SITRUS_BERRY,
#line 10215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10214
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10216
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10221
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10221
            .heldItem = ITEM_SITRUS_BERRY,
#line 10223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10222
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10224
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10229
    [TRAINER_FLANNERY_2] =
    {
#line 10230
        .trainerName = _("FLANNERY"),
#line 10231
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10232
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10233
F_TRAINER_FEMALE | 
#line 10234
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10235
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10236
        .doubleBattle = TRUE,
#line 10237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10239
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10239
            .heldItem = ITEM_WHITE_HERB,
#line 10241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10240
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10242
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10247
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10248
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10250
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10255
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10255
            .heldItem = ITEM_WHITE_HERB,
#line 10257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10256
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10258
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10263
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10263
            .heldItem = ITEM_WHITE_HERB,
#line 10265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10264
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10266
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10271
    [TRAINER_FLANNERY_3] =
    {
#line 10272
        .trainerName = _("FLANNERY"),
#line 10273
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10274
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10275
F_TRAINER_FEMALE | 
#line 10276
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10277
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10278
        .doubleBattle = TRUE,
#line 10279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10281
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10282
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10284
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10289
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10289
            .heldItem = ITEM_WHITE_HERB,
#line 10291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10290
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10292
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10297
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10298
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10300
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10305
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10305
            .heldItem = ITEM_WHITE_HERB,
#line 10307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10306
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10308
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10313
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10313
            .heldItem = ITEM_WHITE_HERB,
#line 10315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10314
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10316
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10321
    [TRAINER_FLANNERY_4] =
    {
#line 10322
        .trainerName = _("FLANNERY"),
#line 10323
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10324
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10325
F_TRAINER_FEMALE | 
#line 10326
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10327
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10328
        .doubleBattle = TRUE,
#line 10329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10331
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10332
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10334
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10339
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10340
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10342
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10347
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10347
            .heldItem = ITEM_WHITE_HERB,
#line 10349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10348
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10350
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10355
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10356
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10358
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10363
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10363
            .heldItem = ITEM_WHITE_HERB,
#line 10365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10364
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10366
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10371
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10371
            .heldItem = ITEM_WHITE_HERB,
#line 10373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10372
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10374
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10379
    [TRAINER_FLANNERY_5] =
    {
#line 10380
        .trainerName = _("FLANNERY"),
#line 10381
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10382
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 10383
F_TRAINER_FEMALE | 
#line 10384
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10385
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10386
        .doubleBattle = TRUE,
#line 10387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10389
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10390
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10392
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10397
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10397
            .heldItem = ITEM_WHITE_HERB,
#line 10399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10398
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10400
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10405
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10406
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10408
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10413
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10414
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10416
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10421
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10421
            .heldItem = ITEM_WHITE_HERB,
#line 10423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10422
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10424
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10429
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10429
            .heldItem = ITEM_WHITE_HERB,
#line 10431
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10430
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10432
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10437
    [TRAINER_NORMAN_2] =
    {
#line 10438
        .trainerName = _("NORMAN"),
#line 10439
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10440
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10442
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10443
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10444
        .doubleBattle = TRUE,
#line 10445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10447
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10448
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10450
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
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
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10458
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10463
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10464
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10466
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10471
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10471
            .heldItem = ITEM_SITRUS_BERRY,
#line 10473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10472
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10474
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10479
    [TRAINER_NORMAN_3] =
    {
#line 10480
        .trainerName = _("NORMAN"),
#line 10481
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10482
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10484
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10485
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10486
        .doubleBattle = TRUE,
#line 10487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10489
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10489
            .heldItem = ITEM_SITRUS_BERRY,
#line 10491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10490
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10492
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10497
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10498
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10500
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10505
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10506
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10508
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10513
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10514
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10516
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10521
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10521
            .heldItem = ITEM_SITRUS_BERRY,
#line 10523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10522
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10524
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10529
    [TRAINER_NORMAN_4] =
    {
#line 10530
        .trainerName = _("NORMAN"),
#line 10531
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10532
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10534
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10535
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10536
        .doubleBattle = TRUE,
#line 10537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10539
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10539
            .heldItem = ITEM_SITRUS_BERRY,
#line 10541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10540
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10542
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10547
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10548
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10550
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10555
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10556
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10558
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10563
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10564
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10566
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10571
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10571
            .heldItem = ITEM_SITRUS_BERRY,
#line 10573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10572
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10574
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10579
    [TRAINER_NORMAN_5] =
    {
#line 10580
        .trainerName = _("NORMAN"),
#line 10581
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10582
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 10584
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10585
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10586
        .doubleBattle = TRUE,
#line 10587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10589
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .heldItem = ITEM_SITRUS_BERRY,
#line 10591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10590
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10592
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10597
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10598
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10600
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10605
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10606
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10608
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10613
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10615
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10614
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10616
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10621
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10622
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10624
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10629
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10629
            .heldItem = ITEM_SITRUS_BERRY,
#line 10631
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10630
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10632
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10637
    [TRAINER_WINONA_2] =
    {
#line 10638
        .trainerName = _("WINONA"),
#line 10639
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10640
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10641
F_TRAINER_FEMALE | 
#line 10642
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10643
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10644
        .doubleBattle = TRUE,
#line 10645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10647
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10647
            .heldItem = ITEM_SITRUS_BERRY,
#line 10649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10648
            .lvl = 40,
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
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10656
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10658
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10663
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10664
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10666
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10671
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10672
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10674
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10679
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10679
            .heldItem = ITEM_CHESTO_BERRY,
#line 10681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10680
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10682
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10687
    [TRAINER_WINONA_3] =
    {
#line 10688
        .trainerName = _("WINONA"),
#line 10689
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10690
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10691
F_TRAINER_FEMALE | 
#line 10692
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10693
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10694
        .doubleBattle = TRUE,
#line 10695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10697
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10698
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10700
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10705
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10706
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10708
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10713
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10713
            .heldItem = ITEM_SITRUS_BERRY,
#line 10715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10714
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10716
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10721
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10722
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10724
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10729
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10730
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10732
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10737
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10737
            .heldItem = ITEM_CHESTO_BERRY,
#line 10739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10738
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10740
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10745
    [TRAINER_WINONA_4] =
    {
#line 10746
        .trainerName = _("WINONA"),
#line 10747
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10748
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10749
F_TRAINER_FEMALE | 
#line 10750
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10751
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10752
        .doubleBattle = TRUE,
#line 10753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10755
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10756
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10758
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10763
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10764
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10766
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10771
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10771
            .heldItem = ITEM_SITRUS_BERRY,
#line 10773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10772
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10774
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10779
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10780
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10782
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10787
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10788
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10790
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10795
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10795
            .heldItem = ITEM_CHESTO_BERRY,
#line 10797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10796
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10798
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10803
    [TRAINER_WINONA_5] =
    {
#line 10804
        .trainerName = _("WINONA"),
#line 10805
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10806
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 10807
F_TRAINER_FEMALE | 
#line 10808
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10809
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10810
        .doubleBattle = TRUE,
#line 10811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10813
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10814
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10816
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 10821
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10822
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10824
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10829
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10831
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10830
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10832
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10837
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10837
            .heldItem = ITEM_SITRUS_BERRY,
#line 10839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10838
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10840
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10845
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10846
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10848
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10853
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10853
            .heldItem = ITEM_CHESTO_BERRY,
#line 10855
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10854
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10856
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10861
    [TRAINER_TATE_AND_LIZA_2] =
    {
#line 10862
        .trainerName = _("TATE&LIZA"),
#line 10863
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10864
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 10866
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10867
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10868
        .doubleBattle = TRUE,
#line 10869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10871
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10872
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10874
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10879
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10880
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10882
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10887
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10887
            .heldItem = ITEM_CHESTO_BERRY,
#line 10889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10888
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10890
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10895
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10895
            .heldItem = ITEM_CHESTO_BERRY,
#line 10897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10896
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10898
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10903
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10903
            .heldItem = ITEM_SITRUS_BERRY,
#line 10905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10904
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10906
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10911
    [TRAINER_TATE_AND_LIZA_3] =
    {
#line 10912
        .trainerName = _("TATE&LIZA"),
#line 10913
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10914
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 10916
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10917
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10918
        .doubleBattle = TRUE,
#line 10919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10921
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10922
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10924
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10929
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10930
            .lvl = 53,
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
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10938
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10940
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10945
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10945
            .heldItem = ITEM_CHESTO_BERRY,
#line 10947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10946
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10948
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10953
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10953
            .heldItem = ITEM_CHESTO_BERRY,
#line 10955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10954
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10956
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10961
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10961
            .heldItem = ITEM_SITRUS_BERRY,
#line 10963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10962
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10964
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10969
    [TRAINER_TATE_AND_LIZA_4] =
    {
#line 10970
        .trainerName = _("TATE&LIZA"),
#line 10971
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10972
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 10974
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10975
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10976
        .doubleBattle = TRUE,
#line 10977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10979
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10980
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10982
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10987
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10988
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10990
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10995
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10996
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10998
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11003
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11003
            .heldItem = ITEM_CHESTO_BERRY,
#line 11005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11004
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11006
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11011
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11011
            .heldItem = ITEM_CHESTO_BERRY,
#line 11013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11012
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11014
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11019
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11019
            .heldItem = ITEM_SITRUS_BERRY,
#line 11021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11020
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11022
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11027
    [TRAINER_TATE_AND_LIZA_5] =
    {
#line 11028
        .trainerName = _("TATE&LIZA"),
#line 11029
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11030
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 11032
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11033
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11034
        .doubleBattle = TRUE,
#line 11035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11037
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11039
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11038
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11040
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11045
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11046
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11048
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11053
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11054
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11056
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11061
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11061
            .heldItem = ITEM_CHESTO_BERRY,
#line 11063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11062
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11064
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11069
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11069
            .heldItem = ITEM_CHESTO_BERRY,
#line 11071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11070
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11072
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11077
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11077
            .heldItem = ITEM_SITRUS_BERRY,
#line 11079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11078
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11080
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11085
    [TRAINER_JUAN_2] =
    {
#line 11086
        .trainerName = _("JUAN"),
#line 11087
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11088
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11090
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11091
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11092
        .doubleBattle = TRUE,
#line 11093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11095
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11096
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11098
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11103
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11104
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11106
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11111
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11112
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11114
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11119
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11119
            .heldItem = ITEM_CHESTO_BERRY,
#line 11121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11120
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11122
                MOVE_REST,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11127
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11127
            .heldItem = ITEM_CHESTO_BERRY,
#line 11129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11128
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11130
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11135
    [TRAINER_JUAN_3] =
    {
#line 11136
        .trainerName = _("JUAN"),
#line 11137
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11138
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11141
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11142
        .doubleBattle = TRUE,
#line 11143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11145
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11146
            .lvl = 50,
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
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11154
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11156
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11161
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11162
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11164
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11169
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11169
            .heldItem = ITEM_CHESTO_BERRY,
#line 11171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11170
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11172
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11177
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11177
            .heldItem = ITEM_CHESTO_BERRY,
#line 11179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11178
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11180
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11185
    [TRAINER_JUAN_4] =
    {
#line 11186
        .trainerName = _("JUAN"),
#line 11187
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11188
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11191
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11192
        .doubleBattle = TRUE,
#line 11193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11195
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11196
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11198
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11203
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11205
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11204
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11206
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11211
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11212
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11214
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11219
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11220
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11222
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11227
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11227
            .heldItem = ITEM_CHESTO_BERRY,
#line 11229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11228
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11230
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11235
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11235
            .heldItem = ITEM_CHESTO_BERRY,
#line 11237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11236
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11238
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11243
    [TRAINER_JUAN_5] =
    {
#line 11244
        .trainerName = _("JUAN"),
#line 11245
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11246
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 11248
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11249
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11250
        .doubleBattle = TRUE,
#line 11251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11253
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11254
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11256
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11261
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11262
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11264
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11269
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11270
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11272
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 11277
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11278
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11280
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 11285
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11285
            .heldItem = ITEM_CHESTO_BERRY,
#line 11287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11286
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11288
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11293
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11293
            .heldItem = ITEM_CHESTO_BERRY,
#line 11295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11294
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11296
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11301
    [TRAINER_ANGELO] =
    {
#line 11302
        .trainerName = _("ANGELO"),
#line 11303
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11304
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 11306
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11307
        .doubleBattle = FALSE,
#line 11308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11310
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11312
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11311
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11313
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11317
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11319
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11318
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11320
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11324
    [TRAINER_DARIUS] =
    {
#line 11325
        .trainerName = _("DARIUS"),
#line 11326
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11327
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11329
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11330
        .doubleBattle = FALSE,
#line 11331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11333
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11335
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11334
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11337
    [TRAINER_STEVEN] =
    {
#line 11338
        .trainerName = _("STEVEN"),
#line 11339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11340
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 11342
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11343
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11344
        .doubleBattle = FALSE,
#line 11345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11347
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11348
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11350
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11355
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11356
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11358
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11363
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11364
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11366
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11371
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11372
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11374
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11379
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11380
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11382
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11387
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11387
            .heldItem = ITEM_SITRUS_BERRY,
#line 11389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11388
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11390
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11395
    [TRAINER_ANABEL] =
    {
#line 11396
        .trainerName = _("ANABEL"),
#line 11397
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11398
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 11399
F_TRAINER_FEMALE | 
#line 11400
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11401
        .doubleBattle = FALSE,
#line 11402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11404
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11405
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11408
    [TRAINER_TUCKER] =
    {
#line 11409
        .trainerName = _("TUCKER"),
#line 11410
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11411
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 11413
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11414
        .doubleBattle = FALSE,
#line 11415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11417
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11418
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11421
    [TRAINER_SPENSER] =
    {
#line 11422
        .trainerName = _("SPENSER"),
#line 11423
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11424
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 11426
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11427
        .doubleBattle = FALSE,
#line 11428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11430
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11431
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11434
    [TRAINER_GRETA] =
    {
#line 11435
        .trainerName = _("GRETA"),
#line 11436
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11437
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 11438
F_TRAINER_FEMALE | 
#line 11439
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11440
        .doubleBattle = FALSE,
#line 11441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11443
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11444
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11447
    [TRAINER_NOLAND] =
    {
#line 11448
        .trainerName = _("NOLAND"),
#line 11449
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11450
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 11452
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11453
        .doubleBattle = FALSE,
#line 11454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11456
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11457
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11460
    [TRAINER_LUCY] =
    {
#line 11461
        .trainerName = _("LUCY"),
#line 11462
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11463
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 11464
F_TRAINER_FEMALE | 
#line 11465
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11466
        .doubleBattle = FALSE,
#line 11467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11469
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11470
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11473
    [TRAINER_BRANDON] =
    {
#line 11474
        .trainerName = _("BRANDON"),
#line 11475
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11476
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 11478
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11479
        .doubleBattle = FALSE,
#line 11480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11482
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11483
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11486
    [TRAINER_MARIELA] =
    {
#line 11487
        .trainerName = _("MARIELA"),
#line 11488
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11489
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 11490
F_TRAINER_FEMALE | 
#line 11491
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11492
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11494
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11495
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11498
    [TRAINER_ALVARO] =
    {
#line 11499
        .trainerName = _("ALVARO"),
#line 11500
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11501
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 11503
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11504
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11506
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11507
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11510
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11511
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11514
    [TRAINER_EVERETT] =
    {
#line 11515
        .trainerName = _("EVERETT"),
#line 11516
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11517
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 11519
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11520
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11522
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11523
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11526
    [TRAINER_RED] =
    {
#line 11527
        .trainerName = _("RED"),
#line 11528
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11529
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 11531
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11532
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11534
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11535
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11538
    [TRAINER_LEAF] =
    {
#line 11539
        .trainerName = _("LEAF"),
#line 11540
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11541
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 11542
F_TRAINER_FEMALE | 
#line 11543
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11544
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11546
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11547
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11550
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11551
        .trainerName = _("BRENDAN"),
#line 11552
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11553
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 11555
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11556
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11558
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11559
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11562
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 11563
        .trainerName = _("MAY"),
#line 11564
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11565
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 11566
F_TRAINER_FEMALE | 
#line 11567
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11568
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11570
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11571
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11574
    [TRAINER_WEEVIL] =
    {
#line 11575
        .trainerName = _("Weevil"),
#line 11576
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 11577
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 11579
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11580
        .doubleBattle = FALSE,
#line 11581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11583
            .species = SPECIES_SCYTHER,
#line 11583
            .gender = TRAINER_MON_MALE,
#line 11586
            .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
#line 11584
            .lvl = 4,
#line 11585
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11588
            .species = SPECIES_HERACROSS,
#line 11588
            .gender = TRAINER_MON_MALE,
#line 11591
            .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
#line 11589
            .lvl = 4,
#line 11590
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
