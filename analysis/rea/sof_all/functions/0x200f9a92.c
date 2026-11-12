// rea decompile_all
// name: FUN_200f9a92
// address: 0x200f9a92
// body: available
// range: 0x200f9a92-0x200f9d31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_200f9a92(LPVOID param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_ECX;
  uint uVar7;
  undefined4 local_8;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = _malloc(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_200f9d32(param_1);
    }
    else {
      uVar7 = param_2;
      if (DAT_20408b68 == 3) {
        do {
          if (uVar7 < 0xffffffe1) {
            iVar2 = FUN_200fd0b3(param_1);
            if (iVar2 == 0) {
LAB_200f9b89:
              if (uVar7 == 0) {
                uVar7 = 1;
              }
              uVar7 = uVar7 + 0xf & 0xfffffff0;
              pvVar4 = HeapReAlloc(DAT_20408b64,0,param_1,uVar7);
            }
            else {
              if (DAT_20408b84 < uVar7) {
LAB_200f9b42:
                if (uVar7 == 0) {
                  uVar7 = 1;
                }
                uVar7 = uVar7 + 0xf & 0xfffffff0;
                pvVar4 = HeapAlloc(DAT_20408b64,0,uVar7);
                if (pvVar4 != (LPVOID)0x0) {
                  uVar5 = *(int *)((int)param_1 + -4) - 1;
                  if (uVar7 <= uVar5) {
                    uVar5 = uVar7;
                  }
                  FUN_200fe470(pvVar4,param_1,uVar5);
                  FUN_200fd0de(iVar2,param_1);
                }
              }
              else {
                iVar3 = FUN_200fd8bc(iVar2,param_1,uVar7);
                pvVar4 = param_1;
                if (iVar3 == 0) {
                  pvVar4 = (LPVOID)FUN_200fd407(uVar7);
                  if (pvVar4 == (LPVOID)0x0) goto LAB_200f9b42;
                  uVar5 = *(int *)((int)param_1 + -4) - 1;
                  if (uVar7 <= uVar5) {
                    uVar5 = uVar7;
                  }
                  FUN_200fe470(pvVar4,param_1,uVar5);
                  iVar2 = FUN_200fd0b3(param_1);
                  FUN_200fd0de(iVar2,param_1);
                }
                if (pvVar4 == (LPVOID)0x0) goto LAB_200f9b42;
              }
              if (iVar2 == 0) goto LAB_200f9b89;
            }
            if (pvVar4 != (LPVOID)0x0) {
              return pvVar4;
            }
          }
          if (DAT_2040841c == 0) {
            return (void *)0x0;
          }
          iVar2 = FUN_200fe27f(uVar7);
        } while (iVar2 != 0);
      }
      else if (DAT_20408b68 == 2) {
        local_8 = in_ECX;
        if (param_2 < 0xffffffe1) {
          if (param_2 == 0) {
            uVar7 = 0x10;
          }
          else {
            uVar7 = param_2 + 0xf & 0xfffffff0;
          }
        }
        do {
          if (uVar7 < 0xffffffe1) {
            pbVar6 = (byte *)FUN_200fde0e(param_1,&local_8,&param_2);
            if (pbVar6 == (byte *)0x0) {
              pvVar4 = HeapReAlloc(DAT_20408b64,0,param_1,uVar7);
            }
            else {
              if (uVar7 < DAT_2015d28c) {
                iVar2 = FUN_200fe1d6(local_8,param_2,pbVar6,uVar7 >> 4);
                pvVar4 = param_1;
                if (iVar2 == 0) {
                  pvVar4 = (LPVOID)FUN_200fdeaa(uVar7 >> 4);
                  if (pvVar4 == (LPVOID)0x0) goto LAB_200f9c77;
                  uVar5 = (uint)*pbVar6 << 4;
                  if (uVar7 <= (uint)*pbVar6 << 4) {
                    uVar5 = uVar7;
                  }
                  FUN_200fe470(pvVar4,param_1,uVar5);
                  FUN_200fde65(local_8,param_2,pbVar6);
                }
                if (pvVar4 != (LPVOID)0x0) {
                  return pvVar4;
                }
              }
LAB_200f9c77:
              pvVar4 = HeapAlloc(DAT_20408b64,0,uVar7);
              if (pvVar4 == (LPVOID)0x0) goto LAB_200f9ccf;
              uVar5 = (uint)*pbVar6 << 4;
              if (uVar7 <= (uint)*pbVar6 << 4) {
                uVar5 = uVar7;
              }
              FUN_200fe470(pvVar4,param_1,uVar5);
              FUN_200fde65(local_8,param_2,pbVar6);
            }
            if (pvVar4 != (LPVOID)0x0) {
              return pvVar4;
            }
          }
LAB_200f9ccf:
          if (DAT_2040841c == 0) {
            return (void *)0x0;
          }
          iVar2 = FUN_200fe27f(uVar7);
        } while (iVar2 != 0);
      }
      else {
        do {
          if (uVar7 < 0xffffffe1) {
            if (uVar7 == 0) {
              uVar7 = 1;
            }
            uVar7 = uVar7 + 0xf & 0xfffffff0;
            pvVar4 = HeapReAlloc(DAT_20408b64,0,param_1,uVar7);
            if (pvVar4 != (LPVOID)0x0) {
              return pvVar4;
            }
          }
          if (DAT_2040841c == 0) {
            return (void *)0x0;
          }
          iVar2 = FUN_200fe27f(uVar7);
        } while (iVar2 != 0);
      }
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

