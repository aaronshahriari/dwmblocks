#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 55

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/music/now_playing.sh", 1, 8) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/disk.sh", 15, 7) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/memory.sh", 15, 6) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/cpu.sh", 15, 5) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/volume.sh", 0, 1) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/battery.sh", 20, 2) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/wifi.sh", 30, 3) \
    X("", "/home/aaronshahriari/.local/bin/scripts/dwmblocks/date.sh", 1, 4)

#endif  // CONFIG_H
