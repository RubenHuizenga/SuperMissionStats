# SuperMissionStats
Way more mission stats for Deep Rock Galactic.

Ever wanted to know how many times you jumped during a mission? Called ~~that hellspawn~~ the M.U.L.E.? Looked at the map? Well do I have a product for you! This mod keep track of a bunch of stats for you during your missions and saves it to `[Deep Rock Galactic Folder]\FSD\Mods\SuperMissionStats` for you to enjoy later! It also send you a synopsis in the chat after you're back in the Spacerig, what more could you ask for*!?


*If there is more you want to ask for, do let me know and I will see what i can do.

There is no in game GUI. However, there is a separate app to easier view your stats. Download the latest version [here](https://github.com/RubenHuizenga/super-mission-stats-viewer/releases).

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
        "Hazard": "",
        "StartDateTime": "Jan 1, 1970, 0:00:00 PM UTC"
        "IsDeepDive": false,
        "MissionType": ""
    },
    "PlayerStats": {
        "IsHost": true,
        "Name": "",
        "Hero": "",
        "PlayerRank": 0,
        "HeroLevel": 0,
        "Promotions": 0,
        "TotalDeaths": 0,
        "TotalRevives": 0,
        "TotalTimeDown": 0.0,
        "DamageDealt": {},
        "EnemiesKilled": {} | 0,
        "FlaresThrown": 0,
        "Jumps": 0,
        "Pings": 0,
        "LookedAtMap": 0,
        "Salutes": 0,
        "TimesResupplied": 0,
        "LongestTimeAlive": 0,
        "MostSingleHitDamage": 0.0,
        "DPS": 0.0,
        "Title": "",
        "DamageTaken": 0.0
    },
    "MissionResult": {
        "MissionTime": 0,
        "Credits": {
            "Reward Name": 0
        },
        "WasSuccess": false,
        "XP": {  
            "Reward Name": 0
        },
        "EndscreenResources": {}
    }
}
```

`MissionInfo` has a different structure when `IsDeepDive` is true. For each entered stage a new `Stage Number` object will be added with as name the index of the stage (starting at 0).

```JSON
{
"MissionInfo": {
    "Stage Number": {
      "Seed": 0,
      "Complexity": 0,
      "Duration": 0,
      "Mutator": "",
      "DNA": "",
      "Structure": "",
      "Primary": "",
      "Warnings": [],
      "Secondaries": [],
      "Hazard": "",
      "MissionType": ""
    },
    "IsElite": false,
    "Name": "",
    "IsDeepdive": true,
    "StartDateTime": "Jan 1, 1970, 0:00:00 PM UTC",
    "GlobalSeed": 0,
    "Biome": ""
  }
}
```

## Titles
Lucky you! If you do well, you may get a title at the end of a mission! Here is how: 

- The Medic -> 5 more revives then deaths
- Glyphid Chow -> one death every 2 minutes
- Wildlife Killer -> more then a 1000 kills
- Molly's Best Friend -> a mule call every 30 seconds
- Light Bringer -> flare thrown every 15 seconds
- Karl's Finest -> Rock & Stone every minute
- The Disoriented -> looked at map every 2 minutes

Disclaimer: I pulled these numbers from where the sun don't shine so if you have an idea to improve this, do let me know

## Multiplayer

The host should be able to get all the stats, but for clients some stats are unavailable. The events these rely on are only run on the server so clients can't get them. The stats that are unavailable are EnemiesKilled and TotalRevives. However, for EnemiesKilled clients will instead have the total kill count as seen on the mission end screen. This will not include some enemies that the host does count, e.g. lootbugs and cave angels.

## Known Issues
- There is no in game GUI, I could not be bothered to figure that out, but feel free to contribute!
- Certain stats for the player are only available for the host.
- When hosting with this mod installed, any clients will also see your chat message at the end of the game
