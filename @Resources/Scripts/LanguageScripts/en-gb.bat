chcp 437

@echo off

set gamesfol1="Browser games"
set gamesfol2="Campaign"
set gamesfol3="Casual"
set gamesfol4="Indie"
set gamesfol5="Local multiplayer"
set gamesfol6="Online multiplayer"
set gamesfol7="Simulation"
set gamesfol8="Sport & racing"
set gamesfol9="Virtual Reality"
set gamescamfol1="Action"
set gamescamfol2="Horror"
set gamescamfol3="Relaxed"
set gamescamfol4="RPG"
set gamescamfol5="Survival"
set gameslocfol1="Co-op"
set gameslocfol2="Party"
set gameslocfol3="Versus"
set gamesonlfol1="Battle Royale"
set gamesonlfol2="MMO"
set gamesonlfol3="Shooter"
set gamesonlfol4="Strategy"

set newsmediafol1="Far-Left"
set newsmediafol2="Far-Right"
set newsmediafol3="International"

set onlinetools1fol="Diagnostic"

set podcastsfol1="Crime & Drama"
set podcastsfol2="Politics"
set podcastsfol3="Science & Technology"
set podcastsfol4="Sex & Psychology"
set podcastsfol5="Sport"
set podcastsfol6="Talk shows"

set bookmarksfol1="News & media"
set bookmarksfol2="Online tools"
set bookmarksfol3="Podcasts"
set bookmarksfol4="Shopping"
set bookmarks1="Facebook"
set bookmarks2="Gmail"
set bookmarks3="Google Keep"
set bookmarks4="Google Maps"
set bookmarks5="Google Photos"
set bookmarks6="Hulu"
set bookmarks7="Netflix"
set bookmarks8="Reddit"
set bookmarks9="Steam"
set bookmarks10="Twitch"
set bookmarks11="YouTube"

set advanced1="Command prompt"
set advanced2="Device manager"
set advanced3="Disk cleanup"
set advanced4="Disk management"
set advanced5="Registry editor"
set advanced6="Resource monitor"
set advanced7="Startup apps"
set advanced8="Storage spaces"
set advanced9="System configuration"
set advanced10="Windows firewall"
set advanced11="Windows PowerShell"
set advanced12="Windows services"

set controlfol1="Advanced controls"
set control1="Desktop background"
set control2="Display settings"
set control3="Magnify"
set control4="On-screen keyboard"
set control5="Power options"
set control6="Recycle bin"
set control7="Switch display"
set control8="System information"
set control9="Task manager"
set control10="Uninstall a program"
set control11="User accounts"

set advancedseven1="Command prompt"
set advancedseven2="Device manager"
set advancedseven3="Disk cleanup"
set advancedseven4="Disk management"
set advancedseven5="Registry editor"
set advancedseven6="Resource monitor"
set advancedseven7="Storage spaces"
set advancedseven8="System configuration"
set advancedseven9="Windows firewall"
set advancedseven10="Windows PowerShell"
set advancedseven11="Windows services"

set controlsevenfol1="Advanced controls"
set controlseven1="Desktop background"
set controlseven2="Display settings"
set controlseven3="Magnify"
set controlseven4="On-screen keyboard"
set controlseven5="Power options"
set controlseven6="Recycle bin"
set controlseven7="Switch display"
set controlseven8="System information"
set controlseven9="Uninstall a program"
set controlseven10="User accounts"

cd %~dp0

call "RenameShortcuts.bat"