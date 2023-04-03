# Mini-ryoku

A compact 34-key adaptation of the [Miryoku layout](https://github.com/manna-harbour/miryoku) for the [Ferris Sweep](https://github.com/davidphilipbarr/Sweep).

Check out the writeup at [Mini-ryoku](https://github.com/ChuseCubr/mini-ryoku).

## Building

This folder is to be located in `qmk_firmware/keyboards/<keyboard>/keymaps/`

I don't plan to make a userspace, so if you want to build this for a keyboard with more than 34 keys, make a mask macro to fit the keymap onto larger boards. Check out the [masks folder](https://github.com/ChuseCubr/mini-ryoku/tree/main/qmk/masks) and the [keymap file](https://github.com/ChuseCubr/mini-ryoku/blob/main/qmk/keymap.c#L10) for examples.
