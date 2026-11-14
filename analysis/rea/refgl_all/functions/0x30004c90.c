// rea decompile_all
// name: FUN_30004c90
// address: 0x30004c90
// body: available
// range: 0x30004c90-0x30004e90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __thiscall FUN_30004c90(void *this,void *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_3001faf3();
  }
  uVar5 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (this == param_1) {
    uVar5 = uVar5 + param_2;
    if (*(uint *)((int)this + 8) < uVar5) {
      FUN_3001faf3();
    }
    iVar1 = *(int *)((int)this + 8) - uVar5;
    iVar6 = -1;
    if ((iVar1 == -1) || (iVar6 = iVar1, iVar1 != 0)) {
      FUN_300059b0((int)this);
      puVar2 = (undefined4 *)(*(int *)((int)this + 4) + uVar5);
      FUN_30020240(puVar2,(undefined4 *)((int)puVar2 + iVar6),
                   (*(int *)((int)this + 8) - uVar5) - iVar6);
      uVar5 = *(int *)((int)this + 8) - iVar6;
      uVar3 = FUN_30003420(this,uVar5,'\0');
      if ((char)uVar3 != '\0') {
        *(uint *)((int)this + 8) = uVar5;
        *(undefined1 *)(uVar5 + *(int *)((int)this + 4)) = 0;
      }
    }
    if (*(uint *)((int)this + 8) < param_2) {
      param_2 = *(uint *)((int)this + 8);
    }
    if (param_2 == 0) {
      return this;
    }
    FUN_300059b0((int)this);
    FUN_30020240(*(undefined4 **)((int)this + 4),
                 (undefined4 *)((int)*(undefined4 **)((int)this + 4) + param_2),
                 *(int *)((int)this + 8) - param_2);
    uVar5 = *(int *)((int)this + 8) - param_2;
    uVar3 = FUN_30003420(this,uVar5,'\0');
    if ((char)uVar3 == '\0') {
      return this;
    }
    FUN_30005310(this,uVar5);
    return this;
  }
  if ((uVar5 != 0) && (uVar5 == *(uint *)((int)param_1 + 8))) {
    puVar2 = *(undefined4 **)((int)param_1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_3002c310;
    }
    if ((int)(uint)*(byte *)((int)puVar2 + -1) < -1) {
      iVar6 = *(int *)((int)this + 4);
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + -1) == '\0') {
          FUN_3001f8bc((char *)(iVar6 + -1));
        }
        else {
          *(char *)(iVar6 + -1) = *(char *)(iVar6 + -1) + -1;
        }
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      puVar2 = *(undefined4 **)((int)param_1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_3002c310;
      }
      *(undefined4 **)((int)this + 4) = puVar2;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
      *(char *)((int)puVar2 + -1) = *(char *)((int)puVar2 + -1) + '\x01';
      return this;
    }
  }
  uVar4 = FUN_300059a0();
  if (uVar4 < uVar5) {
    FUN_3001f8c7();
  }
  *(undefined4 *)((int)this + 8) = 0;
  if ((*(int *)((int)this + 4) == 0) || (*(char *)(*(int *)((int)this + 4) + -1) == '\0')) {
    if (uVar5 == 0) {
      FUN_300033d0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar5 <= *(uint *)((int)this + 0xc)))
    goto LAB_30004e5d;
    FUN_300033d0(this,'\x01');
  }
  else if (uVar5 == 0) {
    FUN_300033d0(this,'\x01');
    return this;
  }
  FUN_30003540(uVar5);
LAB_30004e5d:
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = &DAT_3002c310;
  }
  puVar2 = (undefined4 *)(param_2 + (int)puVar2);
  puVar7 = *(undefined4 **)((int)this + 4);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)((int)this + 8) = uVar5;
  *(undefined1 *)(uVar5 + *(int *)((int)this + 4)) = 0;
  return this;
}

