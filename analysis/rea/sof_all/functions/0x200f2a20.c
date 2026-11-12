// rea decompile_all
// name: FUN_200f2a20
// address: 0x200f2a20
// body: available
// range: 0x200f2a20-0x200f2cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200f2a20(char *param_1,int param_2,char *param_3,char *param_4,char *param_5,int *param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  FUN_200f96b0();
  piVar3 = _malloc(0x398);
  piVar6 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar6 = piVar3;
    for (iVar5 = 0xe6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    iVar5 = 0x160 - (int)param_3;
    do {
      cVar2 = *param_3;
      param_3[(int)piVar3 + iVar5] = cVar2;
      param_3 = param_3 + 1;
    } while (cVar2 != '\0');
    if (param_4 != (char *)0x0) {
      iVar5 = 0x260 - (int)param_4;
      do {
        cVar2 = *param_4;
        param_4[(int)piVar3 + iVar5] = cVar2;
        param_4 = param_4 + 1;
      } while (cVar2 != '\0');
    }
    iVar5 = 0x1e0 - (int)param_5;
    do {
      cVar2 = *param_5;
      param_5[(int)piVar3 + iVar5] = cVar2;
      param_5 = param_5 + 1;
    } while (cVar2 != '\0');
    pcVar4 = param_1;
    do {
      cVar2 = *pcVar4;
      pcVar4[(int)piVar3 + (0x2e4 - (int)param_1)] = cVar2;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    piVar3[0xd9] = param_2;
    piVar6 = piVar3 + 0xda;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *param_6;
      param_6 = param_6 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar3[0xe3] = 1;
    piVar3[1] = 1;
    piVar3[0xe5] = 0;
    iVar5 = FUN_200eee70(piVar3);
    if (iVar5 == 0) {
      FUN_200f9d32();
      Ordinal_116();
      return (int *)0x0;
    }
    iVar5 = FUN_200edb10(piVar3);
    if (iVar5 == 0) {
      FUN_200eef10(piVar3);
      FUN_200f9d32(piVar3);
      Ordinal_116();
      return (int *)0x0;
    }
    piVar1 = piVar3 + 6;
    iVar5 = FUN_200f3480(piVar1);
    if (iVar5 == 0) {
      FUN_200edb50(piVar3);
      FUN_200eef10(piVar3);
      FUN_200f9d32(piVar3);
      Ordinal_116();
      return (int *)0x0;
    }
    iVar5 = FUN_200f3510(piVar1,param_1,param_2);
    if (iVar5 == 0) {
      FUN_200f35f0(piVar1);
      FUN_200edb50(piVar3);
      FUN_200eef10(piVar3);
      FUN_200f9d32(piVar3);
      Ordinal_116();
      return (int *)0x0;
    }
    piVar3[2] = param_7;
    piVar3[3] = param_8;
    piVar3[4] = param_9;
    piVar3[5] = param_10;
    if (param_8 == 0) {
      piVar6 = piVar3 + 0x58;
      iVar5 = FUN_200faaf0(s_0123456789_20159b44,(int)(char)piVar3[0x58]);
      bVar7 = iVar5 != 0;
      cVar2 = (char)*piVar6;
      while (cVar2 != '\0') {
        iVar5 = FUN_200faaf0(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_20159af8,(int)cVar2);
        if (iVar5 == 0) {
          bVar7 = true;
        }
        pcVar4 = (char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 1);
        cVar2 = *pcVar4;
      }
      piVar6 = piVar3 + 0x58;
      if (bVar7) {
        piVar6 = (int *)&DAT_2011d31c;
      }
      FUN_200f3a80(piVar1,s_NICK__s_20159af0,piVar6);
      FUN_200f3a80(piVar1,s_USER__s__s__s___s_20159ad0,piVar3 + 0x98,s_127_0_0_1_20159ae4,
                   piVar3 + 0xb9,piVar3 + 0x78);
    }
    else {
      FUN_200f3a80(piVar1,s_USRIP_20159b60);
    }
    piVar6 = piVar3;
    if (param_11 != 0) {
      do {
        FUN_200f2ce0(piVar3,0);
        FUN_200f96a0(10);
      } while (piVar3[1] != 0);
      if (*piVar3 == 0) {
        if ((code *)piVar3[0xdb] != (code *)0x0) {
          (*(code *)piVar3[0xdb])(piVar3,&DAT_2015ee44,piVar3[0xde]);
        }
        if (*piVar3 != 0) {
          FUN_200f3990(piVar1,s_QUIT__Later__20159b50);
          FUN_200f36d0(piVar1);
        }
        FUN_200eef10(piVar3);
        FUN_200edb50(piVar3);
        FUN_200f35f0(piVar1);
        FUN_200f0380(piVar3);
        FUN_200f9d32(piVar3);
        Ordinal_116();
        piVar6 = (int *)0x0;
      }
    }
  }
  return piVar6;
}

