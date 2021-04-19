# Geet's build of dmenu - an efficient dynamic menu for X

[dmenu](https://tools.suckless.org/dmenu) with some additional features that make it the most versatile launcher ever.

## Bindings for

- **Move around**:
  - For **normal people**
    - Move around with the arrow keys in the direction you want to go
  - For **vim freaks**
    - Move around with the `vim` movement keys (ie. h, j, k, l) in the direction you want to go while holding down the `Ctrl` key

## Colors and UI

You can set your custom colors, fonts, in the `Xresources` file like so -

```
dmenu.font: SMALL_MONO

dmenu.background:               BG
dmenu.foreground:               FG

dmenu.selbackground:            Primary
dmenu.selforeground:            FGAlt

dmenu.backgroundHighlight:      BG
dmenu.foregroundHighlight:      Primary

dmenu.selbackgroundHighlight:   Primary
dmenu.selforegroundHighlight:   BG

dmenu.outbackground:            Accent
dmenu.outforeground:            FGAlt
```

**Defaults**:

- Default font is the system `monospace at 18pt`, meaning the font will match your system font. (This `monospace` font is specified in the `fonts.conf` file on you system which is usually located at `~/.config/fontconfig/fonts.conf`)
- Default colors which are used are from the [`Ayu Mirage`](https://github.com/ayu-theme/ayu-colors) color scheme

## List of all Patches Applied

- `border`: have a border around the dmenu window
- `caseinsensitive`: changes the default searching to be case insensitive and adds a flag for case sensitive searching
- `center`: have the dmenu window spawn in the center of the screen
- `fuzzymatch`: match the options fuzzily
- `fuzzyhighlight`: highlight what is being matched
- `grid`: have a grid layout if wanted
- `gridnav`: move around the grid layout more easily
- `lineheight`: specify a line height
- `mousesupport`: isn't it obvious!
- `multi-selection`: select multiple options and output them all together
- `navhistory+search`: store a history of all the selection and add a way to search the history like in shells (example: in `bash` with `C-r`)
- `nosort`: adds a flag to disable sorting of options
- `numbers`: show the total number of possible and visible options
- `password`: adds a flag which turns all the input into "\*"
- `preselect`: adds a flag to specify the index of the option which will be selected at the start
- `rejectnomatch`: adds a flag to not allow input of any option that is not there in the list
- `restrictreturn`: adds a flag that restricts the selection of options to 1
- `xresources`: adds the ability to set the colors in the `xresources` file
- `xyw`: adds the ability to spawn the dmenu window at any `x` and `y` coordinate on the screen

## Installation

```
git clone https://github.com/sethigeet/dmenu
cd st
sudo make install
```

**_Note_**: Obviously, `make` is required to build. `fontconfig` is required for the default build, since it asks `fontconfig` for your system `monospace` font.

## Notes on Emojis and Special Characters

If dmenu crashes when viewing emojis, install [`libxft-bgra`](https://aur.archlinux.org/packages/libxft-bgra/) from the `AUR`.

Note that some special characters may appear truncated if too wide. You might want to manually set your prefered emoji/special character font to a lower size in the `config.h` file to avoid this. By default, `Noto Color Emoji`, `JoyPixels` and `Symbola` are used at a smaller size than the usual text.

## TODO

- Add support for setting the `line height` in the `xresources` file
