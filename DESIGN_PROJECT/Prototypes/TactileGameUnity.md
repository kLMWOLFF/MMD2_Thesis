# Arduino + Unity

Connecting arduino to unity in order to use tactile inputs to guide the player in a game.
The idea is to test arduino components individually to understand the reactions and what kind of information is perceived by users to each stimulus.

## Led on/off
This first test was to make a led turn on and off being controlled by unity buttons. The main difficulty was to make the same port connect with arduino and Unity at the same time and exchange information through it.

Working test:
1. Arduino IDE open with serial monitor closed
2. Arduino connected to port COM8
3. Unity play in Game mode (linking script arduino+Unity applied to cube. Button with logic on click() logic with cube applied and script public void 'turnOn'/'turnOff called to each button)

![alt text](REFs/portConnection.ERRORS.png)
![alt text](REFs/Led_Buttons.png)

- LedOn C#: [code](REFs/LedOnOff2.cs)
- LedOn arduino IDE: [code](REFs/UnityLed.ino)