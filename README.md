# SuperMissionStats
Way more mission stats for Deep Rock Galactic.

Ever wanted to know how many times you jumped during a mission? Called ~~that hellspawn~~ the M.U.L.E.? Looked at the map? Well do I have a product for you! This mod keep track of a bunch of stats for you during your missions and saves it to `[Deep Rock Galactic Folder]\FSD\Mods\SuperMissionStats` for you to enjoy later! It also send you a synopsis in the chat after you're back in the Spacerig, what more could you ask for*!?


*If there is more you want to ask for, do let me know and I will see what i can do.

## General Info
- This mod is my first attempt at modding, so it might be bad, any feedback is welcome
- This mod is made using the [FSD-Template](https://github.com/DRG-Modding/FSD-Template), the [header dumps](https://github.com/DRG-Modding/Header-Dumps) and help from the [DRG Modding Discord](https://discord.gg/gUw32ayWGt)

## Json Structure
The data is stored in Json format:
```JSON
{
    "MissionInfo": {
        "Seed": 0,
        "GlobalSeed": 0,
        "Biome": "",
        "Name": "",
        "Complexity": 0,
        "Duration": 0,
        "Mutator": "",
        "DNA": "",
        "Structure": "",
        "Primary": "",
        "Warnings": [],
        "Secondaries": [],
        "Hazard": 0,
        "StartDateTime": "0:00:00 PM UTC"
    },
    "PlayerStats": {
        "Name": "",
        "Hero": "",
        "PlayerRank": 0,
        "HeroLevel": 0,
        "Promotions": 0,
        "TotalDeaths": 0,
        "TotalRevives": 0,
        "TotalTimeDown": 0.0,
        "DamageDealt": {},
        "EnemiesKilled": {},
        "FlaresThrown": 0,
        "Jumps": 0,
        "Pings": 0,
        "LookedAtMap": 0,
        "Salutes": 0,
        "TimesResupplied": 0,
        "LongestTimeAlive": 0,
        "MostSingleHitDamage": 0.0,
        "DPS": 0.0,
        "Title": ""
    },
    "MissionResult": {
        "MissionTime": 0,
        "Credits": {
            "Primary Objective": 0,
            "Secondary Objective": 0,
            "0 x Survival Bonus": 0
        },
        "WasSuccess": false,
        "XP": {
            "Primary Objective": 0,
            "Secondary Objective": 0,
            "Minerals mined by team": 0,
            "Hostiles killed by team": 0
        },
        "MineralsMinedTeam": {}
    }
}
```

## Titles
Lucky you! If you do well, you may get a title at the end of a mission! Here is how: 

- The Medic -> 5 more revives then deaths
- Glyphid Chow -> one death every 5 minutes
- Wildlife Killer -> more then a 1000 kills
- Molly's Best Friend -> a mule call every 30 seconds
- Light Bringer -> flare thrown every 15 seconds
- Karl's Finest -> Rock & Stone every minute
- The Disoriented -> looked at map every 2 minutes

Disclaimer: I pulled these numbers from where the sun don't shine so if you have an idea to improve this, do let me know

## Multiplayer

The host should be able to get all the stats, but for clients some stats are unavailable. The events these rely on are only run on the server so clients can't get them. I'm looking into a fix for clients to get those stats anyway when the host also has the mod installed. The stats that are unavailable are:

- EnemiesKilled
- TotalDeaths
- TotalRevives
- TotalTimeDown

## Known Issues
- There is no in game GUI, I could not be bothered to figure that out, but feel free to contribute!
- Certain stats for the player are only available for the host.
- When hosting with this mod installed, any clients will also see your chat message at the end of the game
