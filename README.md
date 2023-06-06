# Revontuli

Revontuli is a dark yet vibrant colorscheme, with quite high contrast. 

![Revontuli palette in Konsole](/kate/example.png)

It's not exactly a high contrast theme, but it's close!

The colorscheme started as a [Themer.dev](https://themer.dev/?colors.dark.accent0=%23ff3344&colors.dark.accent1=%2333ffa0&colors.dark.accent2=%23ff9233&colors.dark.accent3=%235fff33&colors.dark.accent4=%2333ffff&colors.dark.accent5=%2333aaff&colors.dark.accent6=%23838fff&colors.dark.accent7=%23D970FF&colors.dark.shade0=%23202020&colors.dark.shade1=%23303030&colors.dark.shade2=%23404040&colors.dark.shade3=%23505050&colors.dark.shade4=%23606060&colors.dark.shade5=%23707070&colors.dark.shade6=%23E0DCE0&colors.dark.shade7=%23FFFFFF&colors.light.accent0=%23ff3344&colors.light.accent1=%2333ffa0&colors.light.accent2=%23ff9233&colors.light.accent3=%235fff33&colors.light.accent4=%2333ffff&colors.light.accent5=%2333aaff&colors.light.accent6=%23838fff&colors.light.accent7=%23D970FF&colors.light.shade0=%23f2f2f2&colors.light.shade1=%23E0DCE0&colors.light.shade2=%23C1BCC2&colors.light.shade3=%23A29DA3&colors.light.shade4=%23847E85&colors.light.shade5=%23656066&colors.light.shade6=%23474247&colors.light.shade7=%23000000&activeColorSet=dark&calculateIntermediaryShades.dark=true&calculateIntermediaryShades.light=true) theme but it evolved into something I've been modifying a lot.
The colorscheme linked above has too many inconsistencies between applications, which is what I've been modifying.

When making a new Revontuli theme, especially for code editors,
**please follow the Kate theme settings as close as possible, so
there is an uniform syntax highlighting across applications!**

The colors are not strict! Feel free to play around with them. Just make sure the contrast is high enough for good
distinction in parts where it is important.

## Palette

### For general web/UI usage:

| Color                                    | Hex       | Usage                |
| ---------------------------------------- | --------- | -------------------- |
| <span style="color:#202020">█████</span> | `#202020` | Normal Background    |
| <span style="color:#2b2b2b">█████</span> | `#2b2b2b` | Alternate Background 1 |
| <span style="color:#404040">█████</span> | `#404040` | Alternate Background 2 |
| <span style="color:#ffffff">█████</span> | `#ffffff` | Normal text          |
| <span style="color:#9f9f9f">█████</span> | `#9f9f9f` | Inactive text        |
| <span style="color:#33ffff">█████</span> | `#33ffff` | Active text          |
| <span style="color:#33aaff">█████</span> | `#33aaff` | Link text            |
| <span style="color:#838fff">█████</span> | `#838fff` | Visited text         |
| <span style="color:#ff3344">█████</span> | `#ff3344` | Negative text        |
| <span style="color:#ff9233">█████</span> | `#ff9233` | Neutral text         |
| <span style="color:#5fff33">█████</span> | `#5fff33` | Positive text        |
| <span style="color:#d970ff">█████</span> | `#d970ff` | Focus                |
| <span style="color:#33ffa0">█████</span> | `#33ffa0` | Hover/Accent         |

### For syntax highlighting:

See Kate syntax highlighting: [Kate Revontuli theme](Kate/revontuli.theme)

### The default shading from gray to white:

| Color                                    | Hex       |
| ---------------------------------------- | --------- |
| <span style="color:#202020">█████</span> | `#202020` |
| <span style="color:#404040">█████</span> | `#404040` |
| <span style="color:#606060">█████</span> | `#606060` |
| <span style="color:#808080">█████</span> | `#808080` |
| <span style="color:#9F9F9F">█████</span> | `#9F9F9F` |
| <span style="color:#BFBFBF">█████</span> | `#BFBFBF` |
| <span style="color:#DFDFDF">█████</span> | `#DFDFDF` |
| <span style="color:#FFFFFF">█████</span> | `#FFFFFF` |

Feel free to use midtones (like `#2b2b2b` above) whenever needed.

## Notes for specific themes

### Kate theme

**The Kate colorscheme is the most up-to-date one**, since it is my main text editor.
When it comes to syntax highlighting, please follow the Kate theme settings, so
there is an uniform syntax highlighting across applications.

### Jetbrains IDE theme
This theme can be a bit broken due to not finding
all the right elements and modifying them to match the colorscheme.

**Help is welcome.**

### Vim theme

Vim theme should work on both Vim and Neovim, I use it with Neovim.
However there are some things that may look wrong due to LSP coloring them or they just have no
colorization implemented yet.

**Help is welcome!**