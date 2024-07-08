# GAME: Farm Funny

**Mr MacDonald** has a farm of animals. There are 4 kinds of animals in his farm: **chicken**, **cat**, **dog** and **pig**. In this game, you will control **Mr MacDonald** to manage his farm to earn money. Below is description for characters and activities in game.

## **1\. Animal**

### **Properties**

<u>
  <strong>Name:</strong>
</u>

Mr MacDonald will name an animal when it is born or bought.

<u>
  <strong>Age:</strong>
</u>

count in days.

**1 day** in game = **about 1 minute** in real life

An animal starts from **0 day old** when it is born or bought

Life time - animal will **die** after this duration:

Animal  | Life time (days)
:------ | :--------------:
Chicken |        15
Cat     |        20
Dog     |        25
Pig     |        22

<u>
  <strong>Weight:</strong>
</u>

Animal  | When born or buy (Kg) | Max (kg) | Gain weight  | Condition for Gain weight
:------ | :-------------------: | :------: | :----------: | :-----------------------:
Chicken |          15           |    2     | +0.2/ 2 days | fed in 2 consecutive days
Cat     |          20           |    4     | +1 / 3 days  | fed in 3 consecutive days
Dog     |          25           |    7     | +1 / 2 days  | fed in 2 consecutive days
Pig     |          22           |    10    |  +1 / 1 day   | fed in 1 consecutive day

<u>
  <strong>Happy index:</strong>
</u>

**0 - 10.** The default is **7** when it is born or bought.

- Pig doesn't have this index.

<u>
  <strong>Intelligent index:</strong>
</u>

**0 - 10.** The default is **0** when it is born or bought.

- Only Dog have this index.

<u>
  <strong>Price:</strong>
</u>

Animal  |                               Sell                               | Condition to sell |     Buy
:------ | :--------------------------------------------------------------: | :---------------: | :----------:
Chicken |                          2 USD/ 1 unit                           |   weight = 2 kg   | +0.2/ 2 days
Cat     |                          4 USD / 1 unit                          |     age > 10      | +1 / 3 days
Dog     | 5 USD 1 unit<br>10 USD / 1 unit (if<br>Intelligent index = 10)   | age > 12          | +1 / 2 days
Pig     |                        1 USD / 1 kg meat                         |      age > 5      |  +1 /1 day

<u>
  <strong>Actions:</strong>
</u>

