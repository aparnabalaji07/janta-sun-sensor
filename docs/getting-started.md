# Getting started

How to get the code on your computer, change it, and put it on the ESP32.

## 1. Install these once

- [Git](https://git-scm.com/downloads). On a Mac you can also run `xcode-select --install` in Terminal
- [VS Code](https://code.visualstudio.com/) for writing code
- [Arduino IDE 2](https://www.arduino.cc/en/software) for uploading code to the ESP32

### Set up the ESP32 in Arduino IDE

1. Open Arduino IDE and go to Settings (Preferences on some versions)
2. In "Additional boards manager URLs" paste this link

   `https://espressif.github.io/arduino-esp32/package_esp32_index.json`

3. Open Boards Manager on the left, search `esp32`, and install the one by Espressif

## 2. Get the code (do this once)

Open Terminal, go to the folder where you keep projects, and run this.

```
git clone https://github.com/aparnabalaji07/janta-sun-sensor.git
cd janta-sun-sensor
code .
```

`code .` opens the folder in VS Code. If it does not work, open VS Code and use File > Open Folder instead.

You need to accept the collaborator invite email before you can push.

## 3. Work on an issue

Do these steps every time you start a new issue.

1. Pick an issue on the project board and assign yourself
2. Get the newest code and make a branch named after the issue

```
   git checkout main
   git pull
   git checkout -b 7-read-sensors
```

3. Edit the code in VS Code
4. Save your work to Git

```
   git add .
   git commit -m "feat: read both sensors over serial"
```

5. Push your branch to GitHub

```
   git push -u origin 7-read-sensors
```

6. Git prints a link. Open it to make a pull request. You can also go to the repo on GitHub and click "Compare & pull request"
7. Fill out the template, write `Closes #7`, and post the link in #light-tracker-embedded

If you need to fix something after review, just edit, commit, and push again on the same branch. The pull request updates on its own.

## 4. Put the code on the ESP32

1. Plug in the ESP32 with a USB cable that carries data (some cables only charge)
2. In Arduino IDE, open `firmware/sun_sensor/sun_sensor.ino` from your cloned folder
3. Tools > Board > esp32 > ESP32 Dev Module
4. Tools > Port, pick the port that appears when the board is plugged in
5. Click Upload (the right arrow)
6. Open Tools > Serial Monitor and set it to 115200 baud

You can write code in VS Code and upload with Arduino IDE. They are editing the same files. If Arduino IDE has the file open, it updates when you save in VS Code.

## 5. WiFi and AWS passwords

Never put real passwords in the code. Copy `firmware/sun_sensor/secrets.example.h` to a new file called `secrets.h` in the same folder and fill in the real values. Git ignores `secrets.h`, so it never gets uploaded.

## Common problems

- **Push to main rejected.** That is expected. Make a branch and open a pull request instead
- **No port shows up in Arduino IDE.** Try a different USB cable. Some ESP32 boards also need a USB driver (CP210x or CH340, depending on the chip printed on the board)
- **Upload gets stuck on "Connecting".** Hold the BOOT button on the ESP32 while it says "Connecting", then let go
- **Build check failed on your pull request.** Click "Details" next to the red X to see the error, fix it, and push again
- **Your branch is behind main.** Run `git checkout main`, `git pull`, `git checkout your-branch`, then `git merge main`
