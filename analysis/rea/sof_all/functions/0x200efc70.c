// rea decompile_all
// name: FUN_200efc70
// address: 0x200efc70
// body: available
// range: 0x200efc70-0x200eff41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200efc70(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  DWORD DVar7;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  DVar7 = GetTickCount();
  piVar1 = *(int **)(param_1 + 900);
  do {
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              do {
                                piVar3 = piVar1;
                                if (piVar3 == (int *)0x0) {
                                  return;
                                }
                                piVar1 = (int *)piVar3[9];
                              } while (DVar7 <= (uint)piVar3[1]);
                              iVar2 = *piVar3;
                              if (iVar2 != 0) break;
                              local_50 = 0;
                              local_4c = 0;
                              local_48 = 0;
                              local_44 = 0;
                              local_40 = 0;
                              FUN_200eff50(param_1,piVar3,&local_50);
                            }
                            if (iVar2 != 1) break;
                            local_ac = piVar3[2];
                            local_b0 = 0;
                            FUN_200eff50(param_1,piVar3,&local_b0);
                          }
                          if (iVar2 != 2) break;
                          local_a4 = piVar3[2];
                          local_a8 = 0;
                          local_a0 = 0;
                          FUN_200eff50(param_1,piVar3,&local_a8);
                        }
                        if (iVar2 != 3) break;
                        local_60 = piVar3[2];
                        local_64 = 0;
                        local_5c = 0;
                        local_58 = 0;
                        local_54 = 0;
                        FUN_200eff50(param_1,piVar3,&local_64);
                      }
                      if (iVar2 != 4) break;
                      local_38 = piVar3[2];
                      local_3c = 0;
                      local_34 = 0;
                      local_30 = 0;
                      local_2c = 0;
                      local_28 = 0;
                      local_24 = 0;
                      FUN_200eff50(param_1,piVar3,&local_3c);
                    }
                    if (iVar2 != 10) break;
                    local_80 = piVar3[2];
                    local_84 = 0;
                    local_7c = 0;
                    local_78 = 0;
                    FUN_200eff50(param_1,piVar3,&local_84);
                  }
                  if (iVar2 != 0xb) break;
                  FUN_200eff50(param_1,piVar3,local_10);
                }
                if (iVar2 != 5) break;
                local_98 = piVar3[2];
                local_9c = 0;
                local_94 = 0;
                FUN_200eff50(param_1,piVar3,&local_9c);
              }
              if (iVar2 != 6) break;
              local_70 = piVar3[3];
              local_6c = piVar3[2];
              local_74 = 0;
              local_68 = 0;
              FUN_200eff50(param_1,piVar3,&local_74);
            }
            if (iVar2 != 7) break;
            FUN_200eff50(param_1,piVar3,0);
          }
          if (iVar2 != 8) break;
          local_1c = piVar3[2];
          local_18 = 0;
          local_14 = 0;
          FUN_200eff50(param_1,piVar3,local_20);
        }
        if (iVar2 != 9) break;
        local_8c = piVar3[2];
        local_88 = piVar3[3];
        local_90 = 0;
        FUN_200eff50(param_1,piVar3,&local_90);
      }
    } while (iVar2 != 0xc);
    piVar6 = *(int **)(param_1 + 900);
    piVar5 = (int *)0x0;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      if (piVar4 == piVar3) {
        if (*(int **)(param_1 + 900) == piVar4) {
          *(int *)(param_1 + 900) = piVar4[9];
        }
        if (*(int **)(param_1 + 0x388) == piVar4) {
          *(int **)(param_1 + 0x388) = piVar5;
        }
        if (piVar5 != (int *)0x0) {
          piVar5[9] = piVar4[9];
        }
        FUN_200f9d32(piVar4[7]);
        FUN_200f9d32(piVar4[2]);
        FUN_200f9d32(piVar4[3]);
        FUN_200f9d32(piVar4);
        break;
      }
      piVar5 = piVar4;
      piVar6 = (int *)piVar4[9];
    }
  } while( true );
}

