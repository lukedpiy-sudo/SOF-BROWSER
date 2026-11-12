// rea decompile_all
// name: FUN_500c2f80
// address: 0x500c2f80
// body: available
// range: 0x500c2f80-0x500c33ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c2f80(int *param_1,int param_2)

{
  char *pcVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  
  if ((float)param_1[0xd9] == 0.0) {
    if (((param_1[0x6b] != 0) || ((short)param_1[0x6c] != 0)) &&
       ((*(byte *)(param_2 + 0x118) & 4) == 0)) {
      if ((short)param_1[0x6c] == 0) {
        (*DAT_5015ca34)(param_2,&DAT_50142f40,param_1[0x6b]);
      }
      else {
        (*DAT_5015cab0)(param_2,(short)param_1[0x6c]);
      }
      iVar4 = param_1[0xd4];
      if (iVar4 == 0) {
        iVar4 = (*DAT_5015c9f4)(s_Misc_Talk_wav_50147844,0x3f19999a,0x3f800000,0,0);
      }
      (*DAT_5015ca48)(param_2,0,iVar4);
    }
    iVar4 = DAT_5015c938;
    piVar6 = DAT_5015cca0;
    if (param_1[0x74] != 0) {
      piVar7 = (int *)0x0;
      while (pcVar1 = (char *)param_1[0x74], iVar4 = DAT_5015c938, piVar6 = DAT_5015cca0,
            pcVar1 != (char *)0x0) {
        piVar3 = DAT_5015cca0;
        if (piVar7 != (int *)0x0) {
          piVar3 = piVar7 + 0x119;
        }
        piVar7 = piVar3;
        if (DAT_5015cca0 + DAT_5015c938 * 0x119 <= piVar7) break;
        while (((piVar7[0x1e] == 0 || ((char *)piVar7[0x72] == (char *)0x0)) ||
               (iVar5 = __strcmpi((char *)piVar7[0x72],pcVar1), iVar4 = DAT_5015c938,
               piVar6 = DAT_5015cca0, iVar5 != 0))) {
          piVar7 = piVar7 + 0x119;
          if (piVar6 + iVar4 * 0x119 <= piVar7) goto LAB_500c32bd;
        }
        FUN_500c3880(piVar7);
        if (param_1[0x1e] == 0) {
          (*DAT_5015ca24)(s_entity_was_removed_while_using_k_501514d0);
          return;
        }
      }
    }
LAB_500c32bd:
    if (param_1[0x71] != 0) {
      piVar7 = (int *)0x0;
      do {
        do {
          pcVar1 = (char *)param_1[0x71];
          if (pcVar1 == (char *)0x0) {
            return;
          }
          piVar3 = piVar6;
          if (piVar7 != (int *)0x0) {
            piVar3 = piVar7 + 0x119;
          }
          piVar7 = piVar3;
          if (piVar6 + iVar4 * 0x119 <= piVar7) {
            return;
          }
          while (((piVar7[0x1e] == 0 || ((char *)piVar7[0x72] == (char *)0x0)) ||
                 (iVar5 = __strcmpi((char *)piVar7[0x72],pcVar1), iVar4 = DAT_5015c938,
                 piVar6 = DAT_5015cca0, iVar5 != 0))) {
            piVar7 = piVar7 + 0x119;
            if (piVar6 + iVar4 * 0x119 <= piVar7) {
              return;
            }
          }
          iVar4 = __strcmpi((char *)piVar7[0x6d],s_func_areaportal_5014268c);
        } while ((iVar4 == 0) &&
                ((iVar5 = __strcmpi((char *)param_1[0x6d],s_func_door_501420e8),
                 iVar4 = DAT_5015c938, piVar6 = DAT_5015cca0, iVar5 == 0 ||
                 (iVar5 = __strcmpi((char *)param_1[0x6d],s_func_door_rotating_501477cc),
                 iVar4 = DAT_5015c938, piVar6 = DAT_5015cca0, iVar5 == 0))));
        if (piVar7 == param_1) {
          (*DAT_5015ca24)(s_WARNING__Entity_used_itself__50150d44);
        }
        else if ((code *)piVar7[0xb1] != (code *)0x0) {
          (*(code *)piVar7[0xb1])(piVar7,param_1,param_2);
        }
        iVar4 = DAT_5015c938;
        piVar6 = DAT_5015cca0;
      } while (param_1[0x1e] != 0);
      (*DAT_5015ca24)(s_entity_was_removed_while_using_t_50150d1c);
    }
    return;
  }
  lVar8 = __ftol();
  iVar4 = (int)lVar8 + 1;
  piVar6 = DAT_5015cca0 + iVar4 * 0x119;
  do {
    if (DAT_5015c938 <= iVar4) {
      if (iVar4 == DAT_5015d8cc) {
        (*DAT_5015cb10)(s_ED_Alloc__no_free_edicts_50151528);
      }
      DAT_5015c938 = DAT_5015c938 + 1;
      FUN_500c35c0(piVar6);
LAB_500c3045:
      piVar6[0x6d] = (int)s_DelayedUse_5015151c;
      fVar2 = DAT_5015ccdc + (float)param_1[0xd9];
      piVar6[0xae] = (int)FUN_500c2f60;
      piVar6[0xcb] = param_2;
      piVar6[0xad] = (int)fVar2;
      if (param_2 == 0) {
        (*DAT_5015ca24)(s_Think_Delay_with_no_activator_501514fc);
      }
      piVar6[0x6b] = param_1[0x6b];
      piVar6[0x71] = param_1[0x71];
      piVar6[0x74] = param_1[0x74];
      piVar6[0x75] = param_1[0x75];
      return;
    }
    if ((piVar6[0x1e] == 0) &&
       (((float)piVar6[0x6a] < 2.0 || (0.5 < DAT_5015ccdc - (float)piVar6[0x6a])))) {
      piVar6[0x1e] = 1;
      piVar6[0x6d] = (int)s_noclass_50142f34;
      iVar4 = (int)piVar6 - (int)DAT_5015cca0;
      piVar6[0xa4] = 0;
      piVar6[0xa2] = 0x3f800000;
      piVar6[0xa1] = 0x3f800000;
      piVar6[0xa3] = 0x3f800000;
      *piVar6 = iVar4 / 0x464;
      piVar6[0xa5] = 0x3f000000;
      piVar6[9] = -1;
      piVar6[0x59] = 0;
      piVar6[0xf4] = 0;
      piVar6[0xf3] = 0;
      piVar6[0xc6] = 0;
      piVar6[0x5a] = 0x447a0000;
      piVar6[0x5b] = 0x447a0000;
      piVar6[0x5c] = 0x447a0000;
      piVar6[0x5d] = -0x3b860000;
      piVar6[0x5e] = -0x3b860000;
      piVar6[0x5f] = -0x3b860000;
      piVar6[0x60] = 0x461c4000;
      piVar6[0x61] = 0x461c4000;
      piVar6[0x62] = 0x461c4000;
      piVar6[99] = -1;
      goto LAB_500c3045;
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 0x119;
  } while( true );
}

