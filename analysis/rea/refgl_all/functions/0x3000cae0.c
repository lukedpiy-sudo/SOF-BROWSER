// rea decompile_all
// name: FUN_3000cae0
// address: 0x3000cae0
// body: available
// range: 0x3000cae0-0x3000ced5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3000cae0(float *param_1)

{
  bool bVar1;
  undefined4 in_EAX;
  char *pcVar2;
  int *piVar3;
  float fVar4;
  float local_c [3];
  
  if (((uint)param_1[0xe] & 8) == 0) {
    FUN_300062a0(0x2100);
    if (((uint)param_1[0xe] & 0x400) == 0) {
      if (((uint)param_1[0xe] & 0x200) == 0) {
        FUN_3000d710(DAT_3008fcd4,0x302,0x303);
        FUN_3000d880(DAT_3008fcd4,0xbe2);
        DAT_3008fb88 = 3;
      }
      else {
        FUN_3000d740(DAT_3008fcd4,0xbc0);
        FUN_3000d710(DAT_3008fcd4,1,1);
        FUN_3000d880(DAT_3008fcd4,0xbe2);
        DAT_3008fb88 = 2;
      }
    }
    else {
      FUN_3000d740(DAT_3008fcd4,0xbc0);
      DAT_300a4610 = 0;
      DAT_300a43fc = 0x301;
      if ((DAT_300a4388 == 0) && (DAT_300a45d8 == 0x301)) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      FUN_3000d880(DAT_3008fcd4,0xbe2);
      DAT_3008fb88 = 1;
    }
    FUN_3000c420((int)param_1);
  }
  else {
    FUN_30008ff0(param_1,local_c,
                 CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((int)param_1 + 0x3a)));
    FUN_300062a0(0x2100);
    if (((uint)param_1[0xe] & 0x400) == 0) {
      if (((uint)param_1[0xe] & 0x200) == 0) {
        FUN_3000d710(DAT_3008fcd4,0x302,0x303);
        FUN_3000d880(DAT_3008fcd4,0xbe2);
        DAT_3008fb88 = 3;
        FUN_3000c4a0((int)param_1,local_c);
      }
      else {
        FUN_3000d740(DAT_3008fcd4,0xbc0);
        FUN_3000d710(DAT_3008fcd4,1,1);
        FUN_3000d880(DAT_3008fcd4,0xbe2);
        DAT_3008fb88 = 2;
        FUN_3000c4a0((int)param_1,local_c);
      }
    }
    else {
      FUN_3000d740(DAT_3008fcd4,0xbc0);
      DAT_300a4610 = 0;
      DAT_300a43fc = 0x301;
      if ((DAT_300a4388 == 0) && (DAT_300a45d8 == 0x301)) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      FUN_3000d880(DAT_3008fcd4,0xbe2);
      DAT_3008fb88 = 1;
      FUN_3000c4a0((int)param_1,local_c);
    }
  }
  fVar4 = DAT_3008fc64;
  if ((char *)param_1[0xd] != (char *)0x0) {
    if (param_1[0xc] == 0.0) {
      pcVar2 = FUN_30007380((char *)param_1[0xd],1,'\0','\x01');
      param_1[0xc] = (float)pcVar2;
      if (pcVar2 == (char *)0x0) {
        param_1[0xc] = DAT_3008fc64;
      }
    }
    fVar4 = param_1[0xc];
  }
  FUN_30006400((int)fVar4);
  bVar1 = false;
  if ((((uint)param_1[0xe] & 0x100) != 0) &&
     ((*(float *)(DAT_3008fce0 + 0x18) != 0.0 || (*(float *)(DAT_3008fd8c + 0x18) != 0.0)))) {
    (*DAT_300a4614)(*(undefined4 *)(DAT_3008fce0 + 0x18),*(undefined4 *)(DAT_3008fd8c + 0x18));
    DAT_300a46e0 = DAT_300a46e0 | 0x100;
    if ((DAT_300a4588 & 0x100) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    bVar1 = true;
  }
  if ((int)param_1[0xf] < 0) {
    if (*(int *)(DAT_3008fc6c + 0xcc) == 0) {
      param_1[0xf] = 0.0;
    }
    else {
      piVar3 = FUN_3000a400(param_1,DAT_3008fc6c);
      param_1[0xf] = (float)piVar3[0xb];
    }
  }
  if (param_1[0xf] != 0.0) {
    FUN_30012990((int)param_1[0xf],param_1,DAT_3008fb88,(float *)0x0);
  }
  FUN_3001b650();
  (*DAT_300a4710)(7);
  if (((uint)param_1[0xe] & 2) == 0) {
    if (((uint)param_1[0xe] & 4) != 0) {
      FUN_3000c950(param_1);
    }
  }
  else {
    FUN_3000c560(param_1);
  }
  (*DAT_300a45f4)();
  if ((param_1[0xf] != 0.0) &&
     (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, (DAT_300a4588 & 0x10) == 0)) {
    *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
  }
  if ((bVar1) && (DAT_300a46e0 = DAT_300a46e0 & 0xfffffeff, (DAT_300a4588 & 0x100) == 0)) {
    *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
  }
  FUN_3000d880(DAT_3008fcd4,0xbc0);
  FUN_3000d6d0(DAT_3008fcd4,0x204,0.05);
  return;
}

