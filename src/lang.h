#ifndef H_LANG
#define H_LANG

enum StringID {
      STR_EMPTY
// common
    , STR_LOADING
    , STR_HELP_PRESS
    , STR_HELP_TEXT
    , STR_LEVEL_STATS
    , STR_HINT_SAVING
    , STR_HINT_SAVING_DONE
    , STR_HINT_SAVING_ERROR
    , STR_YES
    , STR_NO
    , STR_OFF
    , STR_ON
    , STR_SPLIT
    , STR_VR
    , STR_QUALITY_LOW
    , STR_QUALITY_MEDIUM
    , STR_QUALITY_HIGH
    , STR_LANG_EN
    , STR_LANG_FR
    , STR_LANG_DE
    , STR_LANG_ES
    , STR_LANG_IT
    , STR_LANG_RU
    , STR_LANG_JA
    , STR_APPLY
    , STR_GAMEPAD_1
    , STR_GAMEPAD_2
    , STR_GAMEPAD_3
    , STR_GAMEPAD_4
    , STR_NOT_READY
    , STR_PLAYER_1
    , STR_PLAYER_2
    , STR_PRESS_ANY_KEY
    , STR_HELP_SELECT
    , STR_HELP_BACK
// inventory pages
    , STR_OPTION
    , STR_INVENTORY
    , STR_ITEMS
// save game page
    , STR_SAVEGAME
    , STR_CURRENT_POSITION
// inventory option
    , STR_GAME
    , STR_MAP
    , STR_COMPASS
    , STR_STOPWATCH
    , STR_HOME
    , STR_DETAIL
    , STR_SOUND
    , STR_CONTROLS
    , STR_GAMMA
// passport menu
    , STR_LOAD_GAME
    , STR_START_GAME
    , STR_RESTART_LEVEL
    , STR_EXIT_TO_TITLE
    , STR_EXIT_GAME
    , STR_SELECT_LEVEL
// detail options
    , STR_SELECT_DETAIL
    , STR_OPT_DETAIL_FILTER
    , STR_OPT_DETAIL_LIGHTING
    , STR_OPT_DETAIL_SHADOWS
    , STR_OPT_DETAIL_WATER
    , STR_OPT_DETAIL_VSYNC
    , STR_OPT_DETAIL_STEREO
    , STR_OPT_SIMPLE_ITEMS
// sound options
    , STR_SET_VOLUMES
    , STR_REVERBERATION
    , STR_OPT_SUBTITLES
    , STR_OPT_LANGUAGE
// controls options
    , STR_SET_CONTROLS
    , STR_OPT_CONTROLS_KEYBOARD
    , STR_OPT_CONTROLS_GAMEPAD
    , STR_OPT_CONTROLS_VIBRATION
    , STR_OPT_CONTROLS_RETARGET
    , STR_OPT_CONTROLS_MULTIAIM
    // controls
    , STR_CTRL_FIRST
    , STR_CTRL_LAST = STR_CTRL_FIRST + cMAX - 1
    // keys
    , STR_KEY_FIRST
    , STR_KEY_LAST  = STR_KEY_FIRST + ikZ
    // gamepad
    , STR_JOY_FIRST
    , STR_JOY_LAST  = STR_JOY_FIRST + jkMAX - 1
// inventory items
    , STR_UNKNOWN
    , STR_EXPLOSIVE
    , STR_PISTOLS
    , STR_SHOTGUN
    , STR_MAGNUMS
    , STR_UZIS
    , STR_AMMO_PISTOLS
    , STR_AMMO_SHOTGUN
    , STR_AMMO_MAGNUMS
    , STR_AMMO_UZIS
    , STR_MEDI_SMALL
    , STR_MEDI_BIG
    , STR_LEAD_BAR
    , STR_SCION
// keys
    , STR_KEY
    , STR_KEY_SILVER
    , STR_KEY_RUSTY
    , STR_KEY_GOLD
    , STR_KEY_SAPPHIRE
    , STR_KEY_NEPTUNE
    , STR_KEY_ATLAS
    , STR_KEY_DAMOCLES
    , STR_KEY_THOR
    , STR_KEY_ORNATE
// puzzles
    , STR_PUZZLE
    , STR_PUZZLE_GOLD_IDOL
    , STR_PUZZLE_GOLD_BAR
    , STR_PUZZLE_COG
    , STR_PUZZLE_FUSE
    , STR_PUZZLE_ANKH
    , STR_PUZZLE_HORUS
    , STR_PUZZLE_ANUBIS
    , STR_PUZZLE_SCARAB
    , STR_PUZZLE_PYRAMID
// TR1 subtitles
    , STR_TR1_SUB_26
    , STR_TR1_SUB_27
    , STR_TR1_SUB_28
    , STR_TR1_SUB_29
    , STR_TR1_SUB_30
    , STR_TR1_SUB_31
    , STR_TR1_SUB_32
    , STR_TR1_SUB_33
    , STR_TR1_SUB_34
    , STR_TR1_SUB_35
    , STR_TR1_SUB_36
    , STR_TR1_SUB_37
    , STR_TR1_SUB_38
    , STR_TR1_SUB_39
    , STR_TR1_SUB_40
    , STR_TR1_SUB_41
    , STR_TR1_SUB_42
    , STR_TR1_SUB_43
    , STR_TR1_SUB_44
    , STR_TR1_SUB_45
    , STR_TR1_SUB_46
    , STR_TR1_SUB_47
    , STR_TR1_SUB_48
    , STR_TR1_SUB_49
    , STR_TR1_SUB_50
    , STR_TR1_SUB_51
    , STR_TR1_SUB_52
    , STR_TR1_SUB_53
    , STR_TR1_SUB_54
    , STR_TR1_SUB_55
    , STR_TR1_SUB_56
// TR1 levels
    , STR_TR1_GYM
    , STR_TR1_LEVEL1
    , STR_TR1_LEVEL2
    , STR_TR1_LEVEL3A
    , STR_TR1_LEVEL3B
    , STR_TR1_LEVEL4
    , STR_TR1_LEVEL5
    , STR_TR1_LEVEL6
    , STR_TR1_LEVEL7A
    , STR_TR1_LEVEL7B
    , STR_TR1_LEVEL8A
    , STR_TR1_LEVEL8B
    , STR_TR1_LEVEL8C
    , STR_TR1_LEVEL10A
    , STR_TR1_LEVEL10B
    , STR_TR1_LEVEL10C
    , STR_TR1_EGYPT
    , STR_TR1_CAT
    , STR_TR1_END
    , STR_TR1_END2
// TR2 levels
    , STR_TR2_ASSAULT
    , STR_TR2_WALL
    , STR_TR2_BOAT
    , STR_TR2_VENICE
    , STR_TR2_OPERA
    , STR_TR2_RIG
    , STR_TR2_PLATFORM
    , STR_TR2_UNWATER
    , STR_TR2_KEEL
    , STR_TR2_LIVING
    , STR_TR2_DECK
    , STR_TR2_SKIDOO
    , STR_TR2_MONASTRY
    , STR_TR2_CATACOMB
    , STR_TR2_ICECAVE
    , STR_TR2_EMPRTOMB
    , STR_TR2_FLOATING
    , STR_TR2_XIAN
    , STR_TR2_HOUSE
// TR3 levels
    , STR_TR3_HOUSE
    , STR_TR3_JUNGLE
    , STR_TR3_TEMPLE
    , STR_TR3_QUADCHAS
    , STR_TR3_TONYBOSS
    , STR_TR3_SHORE
    , STR_TR3_CRASH
    , STR_TR3_RAPIDS
    , STR_TR3_TRIBOSS
    , STR_TR3_ROOFS
    , STR_TR3_SEWER
    , STR_TR3_TOWER
    , STR_TR3_OFFICE
    , STR_TR3_NEVADA
    , STR_TR3_COMPOUND
    , STR_TR3_AREA51
    , STR_TR3_ANTARC
    , STR_TR3_MINES
    , STR_TR3_CITY
    , STR_TR3_CHAMBER
    , STR_TR3_STPAUL

    , STR_MAX
};

const char *helpText = 
    "Start - add second player or restore Lara@"
    "H - Show or hide this help@"
    "ALT + ENTER - Fullscreen@"
    "5 - Save Game@"
    "9 - Load Game@"
    "C - Look@"
    "R - Slow motion@"
    "T - Fast motion@"
    "Roll - Up + Down@"
    "Step Left - Walk + Left@"
    "Step Right - Walk + Right@"
    "Out of water - Up + Action@"
    "Handstand - Up + Walk@"
    "Swan dive - Up + Walk + Jump@"
    "First Person View - Look + Action@"
    "DOZY on - Look + Duck + Action + Jump@"
    "DOZY off - Walk";

const char *STR_EN[] = { ""
// help
    , "Loading..."
    , "Press H for help"
    , helpText
    , "%s@@@"
      "KILLS %d@@"
      "PICKUPS %d@@"
      "SECRETS %d of %d@@"
      "TIME TAKEN %s"
    , "Saving game..."
    , "Saving done!"
    , "SAVING ERROR!"
    , "YES"
    , "NO"
    , "Off"
    , "On"
    , "Split Screen"
    , "VR"
    , "Low"
    , "Medium"
    , "High"
    , "English"
    , "French"
    , "German"
    , "Spanish"
    , "Italian"
    , "Russian"
    , "Japanese"
    , "Apply"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Player 1"
    , "Player 2"
    , "Press Any Key"
    , "%s - Select"
    , "%s - Go Back"
// inventory pages
    , "OPTIONS"
    , "INVENTORY"
    , "ITEMS"
// save game page
    , "Save Game?"
    , "Current Position"
// inventory option
    , "Game"
    , "Map"
    , "Compass"
    , "Statistics"
    , "Lara's Home"
    , "Detail Levels"
    , "Sound"
    , "Controls"
    , "Gamma"
// passport menu
    , "Load Game"
    , "New Game"
    , "Restart Level"
    , "Exit to Title"
    , "Exit Game"
    , "Select Level"
// detail options
    , "Select Detail"
    , "Filtering"
    , "Lighting"
    , "Shadows"
    , "Water"
    , "VSync"
    , "Stereo"
    , "Simple Items"
// sound options
    , "Set Volumes"
    , "Reverberation"
    , "Subtitles"
    , "Language"
// controls options
    , "Set Controls"
    , "Keyboard"
    , "Gamepad"
    , "Vibration"
    , "Retargeting"
    , "Multi-aiming"
    // controls
    , "Left", "Right", "Run", "Back", "Jump", "Walk", "Action", "Draw Weapon", "Look", "Duck", "Dash", "Roll", "Inventory", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Unknown"
    , "Explosive"
    , "Pistols"
    , "Shotgun"
    , "Magnums"
    , "Uzis"
    , "Pistol Clips"
    , "Shotgun Shells"
    , "Magnum Clips"
    , "Uzi Clips"
    , "Small Medi Pack"
    , "Large Medi Pack"
    , "Lead Bar"
    , "Scion"
// keys
    , "Key"
    , "Silver Key"
    , "Rusty Key"
    , "Gold Key"
    , "Sapphire Key"
    , "Neptune Key"
    , "Atlas Key"
    , "Damocles Key"
    , "Thor Key"
    , "Ornate Key"
// puzzles
    , "Puzzle"
    , "Gold Idol"
    , "Gold Bar"
    , "Machine Cog"
    , "Fuse"
    , "Ankh"
    , "Eye of Horus"
    , "Seal of Anubis"
    , "Scarab"
    , "Pyramid Key"
// TR1 subtitles
/* 26 */ , "Welcome to my home!@I'll take you on a guided tour."
/* 27 */ , "Use the directional buttons to go into the music room."
/* 28 */ , "OK. Let's do some tumbling.@Press the jump button."
/* 29 */ , "Now press it again and press one of@the directions and I'll jump that way."
/* 30 */ , "Ah, the main hall.@Sorry about the crates, I'm having some things put@ into storage and the delivery people haven't been yet."
/* 31 */ , "Run up to a crate, and while still pressing forwards@press action, and I'll vault up onto it."
/* 32 */ , "This used to be the ballroom, but I've converted it into my own personal gym.@What do you think?@Well, let's do some exercises."
/* 33 */ , "I don't actually run everywhere.@When I want to be careful, I walk.@Hold down the walk button, and walk to the white line."
/* 34 */ , "With the walk button down, I won't fall off even if you try to make me.@Go on, try it."
/* 35 */ , "If you want look around, press and hold the look button.@Then press in the direction you want to look."
/* 36 */ , "If a jump is too far for me, I can grab the ledge and save myself from a nasty fall.@Walk to the edge with the white line until I won't go any further.@Then press jump immediately followed by forwards then while @I'm in the air press and hold the action button."
/* 37 */ , "Press forward and I'll climb up."
/* 38 */ , "If I do a running jump, I can make a jump like that, no problem."
/* 39 */ , "Walk to the edge with the white line until I stop.@Then let go of walk and tap backwards to give me a run up.@Press forward, and almost immediately press and hold the jump button.@I won't actually jump until the last minute."
/* 40 */ , "Right. This is a really big one.@So do a running jump exactly as before except while I'm in the air@press and hold the action button to make me grab the ledge."
/* 41 */ , "Nice."
/* 42 */ , "Try to vault up here.@Press forwards and hold action."
/* 43 */ , "I can't climb up because the gap is too small.@But press right and I'll shimmy sideways@until there is room, then press forward."
/* 44 */ , "Great!@If there is a long drop and I don't want to@hurt myself jumping off I can let myself down carefully."
/* 45 */ , "Tap backwards, and I'll jump off backwards.@Immediately press and hold the action button,@and I'll grab the ledge on the way down."
/* 46 */ , "Then let go."
/* 47 */ , "Let's go for a swim."
/* 48 */ , "The jump button and the directions@move me around underwater."
/* 49 */ , "Ah! Air!@Just use forward and left and right@to manoeuvre around on the surface.@Press jump to dive down for another swim about.@Or go to the edge and press action to climb out."
/* 50 */ , "Right. Now I'd better take off these wet clothes."
/* 51 */ , "Say cheese!"
/* 52 */ , "Ain't nothin' personal."
/* 53 */ , "I still git a pain in my brain from ye.@An' it's tellin' me funny ideas now.@Like to shoot you to hell!"
/* 54 */ , "You can't bump off me and my brood so easy, Lara."
/* 55 */ , "A leetle late for the prize giving - non?@Still, it is the taking-part wheech counts."
/* 56 */ , "You firin' at me?@You firin' at me, huh?@Ain't nobody else, so you must be firin' at me!"
// TR1 levels
    , "Lara's Home"
    , "Caves"
    , "City of Vilcabamba"
    , "Lost Valley"
    , "Tomb of Qualopec"
    , "St. Francis' Folly"
    , "Colosseum"
    , "Palace Midas"
    , "The Cistern"
    , "Tomb of Tihocan"
    , "City of Khamoon"
    , "Obelisk of Khamoon"
    , "Sanctuary of the Scion"
    , "Natla's Mines"
    , "Atlantis"
    , "The Great Pyramid"
    , "Return to Egypt"
    , "Temple of the Cat"
    , "Atlantean Stronghold"
    , "The Hive"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

const char *STR_FR[] = { ""
// help
    , "Chargement..."
    , "Appuyez sur H pour afficher l'aide"
    , helpText
    , "%s@@@"
      "ENNEMIS TU)ES %d@@"
      "OBJETS TROUVES %d@@"
      "SECRETS %d / %d@@"
      "TEMPS %s"
    , "Sauvegarde..."
    , "Sauvegarde achev)ee!"
    , "SAUVER ERREUR!"
    , "OUI"
    , "NON"
    , "Arret"
    , "Marche"
    , ")Ecran Divis)e"
    , "VR"
    , "Bas"
    , "Moyen"
    , "Haut"
    , "English"
    , "French"
    , "German"
    , "Spanish"
    , "Italian"
    , "Russian"
    , "Japanese"
    , "Appliquer"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Joueur 1"
    , "Joueur 2"
    , "Appuyez sur une touche"
    , "%s - Choisir"
    , "%s - Retour"
// inventory pages
    , "OPTIONS"
    , "INVENTAIRE"
    , "OBJETS"
// save game page
    , "Sauver le jeu?"
    , "Charger Partie"
// inventory option
    , "Jeu"
    , "Carte"
    , "Boussole"
    , "Statistiques"
    , "Manoir de Lara"
    , "Niveau des D)etails"
    , "Sons"
    , "Controles"
    , "Gamma"
// passport menu
    , "Charger"
    , "Commencer"
    , "Rejouer Niveau"
    , "Sortie vers titre"
    , "Quitter"
    , "Choisir Niveau"
// detail options
    , "Niveau de D)etail"
    , "Filtration"
    , ")Eclairage"
    , "Ombres"
    , "Eau"
    , "VSync"
    , "St)er)eo"
    , "Objets Simples"
// sound options
    , "R)egler Volume"
    , "R)everb)eration"
    , "Sous-titres"
    , "Langue"
// controls options
    , "R)egler Controles"
    , "Clavier"
    , "Gamepad"
    , "Vibration"
    , "Reciblage"
    , "Multi-vis)ee"
    // controls
    , "Gauche", "Droite", "Courir", "Arri$ere", "Sauter", "Marcher", "Action", "D)egainer", "Regarder", "Duck", "Dash", "Roulade", "Inventaire", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Inconnu"
    , "Explosif"
    , "Pistolets"
    , "Fusil $a pompe"
    , "Magnums"
    , "Uzis"
    , "Balles de pistolet"
    , "Cartouches de fusil"
    , "Balles de magnum"
    , "Balles d'uzi"
    , "Mini m)edikit"
    , "Grand m)edikit"
    , "Barre en plomb"
    , "Scion"
// keys
    , "Cl)e"
    , "Cl)e d'argent"
    , "Cl)e rouill)ee"
    , "Cl)e en or"
    , "Cl)e de saphir"
    , "Cl)e Neptune"
    , "Cl)e d'Atlas"
    , "Cl)e Damocl$es"
    , "Cl)e de Thor"
    , "Cl)e Ornement)ee"
// puzzles
    , "Puzzle"
    , "Idole d'or"
    , "Lingot d'or"
    , "Engrenage"
    , "Fusible"
    , "Ankh"
    , "Oeil d'Horus"
    , "Sceau d'Anubis"
    , "Scarab)ee"
    , "Cl)e pyramide"
// TR1 subtitles by Zellphie
/* 26 */ , "Bienvenue chez moi! je vais vous faire visiter."
/* 27 */ , "Utilisez les touches fl)ech)ees pour@aller dans le salon de musique."
/* 28 */ , "OK. On va bouger un peu.@Appuyez sur la touche de saut."
/* 29 */ , "Recommencez en appuyant sur une touche fl)ech)ee@et je sauterai dans cette direction."
/* 30 */ , "Oh! Voici le grand hall!@Excusez le d)esordre, mais je veux tout envoyer au garde-meuble@mais les d)em)enageurs ne sont toujours pas arriv)es."
/* 31 */ , "Courez vers une caisse et appuyez@en m(eme temps sur la touche fl)ech)ee haut et la touche d'action@je sauterai dessus."
/* 32 */ , "C')etait autrefois la salle de bal,@mais je l'ai transform)ee en salle de gym personnelle.@C'est chouette, non?@Allez, un peu d'exercice."
/* 33 */ , "Je ne cours pas sans arr(et dans ce jeu en fait.@Lorsque je dois (etre prudente, je peux aussi marcher.@Appuyez sur la touche de marche et avancez@jusqu'$a la ligne blanche."
/* 34 */ , "Si vous appuyez encore sur la touche de marche,@je ne tomberai pas, m(eme si vous insistez.@Allez-y, essayez!"
/* 35 */ , "Si vous voulez examiner les environs,@appuyez sur la touche qui vous permet de voir.@Puis sur une touche de direction."
/* 36 */ , "Si je ne peux pas sauter assez loin, je peux toujours me rattraper@de justesse pour ne pas tomber. Avancez jusqu'$a la ligne blanche@jusqu'$a que je m'arr(ete de moi-m(eme,@ensuite appuyez sur la touche de saut et tout de suite apr$es@sur la touche fl)ech)ee haut, et maintenez la touche d'action enfonc)ee pendant que je saute."
/* 37 */ , "Appuyez sur la touche fl)ech)ee haut pour me faire grimper."
/* 38 */ , "Si je prends de l')elan, je peux sauter |a sans probl$eme!"
/* 39 */ , "Avancez jusqu'$a la ligne blanche, jusqu'$a ce que je m'arr(ete,@et appuyez sur la touche de marche puis sur la touche fl)ech)ee bas pour que je prenne de l')elan.@Appuyez ensuite sur la touche fl)ech)ee haut et sur la touche de saut tout de suite apr(es.@Mais en fait, je ne sauterai qu'au dernier moment, je ne suis pas folle!"
/* 40 */ , "L$a, c'est plus difficile.@Nous allons refaire exactement le m(eme saut, mais@vous maintiendrez la touche d'action enfonc)ee@pour que je me rattrape en catastrophe@Quand je serai en l'air."
/* 41 */ , "Bien jou)e!"
/* 42 */ , "Nous allons essayer de sauter ici.@Appuyez sur la touche fl)ech)ee haut puis sur la touche d'action sans la rel(acher."
/* 43 */ , "Je n'ai pas la place de grimper i|i, mais si vous appuyez sur la touche@fl)ech)ee droite je longerai la corniche pour trouver un passage@ et vous n'aurez plus qu'$a appuyez sur la touche fl)ech)ee haut $a ce moment l$a."
/* 44 */ , "Super!@Si je me retrouve trop haut je peux me laisser@glisser doucement, pour )eviter de me blesser en sautant."
/* 45 */ , "Appuyez sur la touche fl)ech)ee bas pour que je me laisse tomber@ensuite si vous gardez la touche d'action enfonc)ee@je me rattraperai dans ma chute."
/* 46 */ , "Ensuite laissez aller."
/* 47 */ , "Et maintenant un bon bain!"
/* 48 */ , "La touche de saut et les touches de direction@me permettent d')evoluer sous l'eau."
/* 49 */ , "Oh! Ah! De l'air!@Utilisez les touches fl)ech)ees avant, gauche et droite pour me faire nager en surface.@Appuyez sur la touche de saut pour me faire plonger et nager sous l'eau.@Pour me faire sortir, dirigez-vous vers le bord et appuyez sur la touche d'action."
/* 50 */ , "Super. Bon je ferais mieux d'enelever ces v(etements mouill)es."
/* 51 */ , "Un petit sourire!"
/* 52 */ , "Ca n'a rien de personel."
/* 53 */ , "J'ai encore mal au cr(ane $a cause de toi. Et j'entends des petites voix dans ma t(ete.@Elles me disent de te tuer!"
/* 54 */ , "Vous n'allez pas m')eliminer pas avec ma race aussi facilement Lara!"
/* 55 */ , "Un peu tard pour la remise des prix non?@Ah... L'essentiel, c'est de participer? mais me voici maintenant devant un horrible dilemme!@C'est bien dommage, mais c'est la vie."
/* 56 */ , "C'EST SUR MOI QUE TU TIRES?! C'EST SUR MOI QUE TU TIRES?! @BAH OUI Y'A PERSONNE! @C'EST SUR MOI QUE TU TIRES!!"
// TR1 levels
    , "Manoir de Lara"
    , "Cavernes"
    , "Cit)ee de Vilcabamba"
    , "Vall)ee Perdue"
    , "Tombe de Qualopec"
    , "Monument St. Francis"
    , "Colosseum"
    , "Palais de Midas"
    , "La Citerne"
    , "Tombe de Tihocan"
    , "Cit)ee de Khamoon"
    , "Ob)elisque de Khamoon"
    , "Sanctuaire du Scion"
    , "Mines de Natla"
    , "Atlantide"
    , "La Grande Pyramide"
    , "Retour en Egypte"
    , "Temple du Chat"
    , "La Forteresse Atlantique"
    , "La Ruche"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

const char *STR_DE[] = { ""
// help
    , "Wird geladen..."
    , "Press H for help"
    , helpText
    , "%s@@@"
      "Besiegte Gegner %d@@"
      "Gegenst~ande %d@@"
      "Geheimnisse %d von %d@@"
      "Ben~otigte Zeit %s"
    , "Spiel sicherung..."
    , "Spielstand gesichert!"
    , "Sicherung FEHLER!"
    , "JA"
    , "NEIN"
    , "Aus"
    , "An"
    , "Geteilter Bildschirm"
    , "VR"
    , "Niedrig"
    , "Mittel"
    , "Hoch"
    , "English"
    , "French"
    , "German"
    , "Spanish"
    , "Italian"
    , "Russian"
    , "Japanese"
    , "Anwenden"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Spieler 1"
    , "Spieler 2"
    , "Press Any Key"
    , "%s - W~ahlen"
    , "%s - Zur~uck"
// inventory pages
    , "OPTIONEN"
    , "INVENTAR"
    , "GEGENST~ANDE"
// save game page
    , "Spiel sichern?"
    , "Aktuelle Position"
// inventory option
    , "Spiel"
    , "Karte"
    , "Kompa="
    , "Statistiken"
    , "Laras Haus"
    , "Detail-Stufe"
    , "Ton"
    , "Kontrollen"
    , "Gamma"
// passport menu
    , "Spiel Laden"
    , "Spiel Starten"
    , "Level neu starten"
    , "Zur~uck zum Hauptmen~u"
    , "Spiel Beenden"
    , "Level W~ahlen"
// detail options
    , "Detailstufe W~ahlen"
    , "Filterung"
    , "Beleuchtung"
    , "Schatten"
    , "Wasser"
    , "VSync"
    , "Stereo"
    , "Einfache Gegenst~ande"
// sound options
    , "Lautst~arke Einstellen"
    , "Nachhall"
    , "Untertitel"
    , "Sprache"
// controls options
    , "Kontrollen Einstellen"
    , "Tastatur"
    , "Gamepad"
    , "Vibration"
    , "Retargeting"
    , "Multi-Zielen"
    // controls
    , "Links", "Rechts", "Laufen", "R~uckw~arts", "Springen", "Gehen", "Handlung", "Waffe ziehen", "Umsehen", "Duck", "Dash", "Rolle", "Inventory", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Unbekannte"
    , "Explosiv"
    , "Pistolen"
    , "Schrotflinte"
    , "Magnums"
    , "Uzis"
    , "Pistolen-Munition"
    , "Schrot-Munition"
    , "Magnum-Munition"
    , "Uzi-Ladestreifen"
    , "Kleines Medi-Pack"
    , "Gro=es Medi-Pack"
    , "Bleibarren"
    , "Scion"
// keys
    , "Schl~ussel"
    , "Silberner Schl~ussel"
    , "Rostiger Schl~ussel"
    , "Goldener Schl~ussel"
    , "Saphir-Schl~ussel"
    , "Schl~ussel des Neptun"
    , "Schl~ussel des Atlas"
    , "Schl~ussel des Damokles"
    , "Schl~ussel des Thor"
    , "Der antike Schl~ussel"
// puzzles
    , "R~atsel"
    , "Goldener G~otze"
    , "Goldbarren"
    , "Zahnrad"
    , "Sicherung"
    , "Ankh-Kreuz"
    , "Auge des Horus"
    , "Siegel des Anubis"
    , "Skarab~aus"
    , "Schl~ussel der Pyramide"
// TR1 subtitles
/* 26 */ , "Willkommen in meinem Haus."
/* 27 */ , "Mit dem Steuerkreuz kommen Sie ins Musikzimmer."
/* 28 */ , "OK, ~uben wir ein paar Spr~unge.@Dr~ucken Sie die Sprungtaste."
/* 29 */ , "Nochmal Sprungtaste, dann das Steuerkreuz dr~ucken,@und ich springe in diese Richtung."
/* 30 */ , "Ah, die Haupthalle.@Sorry wegen der Kisten: Ich will einige Sachen einlagern@und sie sind noch nicht abgeholt worden."
/* 31 */ , "So springe ich auf eine Kiste: Vorw~artstaste gedr~uckt halten,@w~ahrend ich darauf zurenne und Handlungstaste dr~ucken."
/* 32 */ , "Fr~uher war das der Ballsaal.@Jetzt nutze ich ihn als Turnhalle.@Nicht ~ubel, was?@Dann wollen wir mal."
/* 33 */ , "~Ubrigens renne ich nicht immer:@Wenn Vorsicht geboten ist, gehe ich langsam.@Halten Sie die Gehen-Taste gedr~uckt@und gehen Sie bis zur weissen Linie."
/* 34 */ , "Ist die Gehen-Taste gedr~uckt,@kann ich nicht hinunterfallen - auch nicht, wenn Sie das m~ochten.@Los, versuchen Sie's mal."
/* 35 */ , "Dr~ucken und halten Sie die Umsehen-Taste, um sich umzusehen.@Dr~ucken Sie dann die Richtung, in die Sie blicken m~ochten."
/* 36 */ , "Ist ein Sprung zu weit f~ur mich, kann ich nach einem@Vorsprung greifen, um nicht abzust~urzen.@Gehen Sie zum Rand mit der weissen Linie, bis ich stehen bleibe.@Dr~ucken Sie dann Springen und gleich danach Vorw~arts.@Dr~ucken und halten Sie die Handlungstaste,@w~ahrend ich in der Luft bin."
/* 37 */ , "Dr~ucken Sie Vorw~arts, klettere ich nach oben."
/* 38 */ , "Wenn ich mit Anlauf springe, kann ich das problemlos schaffen."
/* 39 */ , "Gehen Sie zur weissen Linie am Rand, bis ich stehen bleibe.@Lassen Sie dann die Gehen-Taste los und dr~ucken@Sie kurz R~uckw~arts, damit ich Anlauf nehmen kann.@Dr~ucken Sie Vorw~arts. Dr~ucken und halten Sie dann fast gleichzeitig die Sprungtaste.@Ich springe erst im letzten Moment."
/* 40 */ , "OK. Jetzt geht's richtig zur Sache.@Machen Sie also wie vorhin einen Sprung mit Anlauf.@Aber wenn ich in der Luft bin dr~ucken und halten@Sie die Handlungstaste, damit ich den Vorsprung greifen kann."
/* 41 */ , "Sehr sch~on."
/* 42 */ , "Versuchen Sie mal, hier drauf zu springen:@Dr~ucken Sie Vorw~arts und halten Sie die Handlungstaste."
/* 43 */ , "Ich kann nicht hinaufklettern: Nicht genug Platz.@Dr~ucken Sie also Rechts, und ich bewege mich seitw~arts,@bis genug Platz ist. Dr~ucken Sie dann Vorw~arts."
/* 44 */ , "Prima!@Bei einem Sprung aus grosser H~ohe k~onnte ich mich verletzen:@Hier ist es besser, sich vorsichtig hinunter zu lassen."
/* 45 */ , "Dr~ucken Sie kurz R~uckw~arts,@damit ich r~uckw~arts abspringe.@Dr~ucken und halten Sie dann sofort die Handlungstaste,@halte ich mich an der Kante fest."
/* 46 */ , "Lassen Sie dann los."
/* 47 */ , "Gehen wir schwimmen."
/* 48 */ , "Mit der Sprungtaste und dem Steuerkreuz steuern@Sie mich unter Wasser."
/* 49 */ , "Ah! Luft!@Benutzen Sie einfach Vorw~arts, Links und Rechts,@um an der Oberfl~ache herumzuschwimmen.@Dr~ucken Sie die Sprungtaste, um noch mal abzutauchen und weiter zu schwimmen.@Oder schwimmen Sie zum Rand und dr~ucken Sie@die Handlungstaste, um heraus zu klettern."
/* 50 */ , "So. Die nassen Sachen sollte ich wohl besser ausziehen."
/* 51 */ , "Sag 'Cheese'!"
/* 52 */ , "Nimm's nicht pers~onlich."
/* 53 */ , "Es ist gef~ahrlich, Leuten auf den Kopf zu hauen.@Davon kriegt man ganz komische Ideen@wie zum Beispiel, Sie wegzupusten!"
/* 54 */ , "Mich und meine Brut werden Sie nicht so leicht los, Lara."
/* 55 */ , "Zu sp~at f~ur die Preisverleihung - non?@Aber dabei sein ist alles, nicht wahr?"
/* 56 */ , "Schiessen Sie auf mich?@He, ob Sie auf mich schiessen?@Ist ja sonst keiner da, Sie m~ussen wohl mich meinen!"
// TR1 levels
    , "Laras Haus"
    , "Die Kavernen"
    , "Die Stadt Vilcabamba"
    , "Das Verlorene Tal"
    , "Das Grab von Qualopec"
    , "St. Francis' Folly"
    , "Das Kolosseum"
    , "Der Palast des Midas"
    , "Die Zisterne"
    , "Das Grab des Tihocan"
    , "Die Stadt Khamoon"
    , "Der Obelisk von Khamoon"
    , "Das Heiligtum des Scion"
    , "Natlas Katakomben"
    , "Atlantis"
    , "Die Gro=e Pyramide"
    , "Zuruck nach Agypten"
    , "Tempel der Katze"
    , "Atlantischen Stronghold"
    , "Der Bienenstock"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

const char *STR_ES[] = { ""
// help
    , "Cargando..."
    , "Pulsa H para ayuda"
    , helpText
    , "%s@@@"
      "BAJAS %d@@"
      "RECOGIDAS %d@@"
      "SECRETOS %d de %d@@"
      "TIEMPO %s"
    , "Saving game..."
    , "Saving done!"
    , "SAVING ERROR!"
    , "SI"
    , "NO"
    , "No"
    , "Si"
    , "Pantalla dividida"
    , "VR"
    , "Bajo"
    , "Medio"
    , "Alto"
    , "English"
    , "French"
    , "German"
    , "Spanish"
    , "Italian"
    , "Russian"
    , "Japanese"
    , "Aplicar"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Jugador 1"
    , "Jugador 2"
    , "Pulsa Cualquier Tecla"
    , "%s - Elegir"
    , "%s - Regresa"
// inventory pages
    , "OPCIONES"
    , "INVENTARIO"
    , "OBJETOS"
// save game page
    , "\xBF""Guardar juego?"
    , "Posici)on actual"
// inventory option
    , "Juego"
    , "Mapa"
    , "Br)ujula"
    , "Estadistica"
    , "Casa De Lara"
    , "Nivel de Detalle"
    , "Sonido"
    , "Controles"
    , "Gamma"
// passport menu
    , "Cargar Juego"
    , "Juego Nuevo"
    , "Reiniciar Nivel"
    , "Regresar a los T)itulos"
    , "Salir del Juego"
    , "Seleccionar Nivel"
// detail options
    , "Escoger Detalle"
    , "Filtraci)on"
    , "Iluminaci)on"
    , "Oscuridad"
    , "Agua"
    , "VSync"
    , "Stereo"
    , "Objetos Simples"
// sound options
    , "Fijar Volumen"
    , "Reverberaci)on"
    , "Subtitulos"
    , "Lenguaje"
// controls options
    , "Ajustar Controles"
    , "Teclado"
    , "Gamepad"
    , "Vibraci)on"
    , "Retargeting"
    , "Multi-objetivo"
    // controls
    , "Izquierda", "Derecha", "Correr", "Atr)as", "Saltar", "Andar", "Acci)on", "Sacar Armas", "Mirar", "Duck", "Dash", "Rodar", "Inventario", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Desconocido"
    , "Explosivo"
    , "Pistolas"
    , "Escopeta"
    , "Magnums"
    , "Uzis"
    , "Cargadores de Pistola"
    , "Cartuchos de Escopeta"
    , "Cargadores de Magnum"
    , "Cargadores de Uzi"
    , "Botiqu)in Peque(~no"
    , "Botiqu)in Grande"
    , "Lingote de Plomo"
    , "Scion"
// keys
    , "Llave"
    , "Llave de Plata"
    , "Llave Oxidada"
    , "Llave de Oro"
    , "Llave de Zafiro"
    , "Llave de Neptuno"
    , "Llave de Atlas"
    , "Llave de Damocles"
    , "Llave de Thor"
    , "Llave Decorada"
// puzzles
    , "Puzle"
    , "Idolo de Oro"
    , "Lingote de Oro"
    , "Rueda Dentada"
    , "Fusible"
    , "Ankh"
    , "Ojo de Horus"
    , "Sello de Anubis"
    , "Escarabajo"
    , "Llave de la Pir)amide"
// TR1 subtitles
/* 26 */ , "Bienvenidos a mi casa, Te llevar)e en un tour guiado."
/* 27 */ , "Utiliza la tecla de control para llegar a@la habitaci)on de la m)usica."
/* 28 */ , "Vale. Hagamos unas cuantas acrobacias.@Presiona la tecla de salto."
/* 29 */ , "Ahora presi)onalo de nuevo y presiona tambi)en@la tecla de control para saltar hacia ese lado."
/* 30 */ , "Ah, el Sala principal.@Perdona por las cajas, estoy guardando algunas cosas@y los transportistas no han llegado."
/* 31 */ , "Corre hasta una caja y, mientras mantienes presionado la tecla Adelante@presiona la tecla Acci)on para saltar encima de la caja"
/* 32 */ , "Esto era la sala de bailes,@pero la he convertido en mi gimnasio particular.@\xBFQu)e te parece? Bien, hagamos un poco de ejercicio."
/* 33 */ , "En realidad no voy corriendo a todos lados.@Cuando quiero tener cuidado, ando.@Mant)en pulsado la tecla andar y anda hasta la linea blanca."
/* 34 */ , "Con la tecla Andar presionada no me caer)e por mucho que lo intentes.@Vamos, int)entalo."
/* 35 */ , "Si quieres mirar alrededor, presiona la tecla mirar y mantenla asi.@A continuaci)on presiona la direcci)on en la que quieras mirar."
/* 36 */ , "Si un salto es demasiado largo, puedo agarrarme@al borde salv)andome de una desagradable caida.@Camina hasta el borde que tiene la linea blanca,@hasta que ya no pueda avanzar.@Ahora presiona Saltar y justo a continuaci)on Adelante,@mientras estoy en el aire presiona Acci)on."
/* 37 */ , "Pulsa Adelante y subir)e a pulso."
/* 38 */ , "Si hago un salto en carrera tambi)en puedo hacer@ese tipo de saltos. No hay problema."
/* 39 */ , "Camina hasta el borde que tiene la linea blanca,@hasta que ya no pueda avanzar.@Ahora dame la vuelta para que tenga espacio.@Presiona Adelante y casi inmediatamente presiona@y mant)en presionada la tecla Saltar.@No voy a saltar hasta el )ultimo momento."
/* 40 */ , "Vale. Esto es m)as dificil.@Salta en carrera igual que antes pero, mientras estoy en el aire@presiona y mant)en presionado la tecla para que me agarre al borde."
/* 41 */ , "Bonito."
/* 42 */ , "Intenta subir aqui.@Presiona Adelante y mant)en presionado Acci)on."
/* 43 */ , "No puedo escalar porque el espacio es muy peque(~no.@Pero si presionas Derecha, oscilar)e a un lado@hasta que haya espacio, presiona entonces Adelante."
/* 44 */ , "\xA1\xA1Muy bien!!@Si la caida es muy grande y no quiero da(~narme@puedo descolgarme con cuidado."
/* 45 */ , "Pulsa Hacia atr)as y saltar)e.@Presiona a continuaci)on la tecla Acci)on@y me agarrar)e al borde."
/* 46 */ , "Deja que siga."
/* 47 */ , "Vamos a nadar un poco."
/* 48 */ , "La tecla de salto y la de control sirven@para dirigirme mientras buceo."
/* 49 */ , "\xA1""Ah! \xA1""Aire!@S)olo tienes que usar Adelante, Izquierda y@Derecha para moverse por la superficie.@Presiona Saltar para sumergirte y darte otro ba(~no.@O vete al borde y presiona Acci)on para salir."
/* 50 */ , "Bien. Mejor me quito la ropa mojada."
/* 51 */ , "\xA1""Di patata!"
/* 52 */ , "No es nada personal."
/* 53 */ , "Todavia me provocas dolor de cabeza.@Y ese dolor hace que se me ocurran ideas divertidas.@\xA1""Como dispararte hasta mandarte al infierno!"
/* 54 */ , "No te burlar)as de mi y mi progenie tan f)acilmente, Lara."
/* 55 */ , "Un poco tarde para la entrega de premios \xBFno?@A tiempo, lo que cuenta es la recogida."
/* 56 */ , "\xBFMe disparas a mi?@\xBFMe disparas a mi, \xBF""eh?@\xA1No hay nadie m)as, asi que debes estar dispar)andome a mi!"
// TR1 levels
    , "Casa de Lara"
    , "Cuevas"
    , "Ciudad de Vilcabamba"
    , "El Valle Perdido"
    , "Tumba de Qualopec"
    , "Abad)ia de San Francis"
    , "El Coliseo"
    , "Palacio de Midas"
    , "La Cisterna"
    , "Tumba de Tihocan"
    , "Ciudad de Khamoon"
    , "Obelisco de Khamoon"
    , "Santuario del Scion"
    , "Minas de Natla"
    , "Atl)antida"
    , "La Gran Pir)amide"
    , "Regreso a Egipto"
    , "Templo de la Gata"
    , "Fortaleza Atlante"
    , "La Colmena"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

const char *STR_IT[] = { ""
// help
    , "Caricamento..."
    , "Press H for help"
    , helpText
    , "%s@@@"
      "UCCISIONI %d@@"
      "OGG. RACCOLTI %d@@"
      "SEGRETI %d di %d@@"
      "TEMPO %s"
    , "Salvataggio partita..."
    , "Salvataggio completato!"
    , "ERRORE DURANTE IL SALVATAGGIO!"
    , "S$I"
    , "NO"
    , "Off"
    , "On"
    , "Schermo diviso"
    , "VR"
    , "Basso"
    , "Medio"
    , "Alto"
    , "Inglese"
    , "Francese"
    , "Tedesco"
    , "Spagnolo"
    , "Italiano"
    , "Russo"
    , "Giapponese"
    , "Applica"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Non pronto"
    , "Giocatore 1"
    , "Giocatore 2"
    , "Premi un tasto qualsiasi"
    , "%s - Seleziona"
    , "%s - Indietro"
// inventory pages
    , "OPZIONI"
    , "INVENTARIO"
    , "OGGETTI"
// save game page
    , "Salvare la partita?"
    , "Posizione attuale"
// inventory option
    , "Partita"
    , "Mappa"
    , "Bussola"
    , "Statistiche"
    , "Casa di Lara"
    , "Livelli di Dettaglio"
    , "Suoni"
    , "Controlli"
    , "Gamma"
// passport menu
    , "Carica partita"
    , "Inizia partita"
    , "Ricomincia livello"
    , "Torna ai titoli"
    , "Esci dal gioco"
    , "Seleziona livello"
// detail options
    , "Scegli Dettaglio"
    , "Filtro"
    , "Illuminazione"
    , "Ombra"
    , "Acqua"
    , "VSync"
    , "Stereo"
    , "Oggetti Semplici"
// sound options
    , "Imposta il Volume"
    , "Riverbero"
    , "Sottotitoli"
    , "Linguaggio"
// controls options
    , "Modifica Controlli"
    , "Tastiera"
    , "Gamepad"
    , "Vibrazione"
    , "Retargeting"
    , "Mira multipla"
    // controls
    , "Sinistra", "Destra", "Corri", "Indietro", "Jump", "Cammina", "Azione", "Estrai Arma", "Guarda", "Accovacciati", "Scatta", "Capriola", "Inventario", "Start"
    // keys
    , "NONE", "LEFT", "RIGHT", "UP", "DOWN", "SPACE", "TAB", "ENTER", "ESCAPE", "SHIFT", "CTRL", "ALT"
    , "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
    , "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"
    , "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
    // gamepad
    , "NONE", "A", "B", "X", "Y", "L BUMPER", "R BUMPER", "SELECT", "START", "L STICK", "R STICK", "L TRIGGER", "R TRIGGER", "D-LEFT", "D-RIGHT", "D-UP", "D-DOWN"
// inventory items
    , "Sconosciuto"
    , "Esplosivo"
    , "Pistole"
    , "Fucile"
    , "Magnum"
    , "Uzi"
    , "Munizioni Pistola"
    , "Munizioni Fucile"
    , "Munizioni Magnum"
    , "Munizioni Uzi"
    , "Piccolo medikit"
    , "Grande medikit"
    , "Barra di piombo"
    , "Scion"
// keys
    , "Chiave"
    , "Chiave d'argento"
    , "Chiave arrugginita"
    , "Chiave d'oro"
    , "Chiave di zaffiro"
    , "Chiave di Nettuno"
    , "Chiave di Atlante"
    , "Chiave di Damocle"
    , "Chiave di Thor"
    , "Chiave Cesellata"
// puzzles
    , "Puzzle"
    , "Idolo d'oro"
    , "Barra d'oro"
    , "Ruota Dentata"
    , "Fusibile"
    , "Ankh"
    , "Occhio di Horus"
    , "Sigillo di Anubi"
    , "Scarabeo"
    , "Chiave della piramide"
// TR1 subtitles
/* 26 */ , "Benvenuto nella mia casa."
/* 27 */ , "Usa i tasti di controllo per andare nella stanza della musica."
/* 28 */ , "Ok. Facciamo qualche acrobazia.@Premi il tasto Salto."
/* 29 */ , "Ora fallo di nuovo premendo in una@delle direzioni: salter$o da quella parte."
/* 30 */ , "Ecco l'atrio principale.@Scusa per quelle casse, ho imballato alcune cose@e il fattorino non $e ancora venuto."
/* 31 */ , "Corri vicino a una cassa e, continuando a premere Avanti,@premi Azione e io ci salter$o sopra."
/* 32 */ , "Una volta questa stanza era una sala da ballo,@ma io l'ho trasformata nella mia palestra personale.@Cosa ne pensi?@Ok, facciamo qualche esercizio."
/* 33 */ , "In effetti io non corro sempre.@Quando devo essere cauta, cammino.@Tieni premuto il tasto Cammina e raggiungi la linea bianca."
/* 34 */ , "Con il tasto Cammina premuto, non cadr$o@nemmeno se mi spingi a farlo.@Avanti, prova pure."
/* 35 */ , "Se vuoi guardarti intorno, premi e tieni premuto il tasto Guarda.@Quindi premi nella direzione in cui vuoi guardare."
/* 36 */ , "Se un salto $e troppo lungo, posso aggrapparmi al@bordo e risparmiarmi una brutta caduta.@Cammina verso il bordo con la linea bianca@finch)e non posso pi$u andare avanti.@Quindi premi Salto, immediatamente seguito da Avanti,@e mentre sono in aria premi e tieni premuto il tasto Azione."
/* 37 */ , "Premi Avanti e mi arrampicher$o."
/* 38 */ , "Se faccio un salto con rincorsa, posso arrivare@a quella distanza, senza alcun problema."
/* 39 */ , "Cammina verso il bordo con la linea bianca finch)e mi fermo.@Quindi rilascia il tasto Cammina e premi una@volta Avanti per farmi prendere la rincorsa.@Premi Avanti e subito dopo premi e tieni premuto il tasto Salto.@Non spiccher$o il salto fino all'ultimo secondo."
/* 40 */ , "Perfetto. Questo $e davvero grande.@Allora, fai un salto con rincorsa esattamente come prima,@ma questa volta, mentre sono in aria premi e tieni premuto@il tasto Azione per farmi aggrappare al bordo."
/* 41 */ , "Bene."
/* 42 */ , "Prova a saltare qui su.@Premi avanti e tieni premuto il tasto Azione."
/* 43 */ , "Non posso arrampicarmi su perch)e la fessura $e troppo stretta.@Per$o puoi premere destra: mi sposter$o@lateralmente finch)e c'$e spazio, poi premi avanti."
/* 44 */ , "Ottimo!@Se c'$e un grosso dislivello e non voglio farmi@male cadendo, posso calarmi gi$u lentamente."
/* 45 */ , "Premi una volta indietro e far$o un salto in quella direzione.@Poi, immediatamente, premi e tieni premuto il@tasto Azione: mi aggrapper$o al bordo per scendere."
/* 46 */ , "Ora lascia."
/* 47 */ , "Andiamo a farci una nuotata."
/* 48 */ , "Usa il tasto Salto ed i tasti di controllo@per muovermi sott'acqua."
/* 49 */ , "Ah! Aria!@Usa avanti, sinistra e destra per muoverti quando sei a galla.@Premi Salto per immergerti e fare un'altra nuotata.@Oppure vai sul bordo e premi Azione per uscire."
/* 50 */ , "Perfetto. Ora sar$a meglio che mi tolga@questi vestiti bagnati."
/* 51 */ , "Sorridi!"
/* 52 */ , "Niente di personale."
/* 53 */ , "Maledetto, mi fai ancora venire il mal di testa.@E mi fai venire in mente alcuni pensieri cattivi@ad esempio spararti!"
/* 54 */ , "Non puoi liberarti di me e della mia@stirpe cos$i facilmente, Lara."
/* 55 */ , "Un po' in ritardo per la premiazione, no?@Tanto l'importante $e partecipare, giusto?"
/* 56 */ , "Mi stai sparando?@Ehi, stai sparando a me?@Eh s$i, non c'$e nessun altro, stai proprio sparando a me!"
// TR1 levels
    , "Casa di Lara"
    , "Caverne"
    , "Citt$a di Vilcabamba"
    , "Valle perduta"
    , "Tomba di Qualopec"
    , "Rovine di St. Francis"
    , "Colosseo"
    , "Palazzo di Mida"
    , "La Cisterna"
    , "Tomba di Tihocan"
    , "Citt$a di Khamoon"
    , "Obelisco di Khamoon"
    , "Santuario dello Scion"
    , "Miniere di Natla"
    , "Atlantide"
    , "La grande piramide"
    , "Ritorno in Egitto"
    , "Tempio della Gatta"
    , "Fortezza Atlantidea"
    , "L'Alveare"
// TR2 levels
    , "Lara's Home"
    , "La Grande Muraglia"
    , "Venezia"
    , "Covo di Bartoli"
    , "Teatro dell'Opera"
    , "Piattaforma offshore"
    , "Area d'immersione"
    , "40 atmosfere"
    , "Relitto della Maria Doria"
    , "Saloni abitati"
    , "Il ponte"
    , "Pendici tibetante"
    , "Monastero di Barkhang"
    , "Catacombe di Talion"
    , "Palazzo del ghiaccio"
    , "Tempio dello Xian"
    , "Isole galleggianti"
    , "La tana del Drago"
    , "Casa dolce casa"
// TR3 levels
    , "Casa di Lara"
    , "Giungla"
    , "Rovine del tempio"
    , "Il fiume Gange"
    , "Caverne di Kaliya"
    , "Villaggio costiero"
    , "Luogo dell'incidente"
    , "Gola di Madubu"
    , "Tempio di Puna"
    , "Molo sul Tamigi"
    , "Aldwych"
    , "Cancello di Lud"
    , "Citt$a di Londra"
    , "Deserto del Nevada"
    , "Reparto di massima sicurezza"
    , "Area 51"
    , "Antartico"
    , "Miniere RX-Tech"
    , "Città perduta di Tinnos"
    , "Caverna del meteorite"
    , "All Hallows"
};

char **STR = NULL;

enum LangID {
    LANG_EN ,
    LANG_FR ,
    LANG_DE ,
    LANG_ES ,
    LANG_IT ,
    LANG_RU ,
    LANG_JA ,
};

void ensureLanguage(LangID lang) {
    ASSERT(COUNT(STR_EN) == STR_MAX);
    ASSERT(COUNT(STR_FR) == STR_MAX);
    ASSERT(COUNT(STR_DE) == STR_MAX);
    ASSERT(COUNT(STR_ES) == STR_MAX);
    ASSERT(COUNT(STR_IT) == STR_MAX);

    switch (lang) {
        case LANG_FR : STR = (char**)STR_FR; break;
        case LANG_DE : STR = (char**)STR_DE; break;
        case LANG_ES : STR = (char**)STR_ES; break;
        case LANG_IT : STR = (char**)STR_IT; break;
        case LANG_RU : STR = (char**)STR_EN; break;
        case LANG_JA : STR = (char**)STR_EN; break;
        default      : STR = (char**)STR_EN; break;
    }
}

#endif
