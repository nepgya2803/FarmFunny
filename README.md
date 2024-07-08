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
Pig     |          22           |    10    |  +1 / 1 day  | fed in 1 consecutive day

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

Animal  |                           Sell                            | Condition to sell |     Buy
:------ | :-------------------------------------------------------: | :---------------: | :----------:
Chicken |                       2 USD/ 1 unit                       |   weight = 2 kg   | +0.2/ 2 days
Cat     |                      4 USD / 1 unit                       |     age > 10      | +1 / 3 days
Dog     | 5 USD 1 unit. 10 USD / 1 unit (if Intelligent index = 10) |     age > 12      | +1 / 2 days
Pig     |                     1 USD / 1 kg meat                     |      age > 5      |  +1 /1 day

<u>
  <strong>Actions:</strong>
</u>

Animal  | Number of sounds per day per animal |      Day time to sound       | Happy index reduction by sounds | Condition to reduce happy index by sounds
:------ | :---------------------------------: | :--------------------------: | :-----------------------------: | ------------------------------------------------
Chicken |                  1                  |           At 6h AM           |               -1                | Hear 10 sounds from Cats, Dogs and Pigs in a day
Cat     |                  1                  |           At 1h AM           |               -1                | Hear 15 sounds from Dogs and Chickens in a day
Dog     |                  1                  |           At 8h PM           |               -1                | Hear 5 sounds from Cats in a day
Pig     |                  1                  | At 12h AM if they are hungry |               n.a               | n.a

<u>
  <strong>Eat:</strong>
</u>

Animal  |                       Food                        |     Sound
:------ | :-----------------------------------------------: | :-----------:
Chicken |                eat 1 food unit/day                | 1 sound/ unit
Cat     | age < 2 don't eat; age >= 2 eat 2 food units/day  | 1 sound/ unit
Dog     | age < 3 don't eat; age >= 3 eat 3 food units/day  | 1 sound/ unit
Pig     | age < 2 cannot eat; age >= 2 eat 7 food units/day | 1 sound/ unit

<u>
  <strong>Reproduce:</strong>
</u>

Animal  |  Number of children   | Time to reproduce |                    Condition to reproduce                     | Baby animal sound when it is born
:------ | :-------------------: | :---------------: | :-----------------------------------------------------------: | ------------------------------------------------
Chicken | 1 -> 3 units (random) |  at 13 days old   |              weight = 2 kg and happy index = 10               | Hear 10 sounds from Cats, Dogs and Pigs in a day
Cat     |        1 unit         |  at 18 days old   |              weight = 4 kg and happy index = 10               | Hear 15 sounds from Dogs and Chickens in a day
Dog     |        1 unit         |  at 22 days old   | weight = 7 kg and happy index = 10 and intelligent index = 10 | Hear 5 sounds from Cats in a day
Pig     | 1 -> 2 units (random) |  at 20 days old   |                          weight = 10                          | n.a

<u>
  <strong>Go out:</strong>
</u>

If an animal go out in a day, it can increase **happy index** and **is not affected** by other animal **sounds**. The animal will automatically go back to the farm **after 12h pm** excep **Cat**

**Chicken** and **Dog** can go out only from **4h AM to 12h PM** (night). **Cat** can go out in **any time** in a day.

- **Happy index +2** each time an animal go out. There is maximum **1 time** for going out in a day for each animal.
- **Hapy index -1** if an animal doesn't go out in **2 days**.
- If **Happy index < 3**, it cannot eat.

<u>
  <strong>Die:</strong>
</u>

Animal will die when its **life time** is reached or **happy index = 0 in 3 consecutive days**

Animal  | Sound when die
:------ | :------------:
Chicken | 4 sounds/ unit
Cat     | 3 sounds/ unit
Dog     | 2 sounds/ unit
Pig     | 3 sounds/ unit

<u>
  <strong>Train:</strong>
</u>

Only dog can be trained<br>

- Intelligent index **+2** each time it is trained. There is maximum **1 time** for training in a day for each dog.

## **2\. Resource**

- **Food**: 50 units when game starts.

- **Money**: 20 USD when game starts. MacDonal can use money to **buy** food (1 USD = 10 food units)

# **3\. MacDonald**

- Can feed animal.
- Can let animal out.
- Can buy more animal.
- Can sell animal.
- Can buy more food.
- Can report animal and resource status.

User can type command in **Command Prompt** to control **MacDonald activities**.

Command                              | Description
:----------------------------------- | :------------------------------------------
report all                           | Report resoure and all animals
report resource                      | Report resources
report animals                       | Report all animals
feed animals                         | Give food to all animals in MacDonal's farm
feed chickens/cats/dogs/pigs         | Give food to an animal type
feed (animal name)                   | Give food to an animal
let animals out/back                 | Let all animals out/back
let chickens/dogs/cats/pigs out/back | Let an animal out/back
let (animal name) out/back           | Let an anima out/back
buy (animal type) (animal name)      | Buy an animal
sell (animal type) (animal name)     | Sell an animal
sell (animal type)                   | Sell an animal type
