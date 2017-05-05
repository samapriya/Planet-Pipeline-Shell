#PlanetAPI and Client
pip install planet

###download.py
Python client used to query and download the datasets

###sample.json
Structured Json file with AOI and Filters

Make sure your area of interest is licensed with your API Key
Make json using [geojson.io](geojson.io)

###Json Structure
```
{"config": [{"field_name": "geometry", "config": {"type": "Polygon","coordinates": [[[-92.41424560546875,29.528060295064265],
[-93.49502563476562,29.75126321250455],[-93.3453369140625,30.153439766137296],[-92.27691650390625,29.900186637177384],
[-92.41424560546875,29.528060295064265]]]}, "type": "GeometryFilter"}, {"field_name": "gsd", "config": {"gte":1,"lte":9.99}, "type": 
"RangeFilter"}, {"field_name": "acquired", "config": {"gte":"2016-06-01T04:00:00.000Z","lte":"2016-06-30T03:59:59.999Z"}, "type": 
"DateRangeFilter"}, {"field_name": "cloud_cover", "config": {"gte":0,"lte":0.1}, "type": "RangeFilter"}], "type": "AndFilter"}
```

```
Sample commands, for testing.
python download.py --query redding.json --search PSScene3Band visual
python download.py --query redding.json --check PSScene3Band visual
python download.py --query redding.json --activate PSScene3Band visual
python download.py --query redding.json --download /tmp PSScene3Band visual
python download.py --idlist ids_small.txt --check PSScene3Band visual
python download.py --idlist ids_small.txt --activate PSScene3Band visual
python download.py --idlist ids_small.txt --download /tmp PSScene3Band visual
python download.py --search --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01
python download.py --check --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01
python download.py --check --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-08-01 --end-date 2016-12-31
python download.py --activate --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01
python download.py --download ~/Downloads/ --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01
python download.py --query redding.json --search PSScene3Band visual --satlist sats_redding.txt
python download.py --query redding.json --search PSScene3Band visual --sats 0c2b 0c19
python download.py --query redding.json --sats 0c2b 0c19 --search PSScene3Band visual
python download.py --search --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01 --sats 0e0e 0c38
python download.py --check --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01 --sats 0e0e 0c38
python download.py --check --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-08-01 --end-date 2016-12-31 --sats 0e0e 0c38
python download.py --search --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01 --satlist sats_miami.txt
python download.py --check --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01 --sats sats_miami.txt
python download.py --check --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-08-01 --end-date 2016-12-31 --sats 0e0e 0c38
python download.py --activate --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01 --sats sats_miami.txt
python download.py --activate --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-08-01 --end-date 2016-12-31 --sats 0e0e 0c38
python download.py --activate --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01
python download.py --download ~/Downloads/ --bbox -80.209624 25.7777338 -80 26 PSOrthoTile analytic --start-date 2016-01-01
```
