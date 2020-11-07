# hifive1-revb-led-blink


## SDK Install

reference to: https://github.com/sss22213/RISC-V-E-SDK-automatically-build-tools

## build
```
  mv hifive1-revb-led-blink blink
  mv blink <freedom-e-sdk folder>/software
```

## upload
```
  cd <freedom-e-sdk folder>
  make PROGRAM=blink TARGET=sifive-hifive1-revb upload
```

---

# Reference

freedom-e-sdk github: https://github.com/sifive/freedom-e-sdk

sifive website: https://www.sifive.com/software
