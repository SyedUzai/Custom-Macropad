# MacroUzaz – Custom 3x3 Macropad with OLED and Encoder

## 🔧 Overview

**MacroUzaz** is a fully custom 9-key macropad designed for productivity, media control, and creative customization. Built around the RP2040 microcontroller, this macropad includes an OLED display, rotary encoder with push functionality, and hot-swappable mechanical switches. It runs on the **QMK firmware**, enabling powerful and flexible keyboard layouts, macros, and animations.

This project served as a hands-on learning experience in electronics design, PCB layout, mechanical CAD, and embedded firmware development.

---


## 🧰 Features

- 🔢 **3x3 Key Matrix**  
  - 9 customizable mechanical keys with hot-swappable sockets  
  - Supports multiple layers, macros, shortcuts, etc.

- 🖥️ **1.3" OLED Display (SPI Protocol)**  
  - Displays key functions, system info, or custom animations  
  - Fully programmable through QMK firmware

- 🎛️ **Rotary Encoder with Push Button**  
  - Acts as a volume knob, scrub dial, or custom input  
  - Press function counts as an additional (10th) button

- 🧠 **Microcontroller: RP2040**  
  - Dual-core ARM Cortex-M0+  
  - Powered via USB-C

- 🧩 **Firmware: QMK**  
  - Fully customizable keymaps and behaviors  
  - Supports layers, tap dance, encoder mappings, OLED animations

- 🧾 **Custom 2-Layer PCB Designed in Altium**  
  - Clean routing and silkscreen  
  - Hot-swappable sockets for switch testing or modification  
  - USB-C connector and reset circuitry integrated

---

## 🛠️ Project Goals

The **MacroUzaz** project was created as a practical learning opportunity to:

- Practice schematic capture and PCB layout using **Altium Designer**
- Understand **matrix scanning** for keypads and how to route it
- Design for **hot-swappability** and ergonomic layout
- Integrate **SPI peripherals** like OLEDs
- Learn **firmware basics** using **QMK**
- Combine electronics with **mechanical design and manufacturing**

---

## 🔌 Hardware Overview

| Component        | Description                        |
|------------------|------------------------------------|
| MCU              | Raspberry Pi RP2040                |
| Keys             | 9x Mechanical switches (3x3 matrix)|
| Display          | 1.3" OLED (SPI interface)          |
| Encoder          | Rotary + Push                      |
| PCB              | 2-layer, custom, Altium-designed   |
| Power            | USB-C (5V)                         |

---

## 💻 Firmware

- **QMK Firmware**  
  - Easily customized keymaps with `keymap.c`  
  - Rotary encoder support (CW/CCW + press)  
  - OLED support via `oled_task_user`  
  - Layers and macros defined in `rules.mk` and config files

> If you're new to QMK, check out the [QMK Docs](https://docs.qmk.fm) to get started with keymap customization and advanced features.

---

## 🖼️ Possible Uses

- Shortcut launcher for creative software (e.g., Photoshop, Premiere)
- Terminal command panel for developers
- Media control surface
- Fun animated display toy
- Input device for accessibility or gaming

---

## 📸 Gallery

![IMG_1644](https://github.com/user-attachments/assets/7b689b62-aae1-4b39-a38e-3f1c089dcf61)

---

## 🧪 What I Learned

- PCB design principles and constraints for a compact device
- Mechanical Design using Solidworks
- How to implement a key matrix and debounce logic
- SPI peripheral communication (OLED) and USB HID
- Rotary encoder integration
- Using QMK for rich firmware customization
- The importance of iterative testing and modular design

---

## 🧩 Future Improvements

- Add RGB underglow or per-key lighting
- Bluetooth version using an nRF52 MCU
- Expand to a larger 5x3 layout
- Add USB passthrough or additional encoder

---

## 📜 License

This project is open-source and intended for educational and personal use.

---

## 🙌 Credits

Designed and built by **Syed Uzair Ali**  
Firmware based on [QMK](https://qmk.fm/)  
OLED graphics inspired by open QMK community contributions

---
