# Planet Asset Download, Parse and GEE Upload
Download the folder and copy and paste whereever you want as long as you have write access

This is a bash script that allows you to activate

1) Planet Assets(Only PlanetScope and RapidEye Analytic Assets for now)

2) Parse the datasets so we can create Metadata files

3) Emails you a copy of the Metadata files for your records

4) Uploads the PlanetScope and RapidEye data to EarthEngine

# Prerequities
It assumes you use Python2.7 hopefully >=2.7.12

Install the following

  * sudo apt-get install ssmtp

  * sudo apt-get install sendemail libio-socket-ssl-perl libnet-ssleay-perl

  * sudo apt-get install zip
  
  * pip install planet

for Earth Engine (https://developers.google.com/earth-engine/python_install)

  * sudo pip install google-api-python-client

  * sudo pip install earthengine-api

  * type earthengine authenticate and a browser will open up asking you to login to google account(This should be the same gmail account
  used to send metadata email)

Copy the Key and paste back to bash

Your earthengine account is now active and linked to that account 

Parse the JSON file using JSON Parser included in the pipeline files to create aoi.json. 

#### Modify _download.py_ files
Edit the line with your Planet API Key and save 

```
os.environ['PLANET_API_KEY']="Enter Your Planet Key Here"
```

The Script requires the following inputs

#### "Enter wait time for asset activation"

Planet assets require to be activated time and there is a wait time for each asset (assuming about 2 seconds per asset specifiy in seconds)

#### "Metadata will be emailed to you:This is the same email associated with Earth Engine account"

#### "Enter from email: You should have password for this account"

This is the email which is used to email the Metadata files along with logging into Earth Engine account

#### "Enter to email"

This is the email address to which you are sending the metadata files

#### "Enter password"

Enter your password here (input is invisible)

#### "Enter PlanetScope asset destination in GEE users users/username/path"

This is the path to the collection or folder you want your PlanetScope assets to be uploaded in Google Earth Engine

#### "Enter RapidEye asset destination in GEE users users/username/path"

This is the path to the collection or folder you want your RapidEye assets to be uploaded in Google Earth Engine

The script will stop when uploading and ask for your password again

So an example run would be 

Migrate to folder first in Bash

```
./planet_dist.sh.x

"Enter wait time for asset activation"
  200

"Metadata will be emailed to you:This is the same email associated with Earth Engine account"
"Enter from email: You should have password for this account"
  abc@gmail.com

"Enter to email"
  def@gmail.com

"Enter password"
  passabc

"Enter PlanetScope asset destination in GEE users users/username/path"
  users/abc/PlanetScope

"Enter RapidEye asset destination in GEE users users/username/path"
  users/abc/RapidEye
```
