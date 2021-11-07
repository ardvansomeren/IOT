# IOT
Raspbian and Arduino projects - Exploring IOT

## Git best practices
Following best practices on how to use GIT - [Git for professionals](https://www.freecodecamp.org/news/git-for-professionals/)

### GitHub Personal Access Token (PAT)
The Personal Access Token (PAT) is used to secure and limit the access to a repository. It is a good practice to minimize the access, or 'principle of least priviledge'.
A good place to start seems to be the explanation in the GitHub community: What are the GitHub scopes needed when creating a Personal Access Token?

...there is a better article outlining the permissions details here: [GitHub PAT scope](https://docs.microsoft.com/en-us/azure/devops/pipelines/repos/github?view=azure-devops&tabs=yaml)

In this case I choose to go for:

- **Repo**
- **Admin**:Repo_hook
- **User**: Read:User and User:Email

### Branch strategy
In line with the best practices explained in the turorial I adjusted the strategy. Git Flow:
**main** - long running branch
**develop** - long running branch
**feature** - short running branch

#### Tower
In this Git Flow strategy the names of the develop and feature branches were swapped. Exploring **Tower** to figure out how this tool can support this strategy best.

##### Visual Studio Code
The Git connection from Visual Studio Code seems to be configured correctly already.

## IOT
Exploring Raspbian and Arduino projects to get a better understanding how IOT is developing and how these developments can be used. Starting with the very basics following and implementing the example projects from Eli - [YouTube Playlist Ardione from Eli the Computer Guy](https://www.youtube.com/playlist?list=PLJcaPjxegjBUsCc8PDvalF9j9dvc1RpUh)

### Arduino
Several components and methods are used during this project. Some counts for the Arduino Uno boards. Functional there isn't a lot of difference, but along the way you can run in some issues.

**What is the difference between Arduino Uno R3 compatible board ATmega328P ATmega16U2 and Arduino Uno R3 ATmega328P USB board CH340G?**

There are two components in an Arduino board from a programming perspective , one is the *microcontroller* that stores your program and another is an *ic* which acts as the bridge between the computers *USB* and the *microcontroller* that is **Atmega328p**.

Now the *microcontroller* is same on both the boards that is **Atmega328p**, the *programmer* is different .

In case of **Atmega16U2** one, it is a *microcontroller* which has been formatted with a firmware to act as the USB to TTL convertor, this is the official method used by original Arduino boards after they discarded FTDI, This is better and efficient although *unless and until you have serious applications* it does not offer much improvements and is costly.

The **CH340** is a Chinese *USB to TTL convertor chip* that is specifically made for this purpose ,since this is neither a microcontroller like a 16U2 nor a branded one like FTDI, it is comparatively cheaper, *getting its drivers is a little tough as you would have to download from the chinese manufacturing site* and its installation also has chinese language although once install it works fine.

**Comparisons**

-CH340 is cheaper ,16U2 is costlier
-Ch340 is an IC , 16U2 is a microcontroller
-Ch340 can not be reprogrammed, 16U2 can be reprogrammed and be used as standalone microcontroller
-CH340 drivers need to be installed seperately , atmega16U2 drivers do not need special care
-16U2 is the method used by original arduino guys from itAly, CH340 is the chinese jugad or hack
-All original arduino boards use 16U2 or FTDI in some cases.cheap chinese ones use CH340.

**Arduino UNO R3 ATMega328P + ATmega16u2**

![image](https://user-images.githubusercontent.com/10297499/140656336-0a286429-878f-4620-9da3-dc8ab6ffae41.png) 

**Arduino UNO R3 ATmega328P + CH340**

![image](https://user-images.githubusercontent.com/10297499/140656355-11988dce-c62d-4fff-8720-900f0b4570eb.png)


#### Multifunctional Shield
Exploring the Arduino multifunctional Shield. Connecting sensors and using the different integrated buttons, piezo speaker and display. Added this part a bit later in this Track.

![image](https://user-images.githubusercontent.com/10297499/140655830-7ed79956-08ab-42bd-833e-62b24390b677.png)

### RaspberryPi

## Azure DevOps
Additionally to exploring GIT best practices and IOT developments, this track is using Azure DevOps to explore the integration of GIT with Azure DevOps and using an Agile project to 'manage' the track.
- Epic: This track
- Feature: Every project or course
- User Story: Description of the MVP steps

### Linking Azure Boards to GitHub commit or pull request.

### Linking from GitHub commit to Azure Board work item
In the [Microsoft documentation](https://docs.microsoft.com/en-us/azure/devops/boards/github/link-to-from-github?view=azure-devops) is explained how to link from a commit to a Azure Board work item by using **AB#{work item id}**

## Azure IOT
As a tech savvy sales consultant working in the hightech discrete manufacturing industry I need to get a deeper understanding of what is developing in the realm of Azure IOT so I can explain the added value of these developments with more confidence to my collegues and customers.

## Docker
As a tech savvy sales consultant working in the hightech discrete manufacturing industry I need to get a deeper understanding of modern technologies behind virtualization like Docker and K8S so I can implement these technologies in the design of new propositions and solutions and can explain the added calue of these developments with more confidence to my collegues, partners and customers
