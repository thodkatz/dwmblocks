# dwmblocks
Modular status bar for dwm written in c.

Patched with [statuscmd](https://dwm.suckless.org/patches/statuscmd/): clicking a block in dwm
runs its script with `$BUTTON` set (1 left, 2 middle, 3 right, 4/5 scroll). dwm needs the
status2d and statuscmd patches too, for the colors and the clicks.

## Blocks

The `sb-*` scripts in `scripts/` print [status2d](https://dwm.suckless.org/patches/status2d/)
color codes; `sb-theme` holds the palette they share. `make install` puts them on PATH next to
`dwmblocks`.

| Block | Shows | Click |
|---|---|---|
| `sb-kbd` | keyboard layout | left: next layout (xkb-switch) |
| `sb-net` | Wi-Fi SSID, ethernet or offline | left: nmtui |
| `sb-cpu` | CPU usage | left: htop |
| `sb-mem` | used memory | left: htop |
| `sb-vol` | default sink volume, dim when muted | left: pavucontrol, middle: mute, scroll: volume |
| `sb-bat` | battery, red at 15% or less | |
| `sb-clock` | date and time | left: calendar notification |

Needs: `ttf-hack-nerd`, `libpulse` (pactl), `networkmanager` (nmcli), `libnotify`, `htop`,
`pavucontrol`; `xkb-switch` optional (otherwise the layout is read from `xset -q`).

```shell
sudo make install
```
