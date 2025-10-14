
## Chapter 1 - State of the Art: Touch and Texture interactions
In this chapter we will dive into the definition of Touch and Texture, unveil their tensions and motivations, try to uncover what is it that makes touch interesting to interactions and analyse examples on how designs make use of materiality to evoque these two concepts in digital and physical formats. 
Miro - How did you choose the 3 main areas?


### TOUCH
What is the sense of touch in physical design interactions?
What is the sense of touch in digital design interactions?
What is touch in video games? 
What is touch in UI? 
What is touch in digital twins? 

### TEXTURE
What is a texture in physical design interactions?
What is a texture in digital design interactions? - definition, what is high resolution? How does it works? Textures maps. PBR = group of images that can contain from 1-18 overimposed images. Or node-based (reactive textures). Behaviors can also be coded outside the texture (in PBR cases), in which cases an interaction script can be applied to the texture file 
What is texturing in video games? 
What is texturing in UI? 
What is texturing in digital twins? 

## Chapter 2 - Field Research: Digital Textures
In the last chapter we approached the definition of Touch and Texture, two of the main themes of this thesis. To better understand the relevance those two hold in our digital reality, as well as see in examples how tactile affordances are being implemented in practice, this second chapter will focus on the analyses of three main case studies. The chosen applications were selected from the broad spectrum of digital experiences trying to systematically cover very different usage scenarios in order to allow comparison between their overlaps and distinction in the usage of touch in the digital space. Two main criteria were also applied to their curation: the allowance to directly interact with them (receiving feedback from that interaction) and their broad adoption by a big number of users. Taking all that into consideration, this chapter will focus on the study of Minecraft, Apple Liquid Glass and IKEA Kreativ cases; as well as some valuable insights from interviewees also working with different approaches to digital textures. 

### MINECRAFT
Minecraft is a sandbox video game where players can build, explore, and survive in a world made entirely of blocks. The main idea is letting players interact with the different cubes they can find, each representing a different material (dirt, stone, water, etc), by either destroying them or using them to craft new materials, tools, structures or entire landscapes. It offers two base game modes at launch: Survival mode, with a focus on gathering resources, managing health and hunger, and Creative mode, which intends to allow building freely with unlimited resources and no constraints like danger or hunger. Other variants of those can be found as well but in general the game modes change the goal of interacting with the blocks, not the core idea and characteristics of the gameplay.
The reason this game was chosen as a case study for this research is its peculiar approach to texturing. Having many games prizing themselves for having the most realistic, cinematographic graphics, using v-ray and a dozen different techniques to deliver the closest to reality experiences, Minecraft, with its pixelated look both in its 3D models and textures, may seem an odd choice for a project highlighting textures. Nevertheless, it has one of the strongest examples of texturing usage in video games. To prove this point, it would suffice to remove all textures from the game, leaving only its blocking (no pun intended).
[image: Minecraft split-screen picture with/without textures - featuring world landscape]
In the case of videogames, the word Texture refers to the images applied to all game objects, characters, effects, inventory and even the environment; it allows players to recognize them. As shown in the image on the next page, removing the textures from Minecraft would turn the game not only into a sad and boring grayish-looking prototype with lacking depth (as it would no doubt do with any game) but actually render the whole experience pretty much unplayable. Texturing is an extremely important affordance in Minecraft; It influences almost all of a players choices: which blocks to destroy and which to ignore, where to plant your food, how to build a house, what to choose from your inventory, how to craft new items, and the split-second decision about whether the form walking in your direction is a peaceful villager or a zombie.
[image: Minecraft is this grass or a diamond?]
The game counts an overwhelming amount of approximately 2533 distinct textures (Java 1.21 version) - a number that keeps increasing as players are able to develop and share new packs of customized materials. Considering that the standardized format for these square images in the game is only 16×16 pixels, the extent of detail and variation achieved with such limited options makes the number of textures even more impressive. That quantity of deviations albeit, counts only the superficial cosmetic changes applied in game.
As seen in the previous chapter, the sense of touch does not rely solely on a single property to identify a texture. The senses are often interconnected and supply cues to one another to enrich interactions. In the case of Minecraft (and video games, in general) these can be found in the form of audio, visual and behavior feedback. A block being walked onto will produce a specific sound, defining to which group of blocks it belongs to; one being hit by a player will sound, produce particles and, sometimes, spawn an item; a block of water can be passed through, both producing sound and changing physics at the same time (speed of the player decreases and it gains the ability to move up and down). 
Taking this holistic approach to Touch, Minecraft textures can be spread into two broad categories of purely decorative (look different but behave the same) or behavior-linked (associated with distinct logic, mechanics, or interactivity). In the first case, the textures (and objects they are applied to, by extension) look different but behave identically — e.g. 16 colored terracotta blocks, 8 wood types, glazed terracotta variants, banners, carpets, etc. This category constitutes roughly from 1,600 to 1,800 of Minecraft textures, cutting by almost ⅔ the number of different textures being able to be experienced through their reaction to the game environment or player. In the second case (around 20–30% of the game textures), the textures are associated with distinct logic, mechanics, or interactivity, organizing themselves into behavior classes as shown in the following graphic.

[image: Minecraft graphic of behavior classes]

By focusing on the last category of distinct textures, filtered according to their variation in behaviors and not only in looks, 5 textures were chosen to help us dive deeper and get a better understanding with practical examples of how texturing is fully explored in Minecraft. They were assembled from the 5 main texture families in the game and explore their diversity:
#### BLOCKS
Those textures represent the structural layer of the game, forming the environment and determining available physical interactions, placements, and collisions; they define the appearance of the world’s building materials and terrain. Although mainly static, some can contain simple animations to illustrate elements' movements (e.g. water, lava, portals).
[image: Grass block]
#### ITEMS
Those are flat textures (meaning they are not warped around 3D objects) representing portable or craftable objects that players can hold, use, or trade. Unlike blocks, items are not part of the terrain; they exist in inventories or float in the world as functional tools or resources, often linked to crafting and player action. Most are static, with a few exceptions like the animated clock and compass. 
[image: Pickaxe]
#### ENTITIES
The most complex textures in Minecraft, as their maps are applied to dynamic models such as animals, monsters, and NPCs. Their resolutions are higher (usually following multiples of 16px) and adapted to the entity’s 3D form, often combining several body parts, projected in a single image. Entity textures are not limited to a single static image — they often include or swap between multiple textures to reflect behavioral changes such as mood, health, action, or environment.
[image: Villager]

#### PARTICLES
Short-lived 2D textures used for visual effects such as smoke, fire, rain, or explosions. It's common for this group of textures to have the distinct behavior of constantly rotating, making sure to always face the player in order not to reveal their un-thickness. They are mostly well known for their brief animations: varying position, size and rotation, before disappearing. Particle textures express ephemeral events and are used to emphasize an atmosphere, a touch or a motion.
[image: block breaking / digging particle]

#### GRAPHICAL USER INTERFACE (GUI)
Interface textures that organize the available interactions between a player and the game’s logic and storage systems (inventories). They include menus, slots, and icons for crafting, equipping, or managing items. The GUI textures work to make the systems of control and exchange with the users clear to understand and interact.
[image: player Inventory]


### APPLE LIQUID GLASS
The Liquid Glass UI material was chosen as an example for its particular behaviors. Contrary to Minecraft, where textures play a role of unfolding the great variety of possible interactions open to the player, Liquid Glass does, in fact, quite the opposite. Uniformizing the whole IOS system interface to a shiny and translucent look, it seems at first glance to deprive users from multiple textural cues that could help guide their interactions with their gadgets. In fact, it offers a more subtly tactual approach to users. 
Liquid Glass is, as in Apple's UX designers own words,  “(…) a new digital meta-material that dynamically bends and shapes light. And simultaneously it behaves and moves organically (…)“ [reference from official video]. This means that it is an UI with one single texture and multiple behaviours imbued within it; also, the way to unlock each one of these behaviours is by touching the material with different gestures or patterns. It reverses the idea of textures being used to provide differentiation/identity to digital objects or cues on the environment and disponible actions at range to instead transfer those to the user itself. Its touch and intention shapes the object, gives it identity and creates new environments and interactions.

### IKEA KREATIV
The third and last case study of this research, IKEA Kreativ was chosen to bring the point of view of digital twins on digital textures and touch and to bridge the way into the last chapter, that will approach tactile interfaces to touch the digital. This field plays an important position in the realm of digital textures as it works closely with digital and physical materials, constantly having to translate both between each other. After a considerable hype on products being sold for social media posting and video games, especially in the fashion sector; the digital twins have steadily built their position in the production sector through digital prototyping. As far as it goes though, most of these processes remain restricted to the design and production backstages, making their way to the public through the form of virtual try-ons only. As the interest of this thesis remains in studying interactions built for broad audiences, this case study will focus on how IKEA approaches its products digital twins and how those are perceived by users in comparison to their physical experiences with the same products. 
IKEA Kreativ is an application that allows users to decorate a virtual space (be it a Generic showroom or photogrametric version of their own space) with IKEA furniture. Each 3D object inserted in the scene comes with its own texture, as well as their variants options (shown as picture icons). The only affordances conceived to the user for interacting with Kreativ textures are changing the product texture by clicking in one of its variants, and selecting the objects and textures they would like to mask from their photogrametric version, in order to mask them and “clean“ the space before starting to add new digital products.
In that way, IKEA Kreativ states yet another way of dealing with textures and touch. While Minecraft contains thousands of different textures, being able to reproduce hundreds of behaviours and Liquid Glass work with one texture being able to reproduce around 12 different actions; Kreativ includes a huge library of textures, digitalizing all the physical materials contained in IKEA catalogue, but those do not contain a single behavior intertwined with them. The goal of textures here is to provide a notion of color and material aesthetic for composition purposes, evoquing only the most basic of its physical twin visual properties. 
It is interesting to notice that, in comparison to the other examples, what is lacking in Kreativ textures is not the graphic part of its 3D mappings. Even when compared to Minecraft, their textures are visually much more “realistic“ and are evoquing physical materials people have a deep tactual knowledge of. The things missing in IKEA Kreativ are the holistic properties of touch: the way a material is supposed to sound, move, change and react to our touch, combining to help us really feel it.

[Bring field observation on everything we touch in a day - we touch everything in a home]


#### GLOSSARY OF DIGITAL TOUCH TOOLS



## Chapter 3 - Augmented Touch
This last chapter is divided into two parts: on the first one we will, based on the information and insights collected before, weave the definition of Augmented Touch, proposing a hybrid way of touching and understanding textures, translating tactile inputs and feedback between humans and machines through tactile interfaces. On the second one, we will research what are the tools and projects being done today in which we could identify a potential usage of such a term.
### DEFINITION OF AUGMENTED TOUCH
### AUGMENTED TACTILE INTERFACES
#### Tangible UI 
(https://tangible.media.mit.edu/projects/) - (https://milani.ch/en/ueber-uns-en-us/blog/tactile-user-interface-vs-zero-user-interface-two-important-uxui-trends-that-all-product-designers-should-be-aware-of) 
#### Haptics
