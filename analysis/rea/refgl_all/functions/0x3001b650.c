// rea decompile_all
// name: FUN_3001b650
// address: 0x3001b650
// body: available
// range: 0x3001b650-0x3001bb96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3001b650(void)

{
  uint uVar1;
  
  if (DAT_300a4588 != DAT_300a46e0) {
    uVar1 = DAT_300a46e0 ^ DAT_300a4588;
    if ((uVar1 & 1) != 0) {
      if ((DAT_300a46e0 & 1) == 0) {
        (*DAT_300a44ec)(0xbe2);
      }
      else {
        if ((DAT_300a4388 != DAT_300a4610) || (DAT_300a45d8 != DAT_300a43fc)) {
          (*DAT_300a426c)(DAT_300a4610,DAT_300a43fc);
          DAT_300a4388 = DAT_300a4610;
          DAT_300a45d8 = DAT_300a43fc;
        }
        (*DAT_300a45fc)(0xbe2);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((DAT_300a46e0 & 2) == 0) {
        (*DAT_300a44ec)(0xb44);
      }
      else {
        (*DAT_300a45fc)();
      }
    }
    if ((uVar1 & 4) != 0) {
      if ((DAT_300a46e0 & 4) == 0) {
        (*DAT_300a44ec)(0xbc0);
      }
      else {
        if ((DAT_300a4780 != DAT_300a445c) || (_DAT_300a42e8 != DAT_300a4604)) {
          (*DAT_300a47b8)(DAT_300a445c,DAT_300a4604);
          DAT_300a4780 = DAT_300a445c;
          _DAT_300a42e8 = DAT_300a4604;
        }
        (*DAT_300a45fc)(0xbc0);
      }
    }
    if ((uVar1 & 8) != 0) {
      if ((DAT_300a46e0 & 8) == 0) {
        (*DAT_300a44ec)(0xb71);
      }
      else {
        if (DAT_300a469c != DAT_300a433c) {
          (*DAT_300a44c0)(DAT_300a433c);
          DAT_300a469c = DAT_300a433c;
        }
        (*DAT_300a45fc)(0xb71);
      }
    }
    if ((uVar1 & 0x10) != 0) {
      if ((DAT_300a46e0 & 0x10) == 0) {
        (*DAT_300a44ec)(0xb60);
      }
      else {
        if (_DAT_300a4284 != DAT_300a46c0) {
          (*DAT_300a4370)(0xb65,DAT_300a46c0);
          _DAT_300a4284 = DAT_300a46c0;
        }
        if (_DAT_300a42cc != DAT_300a4644) {
          (*DAT_300a4370)(0xb62,DAT_300a4644);
          _DAT_300a42cc = DAT_300a4644;
        }
        if (_DAT_300a4294 != DAT_300a4214) {
          (*DAT_300a4370)(0xb63,DAT_300a4214);
          _DAT_300a4294 = DAT_300a4214;
        }
        if (_DAT_300a4378 != DAT_300a4768) {
          (*DAT_300a4370)(0xb64,DAT_300a4768);
          _DAT_300a4378 = DAT_300a4768;
        }
        if ((((_DAT_300a4814 != DAT_300a44f8) || (_DAT_300a4818 != DAT_300a44fc)) ||
            (_DAT_300a481c != DAT_300a4500)) || (_DAT_300a4820 != DAT_300a4504)) {
          (*DAT_300a4754)(0xb66,&DAT_300a44f8);
          _DAT_300a4814 = DAT_300a44f8;
          _DAT_300a4818 = DAT_300a44fc;
          _DAT_300a481c = DAT_300a4500;
          _DAT_300a4820 = DAT_300a4504;
        }
        (*DAT_300a45fc)(0xb60);
      }
    }
    if ((uVar1 & 0x40) != 0) {
      if ((DAT_300a46e0 & 0x40) == 0) {
        (*DAT_300a44ec)(0xc60);
      }
      else {
        (*DAT_300a45fc)();
      }
    }
    if ((char)uVar1 < '\0') {
      if ((char)DAT_300a46e0 < '\0') {
        (*DAT_300a45fc)();
      }
      else {
        (*DAT_300a44ec)(0xc61);
      }
    }
    if ((uVar1 & 0x100) != 0) {
      if ((DAT_300a46e0 & 0x100) == 0) {
        (*DAT_300a44ec)(0x8037);
      }
      else {
        (*DAT_300a45fc)();
      }
    }
    DAT_300a4588 = DAT_300a46e0;
  }
  if ((DAT_300a4588 & 1) != 0) {
    if ((DAT_300a4388 != DAT_300a4610) || (DAT_300a45d8 != DAT_300a43fc)) {
      (*DAT_300a426c)(DAT_300a4610,DAT_300a43fc);
      DAT_300a45d8 = DAT_300a43fc;
      DAT_300a4388 = DAT_300a4610;
    }
  }
  if (((DAT_300a4588 & 4) != 0) &&
     ((DAT_300a4780 != DAT_300a445c || (_DAT_300a42e8 != DAT_300a4604)))) {
    (*DAT_300a47b8)(DAT_300a445c,DAT_300a4604);
    DAT_300a4780 = DAT_300a445c;
    _DAT_300a42e8 = DAT_300a4604;
  }
  if (((DAT_300a4588 & 8) != 0) && (DAT_300a469c != DAT_300a433c)) {
    (*DAT_300a44c0)(DAT_300a433c);
    DAT_300a469c = DAT_300a433c;
  }
  if ((DAT_300a4588 & 0x10) != 0) {
    if (_DAT_300a4284 != DAT_300a46c0) {
      (*DAT_300a4370)(0xb65,DAT_300a46c0);
      _DAT_300a4284 = DAT_300a46c0;
    }
    if (_DAT_300a42cc != DAT_300a4644) {
      (*DAT_300a4370)(0xb62,DAT_300a4644);
      _DAT_300a42cc = DAT_300a4644;
    }
    if (_DAT_300a4294 != DAT_300a4214) {
      (*DAT_300a4370)(0xb63,DAT_300a4214);
      _DAT_300a4294 = DAT_300a4214;
    }
    if (_DAT_300a4378 != DAT_300a4768) {
      (*DAT_300a4370)(0xb64,DAT_300a4768);
      _DAT_300a4378 = DAT_300a4768;
    }
    if ((((_DAT_300a4814 != DAT_300a44f8) || (_DAT_300a4818 != DAT_300a44fc)) ||
        (_DAT_300a481c != DAT_300a4500)) || (_DAT_300a4820 != DAT_300a4504)) {
      (*DAT_300a4754)(0xb66,&DAT_300a44f8);
      _DAT_300a4814 = DAT_300a44f8;
      _DAT_300a4818 = DAT_300a44fc;
      _DAT_300a481c = DAT_300a4500;
      _DAT_300a4820 = DAT_300a4504;
    }
  }
  return;
}

