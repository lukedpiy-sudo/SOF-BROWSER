// rea decompile_all
// name: FUN_300232b2
// address: 0x300232b2
// body: available
// range: 0x300232b2-0x30023551 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_300232b2(void *this,int *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  uint *puVar6;
  void *local_8;
  
  local_8 = this;
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_3001fcd0((undefined *)param_1);
    }
    else {
      puVar6 = param_2;
      if (DAT_300abb34 == 3) {
        do {
          if (puVar6 < (uint *)0xffffffe1) {
            puVar2 = (uint *)FUN_30021c32((int)param_1);
            if (puVar2 == (uint *)0x0) {
LAB_300233a9:
              if (puVar6 == (uint *)0x0) {
                puVar6 = (uint *)0x1;
              }
              puVar6 = (uint *)((int)puVar6 + 0xfU & 0xfffffff0);
              piVar1 = HeapReAlloc(DAT_300abb30,0,param_1,(SIZE_T)puVar6);
            }
            else {
              if (DAT_300abb2c < puVar6) {
LAB_30023362:
                if (puVar6 == (uint *)0x0) {
                  puVar6 = (uint *)0x1;
                }
                puVar6 = (uint *)((int)puVar6 + 0xfU & 0xfffffff0);
                piVar1 = HeapAlloc(DAT_300abb30,0,(SIZE_T)puVar6);
                if (piVar1 != (int *)0x0) {
                  puVar4 = (uint *)(param_1[-1] - 1U);
                  if (puVar6 <= (uint *)(param_1[-1] - 1U)) {
                    puVar4 = puVar6;
                  }
                  FUN_30021620(piVar1,param_1,(uint)puVar4);
                  FUN_30021c5d(puVar2,(int)param_1);
                }
              }
              else {
                iVar3 = FUN_3002243b(puVar2,(int)param_1,(int)puVar6);
                piVar1 = param_1;
                if (iVar3 == 0) {
                  piVar1 = FUN_30021f86(puVar6);
                  if (piVar1 == (int *)0x0) goto LAB_30023362;
                  puVar2 = (uint *)(param_1[-1] - 1U);
                  if (puVar6 <= (uint *)(param_1[-1] - 1U)) {
                    puVar2 = puVar6;
                  }
                  FUN_30021620(piVar1,param_1,(uint)puVar2);
                  puVar2 = (uint *)FUN_30021c32((int)param_1);
                  FUN_30021c5d(puVar2,(int)param_1);
                }
                if (piVar1 == (int *)0x0) goto LAB_30023362;
              }
              if (puVar2 == (uint *)0x0) goto LAB_300233a9;
            }
            if (piVar1 != (int *)0x0) {
              return piVar1;
            }
          }
          if (DAT_300aa4c4 == 0) {
            return (int *)0x0;
          }
          iVar3 = FUN_30021955(puVar6);
        } while (iVar3 != 0);
      }
      else if (DAT_300abb34 == 2) {
        if (param_2 < (uint *)0xffffffe1) {
          if (param_2 == (uint *)0x0) {
            puVar6 = (uint *)0x10;
          }
          else {
            puVar6 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
          }
        }
        do {
          if (puVar6 < (uint *)0xffffffe1) {
            pbVar5 = (byte *)FUN_3002298d((undefined *)param_1,&local_8,(uint *)&param_2);
            if (pbVar5 == (byte *)0x0) {
              piVar1 = HeapReAlloc(DAT_300abb30,0,param_1,(SIZE_T)puVar6);
            }
            else {
              if (puVar6 < DAT_30033dfc) {
                iVar3 = FUN_30022d55((int)local_8,(int *)param_2,pbVar5,(uint)puVar6 >> 4);
                piVar1 = param_1;
                if (iVar3 == 0) {
                  piVar1 = FUN_30022a29((uint)puVar6 >> 4);
                  if (piVar1 == (int *)0x0) goto LAB_30023497;
                  puVar2 = (uint *)((uint)*pbVar5 << 4);
                  if (puVar6 <= (uint *)((uint)*pbVar5 << 4)) {
                    puVar2 = puVar6;
                  }
                  FUN_30021620(piVar1,param_1,(uint)puVar2);
                  FUN_300229e4((int)local_8,(int)param_2,pbVar5);
                }
                if (piVar1 != (int *)0x0) {
                  return piVar1;
                }
              }
LAB_30023497:
              piVar1 = HeapAlloc(DAT_300abb30,0,(SIZE_T)puVar6);
              if (piVar1 == (int *)0x0) goto LAB_300234ef;
              puVar2 = (uint *)((uint)*pbVar5 << 4);
              if (puVar6 <= (uint *)((uint)*pbVar5 << 4)) {
                puVar2 = puVar6;
              }
              FUN_30021620(piVar1,param_1,(uint)puVar2);
              FUN_300229e4((int)local_8,(int)param_2,pbVar5);
            }
            if (piVar1 != (int *)0x0) {
              return piVar1;
            }
          }
LAB_300234ef:
          if (DAT_300aa4c4 == 0) {
            return (int *)0x0;
          }
          iVar3 = FUN_30021955(puVar6);
        } while (iVar3 != 0);
      }
      else {
        do {
          if (puVar6 < (uint *)0xffffffe1) {
            if (puVar6 == (uint *)0x0) {
              puVar6 = (uint *)0x1;
            }
            puVar6 = (uint *)((int)puVar6 + 0xfU & 0xfffffff0);
            piVar1 = HeapReAlloc(DAT_300abb30,0,param_1,(SIZE_T)puVar6);
            if (piVar1 != (int *)0x0) {
              return piVar1;
            }
          }
          if (DAT_300aa4c4 == 0) {
            return (int *)0x0;
          }
          iVar3 = FUN_30021955(puVar6);
        } while (iVar3 != 0);
      }
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

