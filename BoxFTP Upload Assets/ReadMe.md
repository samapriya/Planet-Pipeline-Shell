# BoxFTP Upload Assets
Download the folder and copy and paste whereever you want as long as you have write access

This is a bash script that allows you to activate

1) Planet Assets(Only PlanetScope and RapidEye Analytic Assets for now)

2) Parse the datasets so we can create Metadata files

3) Emails you a copy of the Metadata files for your records

4) Uploads the PlanetScope and RapidEye data to EarthEngine

# Prerequities
It assumes you use Python2.7 hopefully >=2.7.12

Install the following

  * sudo apt-get install lftp

for Box Account FTP(ftps://ftp.box.com)

  * Make sure you have external password and box ftp is enabled

####Since the system was designed at IU and designed for box accounts with IU the ftp login is
```
ftps://ftp.box.com
port: 990
```
The script needs specific input from user

```
./lcremote.sh.x
"Enter username"
Enter ftp username

"Enter password"
Enter ftp password (invisible entry)

"Enter Local Path"
This is the local path where PlanetScope or RapidEye data is stored
eg> /home/user/Downloads/PlanetScope

"Remote Path"
This is the remote path where PlanetScope or RapidEye data is to be uploaded on ftp
for example: root folder can be /PlanetScope or /RapidEye and it will create those directions
sh ./planet_dist.sh.x
```
####The program uses mirror function to replicate the local path to remote path
