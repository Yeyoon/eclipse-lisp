/* Generated by Eclipse Common Lisp 1.1-HOSTED on cad0.
   Tuesday the seventh of April, 1998, 5:24:33 pm CDT. */
#include <eclipse.h>

clObject cl1PLUS_FUNC(clProto), cl1MINUS_FUNC(clProto),
  clApply(clProto), clAref(clProto), cl_SETF_Aref(clProto),
  clCanonicalizeSequenceTypeSpecifier(clProto),
  clCanonicalizeSpecializer(clProto), clCar(clProto), clCdr(clProto),
  clCharpSimpleBaseString __P((clCharp)), clCheckKeys(clProto),
  clCheckTypef(clProto), clCompare(clProto), clCons(clProto),
  clConsp(clProto), clEnsureGenericFunction(clProto),
  clEnsureMethod(clProto), clEq(clProto), clEql(clProto),
  clExpandType(clProto), clExtraArgs(clProto), clFindClass(clProto),
  clFirst(clProto), clKeyArg(clProto), clLast(clProto),
  clLength(clProto), clList(clProto), clListMerge(clProto),
  clListMergesort(clProto), clListp(clProto), clMakeKeyword(clProto),
  clMakeVector(clProto), clMissingArgs(clProto), clNot(clProto),
  clNthcdr(clProto), clNull(clProto), clQuicksortList(clProto),
  clQuicksortVector(clProto), clRest(clProto), clRplacd(clProto),
  clSecond(clProto), clSplit1(clProto), clSplit2(clProto),
  clValues(clProto);

extern clObject clADD, clCLASS_PROTOTYPE, clCOERCE_TO_LIST, clELT,
  clEQ_NUMBER, clGE, clKEY, clLIST, clLIST_MERGE, clLIST_MERGESORT,
  clLT, clMERGE, clMETHOD_FUNCTION, clMULT, clNO_NEXT_METHOD, clPRED,
  clQUICKSORT_VECTOR, clREPLACE, clRESULT_VECTOR, clSEQUENCE1,
  clSEQUENCE2, clSETF, clSORT, clSPLIT1, clSPLIT2, clSTABLE_SORT,
  clSTANDARD_METHOD, clVECTOR_MERGE;

static clObject CONS_0, CONS_1, CONS_2, CONS_3, CONS_4, CONS_5, CONS_6,
  CONS_7, I_0, I_1, I_2, I_3, I_4, I_5, I_6, keyDECLARATIONS,
  keyDOCUMENTATION, keyFUNCTION, keyHEADER, keyKEY, keyLAMBDA_LIST,
  keyQUALIFIERS, keySPECIALIZERS, STR_DECLARATIONS__4,
  STR_DOCUMENTATION__5, STR_FUNCTION__3, STR_HEADER__7, STR_KEY__6,
  STR_LAMBDA_LIST__1, STR_QUALIFIERS__0, STR_SPECIALIZERS__2;

clObject clVectorMerge_clT_clT_clT_clT_clT clVdecl(_ap)
{ clObject *L_args395 = clMakeBinding(),
  *L_methods396 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args395,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods396,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form400, result_vector, sequence1, sequence2, pred, key;
    clSetq(L_form400, *L_args395);
    if (clTrue(L_form400))
      { clObject L_top401;
        clSetq(L_top401, clCar(L_form400, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_form400, clCdr(L_0, clEOA)); }
        clSetq(result_vector, L_top401); }
    else clSetq(result_vector, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form400))
      { clObject L_top402;
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_top402, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_form400, clCdr(L_0, clEOA)); }
        clSetq(sequence1, L_top402); }
    else clSetq(sequence1, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form400))
      { clObject L_top403;
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_top403, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_form400, clCdr(L_0, clEOA)); }
        clSetq(sequence2, L_top403); }
    else clSetq(sequence2, clMissingArgs(I_3, clEOA));
    if (clTrue(L_form400))
      { clObject L_top404;
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_top404, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_form400, clCdr(L_0, clEOA)); }
        clSetq(pred, L_top404); }
    else clSetq(pred, clMissingArgs(I_4, clEOA));
    if (clTrue(L_form400))
      { clObject L_top405;
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_top405, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form400);
          clSetq(L_form400, clCdr(L_0, clEOA)); }
        clSetq(key, L_top405); }
    else clSetq(key, clMissingArgs(I_5, clEOA));
    if (clTrue(L_form400))
      { clObject L_0;
        clSetq(L_0, L_form400);
        clExtraArgs(L_0, clEOA); }
    { clObject elt1, elt2;
      clSetq(elt1, clNIL);
      clSetq(elt2, clNIL);
      { clObject listp1, listp2;
        clSetq(listp1, clListp(sequence1, clEOA));
        clSetq(listp2, clListp(sequence2, clEOA));
        { clObject state1, state2;
          clSetq(state1, (clTrue(listp1) ? sequence1 : I_0));
          clSetq(state2, (clTrue(listp2) ? sequence2 : I_0));
          { clObject end1, end2;
            clSetq(end1,
                   (clTrue(listp1) ? clNIL :
                    clLength(sequence1, clEOA)));
            clSetq(end2,
                   (clTrue(listp2) ? clNIL :
                    clLength(sequence2, clEOA)));
            { clObject index, L_g0;
              clSetq(index, I_0);
              clSetq(L_g0, clLength(result_vector, clEOA));
              clLabel(NEXT_LOOP);
              if (clTrue(clFuncallFunction(clSymbolFunctionValue(clGE),
                                           index,
                                           L_g0,
                                           clEOA)))
                goto END_LOOP;
              { clObject L_test;
                { clObject L_g406;
                  { clObject L_1, L_0;
                    clSetq(L_0, state1);
                    clSetq(L_1, end1);
                    clSetq(L_g406, clEql(L_0, L_1, clEOA)); }
                  if (clTrue(L_g406))
                    clSetq(L_test, L_g406);
                  else
                    { clObject L_test__R2;
                      { clObject L_0;
                        { clObject L_1, L_0__R1;
                          clSetq(L_0__R1, state2);
                          clSetq(L_1, end2);
                          clSetq(L_0, clEql(L_0__R1, L_1, clEOA)); }
                        clSetq(L_test__R2, clNot(L_0, clEOA)); }
                      if (clTrue(L_test__R2))
                      { clObject L_1, L_0;
                        if (clTrue(listp2))
                        { clObject L_0__R1;
                          clSetq(L_0__R1, state2);
                          clSetq(L_0,
                                 clSetq(elt2,
                                        clCar(L_0__R1, clEOA))); }
                        else
                        { clObject L_1__R1;
                          clSetq(L_1__R1, state2);
                          clSetq(L_0,
                                 clSetq(elt2,
                                        clFuncallFunction(clSymbolFunctionValue(clELT),
                                                          sequence2,
                                                          L_1__R1,
                                                          clEOA))); }
                        if (clTrue(listp1))
                        { clObject L_0__R1;
                          clSetq(L_0__R1, state1);
                          clSetq(L_1,
                                 clSetq(elt1,
                                        clCar(L_0__R1, clEOA))); }
                        else
                        { clObject L_1__R1;
                          clSetq(L_1__R1, state1);
                          clSetq(L_1,
                                 clSetq(elt1,
                                        clFuncallFunction(clSymbolFunctionValue(clELT),
                                                          sequence1,
                                                          L_1__R1,
                                                          clEOA))); }
                        clSetq(L_test,
                               clCompare(L_0,
                                         L_1,
                                         pred,
                                         key,
                                         clEOA)); }
                      else
                      clSetq(L_test, clNIL); } }
                if (clTrue(L_test))
                  { { clObject L_value407;
                      clSetq(L_value407, elt2);
                      clFuncallFunction(clFdefinition(CONS_5, clEOA),
                                        L_value407,
                                        result_vector,
                                        index,
                                        clEOA); }
                    if (clTrue(listp2))
                      { clObject L_0;
                        clSetq(L_0, state2);
                        clSetq(state2, clCdr(L_0, clEOA)); }
                    else
                      { clObject L_0;
                        clSetq(L_0, state2);
                        clSetq(state2, cl1PLUS_FUNC(L_0, clEOA)); } }
                else
                  { { clObject L_value411;
                      clSetq(L_value411, elt1);
                      clFuncallFunction(clFdefinition(CONS_5, clEOA),
                                        L_value411,
                                        result_vector,
                                        index,
                                        clEOA); }
                    if (clTrue(listp1))
                      { clObject L_0;
                        clSetq(L_0, state1);
                        clSetq(state1, clCdr(L_0, clEOA)); }
                    else
                      { clObject L_0;
                        clSetq(L_0, state1);
                        clSetq(state1, cl1PLUS_FUNC(L_0, clEOA)); } } }
              { clObject L_0;
                clSetq(L_0, index);
                clSetq(index, cl1PLUS_FUNC(L_0, clEOA)); }
              goto NEXT_LOOP;
              clLabel(END_LOOP); } } } } }
    return(clValues1(result_vector)); } }

clObject clListMerge clVdecl(_ap)
{ clObject list1, list2, pred, key;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(pred,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_3, clEOA)));
    clSetq(key,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_4, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject result, splice;
    clSetq(result, clCons(clNIL, clNIL, clEOA));
    clSetq(splice, result);
    clLabel(l_ITERATE415);
    { clObject L_test;
      { clObject L_g416;
        clSetq(L_g416, clNull(list1, clEOA));
        clSetq(L_test,
               (clTrue(L_g416) ? L_g416 : clNull(list2, clEOA))); }
      if (clTrue(L_test))
        { { clObject L_1;
            clSetq(L_1, (clTrue(list1) ? list1 : list2));
            clRplacd(splice, L_1, clEOA); }
          { clObject L_0;
            clSetq(L_0, clCdr(result, clEOA));
            return(clValues(L_0, clLast(splice, clEOA), clEOA)); } } }
    { clObject lesser_list;
      { clObject L_test;
        { clObject L_1, L_0;
          clSetq(L_0, clFirst(list2, clEOA));
          clSetq(L_1, clFirst(list1, clEOA));
          clSetq(L_test, clCompare(L_0, L_1, pred, key, clEOA)); }
        if (clTrue(L_test))
          { clObject L_first_val418;
            clSetq(L_first_val418, list2);
            { clObject L_top419;
              clSetq(L_top419, clCar(list2, clEOA));
              { clObject L_0;
                clSetq(L_0, list2);
                clSetq(list2, clCdr(L_0, clEOA)); }
              (void) L_top419; }
            clSetq(lesser_list, L_first_val418); }
        else
          { clObject L_first_val420;
            clSetq(L_first_val420, list1);
            { clObject L_top421;
              clSetq(L_top421, clCar(list1, clEOA));
              { clObject L_0;
                clSetq(L_0, list1);
                clSetq(list1, clCdr(L_0, clEOA)); }
              (void) L_top421; }
            clSetq(lesser_list, L_first_val420); } }
      { clObject L_g422, L_g423;
        clSetq(L_g422, splice);
        clSetq(L_g423, lesser_list);
        clRplacd(L_g422, L_g423, clEOA);
        clSetq(splice, L_g423); } }
    goto l_ITERATE415; } }

clObject clMerge clVdecl(_ap)
{ clObject L_ap, result_type, sequence1, sequence2, predicate, L_keys,
  key;
  { clBeginParse(_ap);
    clSetq(result_type,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(sequence1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(sequence2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_3, clEOA)));
    clSetq(predicate,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_4, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clNIL);
    clCheckKeys(L_keys, CONS_7, clEOA);
    clEndParse(_ap); }
  { clObject type, stype;
    clSetq(type, clExpandType(result_type, clEOA));
    clSetq(stype, clCanonicalizeSequenceTypeSpecifier(type, clEOA));
    { clObject L_0;
      if (clTrue(clConsp(stype, clEOA)))
        { clObject L_4, L_0__R1;
          { clObject L_1__R2, L_0__R2;
            clSetq(L_0__R2, clSecond(stype, clEOA));
            { clObject L_0__R3;
              clSetq(L_0__R3, clLength(sequence1, clEOA));
              clSetq(L_1__R2,
                     clFuncallFunction(clSymbolFunctionValue(clADD),
                                       L_0__R3,
                                       clLength(sequence2, clEOA),
                                       clEOA)); }
            clSetq(L_0__R1, clMakeVector(L_0__R2, L_1__R2, clEOA)); }
          clSetq(L_4, key);
          clSetq(L_0,
                 clFuncallFunction(clSymbolFunctionValue(clVECTOR_MERGE),
                                   L_0__R1,
                                   sequence1,
                                   sequence2,
                                   predicate,
                                   L_4,
                                   clEOA)); }
      else
        { clObject L_3, L_1__R1, L_0__R1;
          clSetq(L_0__R1,
                 clFuncallFunction(clSymbolFunctionValue(clCOERCE_TO_LIST),
                                   sequence1,
                                   clEOA));
          clSetq(L_1__R1,
                 clFuncallFunction(clSymbolFunctionValue(clCOERCE_TO_LIST),
                                   sequence2,
                                   clEOA));
          clSetq(L_3, key);
          clSetq(L_0,
                 clListMerge(L_0__R1,
                             L_1__R1,
                             predicate,
                             L_3,
                             clEOA)); }
      return(clCheckTypef(L_0, type, clEOA)); } } }

clObject clListMergesort clVdecl(_ap)
{ clObject list, pred, key;
  { clBeginParse(_ap);
    clSetq(list,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(pred,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(key,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_3, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject head, n, unsorted, list1, list2, temp, last;
    clSetq(head, clCons(keyHEADER, list, clEOA));
    clSetq(n, I_1);
    clSetq(unsorted, clNIL);
    clSetq(list1, clNIL);
    clSetq(list2, clNIL);
    clSetq(temp, clNIL);
    clSetq(last, clNIL);
    clLabel(l_ITERATE424);
    if (_clEq(list1, clCdr(head, clEOA))) return(clValues1(list1));
    clSetq(unsorted, clCdr(head, clEOA));
    clSetq(last, head);
    clLabel(l_LOOP1);
    { clObject n_1;
      clSetq(n_1, cl1MINUS_FUNC(n, clEOA));
      clSetq(list1, unsorted);
      { clObject L_1;
        clSetq(L_1, list1);
        clSetq(temp, clNthcdr(n_1, L_1, clEOA)); }
      if (clTrue(temp))
        { { clObject L_0;
            clSetq(L_0, temp);
            clSetq(list2, clCdr(L_0, clEOA)); }
          { clObject L_g429;
            clSetq(L_g429, temp);
            clRplacd(L_g429, clNIL, clEOA);
            (void) clNIL; }
          { clObject L_1;
            clSetq(L_1, list2);
            clSetq(temp, clNthcdr(n_1, L_1, clEOA)); }
          if (clTrue(temp))
            { { clObject L_0;
                clSetq(L_0, temp);
                clSetq(unsorted, clCdr(L_0, clEOA)); }
              { clObject L_g433;
                clSetq(L_g433, temp);
                clRplacd(L_g433, clNIL, clEOA);
                (void) clNIL; } }
          else clSetq(unsorted, clNIL);
          { clObject L_values436, merged_head, merged_last;
            { clMultipleValueCall(MVC);
              clSetq(MVC, clSymbolFunctionValue(clLIST));
              { clObject L_1, L_0;
                clSetq(L_0, list1);
                clSetq(L_1, list2);
                clListMerge(L_0, L_1, pred, key, clEOA); }
              clAccumulateValues(MVC);
              clSetq(L_values436, clMultipleValueFuncall(MVC)); }
            clSetq(merged_head, clCar(L_values436, clEOA));
            { clObject L_0;
              { clObject L_0__R1;
                clSetq(L_0__R1, L_values436);
                clSetq(L_0,
                       clSetq(L_values436, clCdr(L_0__R1, clEOA))); }
              clSetq(merged_last, clCar(L_0, clEOA)); }
            { clObject L_g437;
              clSetq(L_g437, last);
              clRplacd(L_g437, merged_head, clEOA);
              (void) merged_head; }
            clSetq(last, merged_last); }
          { clObject L_test__R1;
            { clObject L_0;
              clSetq(L_0, unsorted);
              clSetq(L_test__R1, clNull(L_0, clEOA)); }
            if (clTrue(L_test__R1)) clLocalReturn(NIL); } }
      else
        { { clObject L_g440, L_g441;
            clSetq(L_g440, last);
            clSetq(L_g441, list1);
            clRplacd(L_g440, L_g441, clEOA);
            (void) L_g441; }
          clLocalReturn(NIL); } }
    goto l_LOOP1;
    clBlockEnd(NIL);
    { clObject L_value442;
      clSetq(L_value442,
             clFuncallFunction(clSymbolFunctionValue(clMULT),
                               I_2,
                               n,
                               clEOA));
      clSetq(n, L_value442); }
    goto l_ITERATE424; } }

clObject clStableSort clVdecl(_ap)
{ clObject L_ap, sequence, predicate, L_keys, key;
  { clBeginParse(_ap);
    clSetq(sequence,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(predicate,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clNIL);
    clCheckKeys(L_keys, CONS_7, clEOA);
    clEndParse(_ap); }
  if (clTrue(clListp(sequence, clEOA)))
    { clObject L_2;
      clSetq(L_2, key);
      return(clListMergesort(sequence, predicate, L_2, clEOA)); }
  else
    { clObject L_1;
      { clObject L_2, L_0__R1;
        clSetq(L_0__R1,
               clFuncallFunction(clSymbolFunctionValue(clCOERCE_TO_LIST),
                                 sequence,
                                 clEOA));
        clSetq(L_2, key);
        clSetq(L_1, clListMergesort(L_0__R1, predicate, L_2, clEOA)); }
      return(clFuncallFunction(clSymbolFunctionValue(clREPLACE),
                               sequence,
                               L_1,
                               clEOA)); } }

clObject clSplit1 clVdecl(_ap)
{ clObject v, i, j, x, pred, key;
  { clBeginParse(_ap);
    clSetq(v, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(i, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(j, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_3, clEOA)));
    clSetq(x, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_4, clEOA)));
    clSetq(pred,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_5, clEOA)));
    clSetq(key,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_6, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  if (clTrue(clFuncallFunction(clSymbolFunctionValue(clEQ_NUMBER),
                               i,
                               j,
                               clEOA)))
    return(clValues1(i));
  else
    { clObject vj;
      clSetq(vj, clAref(v, j, clEOA));
      if (clTrue(clCompare(vj, x, pred, key, clEOA)))
        { cl_SETF_Aref(vj, v, i, clEOA);
          { clObject L_1;
            clSetq(L_1, cl1PLUS_FUNC(i, clEOA));
            return(clSplit2(v, L_1, j, x, pred, key, clEOA)); } }
      else
        { clObject L_2;
          clSetq(L_2, cl1MINUS_FUNC(j, clEOA));
          return(clSplit1(v, i, L_2, x, pred, key, clEOA)); } } }

clObject clSplit2 clVdecl(_ap)
{ clObject v, i, j, x, pred, key;
  { clBeginParse(_ap);
    clSetq(v, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(i, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(j, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_3, clEOA)));
    clSetq(x, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_4, clEOA)));
    clSetq(pred,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_5, clEOA)));
    clSetq(key,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_6, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  if (clTrue(clFuncallFunction(clSymbolFunctionValue(clEQ_NUMBER),
                               i,
                               j,
                               clEOA)))
    return(clValues1(i));
  else
    { clObject vi;
      clSetq(vi, clAref(v, i, clEOA));
      if (clTrue(clNot(clCompare(vi, x, pred, key, clEOA), clEOA)))
        { cl_SETF_Aref(vi, v, j, clEOA);
          { clObject L_2;
            clSetq(L_2, cl1MINUS_FUNC(j, clEOA));
            return(clSplit1(v, i, L_2, x, pred, key, clEOA)); } }
      else
        { clObject L_1;
          clSetq(L_1, cl1PLUS_FUNC(i, clEOA));
          return(clSplit2(v, L_1, j, x, pred, key, clEOA)); } } }

clObject clQuicksortVector clVdecl(_ap)
{ clObject v, left, right, pred, key;
  { clBeginParse(_ap);
    clSetq(v, (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(left,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(right,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_3, clEOA)));
    clSetq(pred,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_4, clEOA)));
    clSetq(key,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_5, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  if (clTrue(clFuncallFunction(clSymbolFunctionValue(clLT),
                               left,
                               right,
                               clEOA)))
    { clObject x, i;
      clSetq(x, clAref(v, left, clEOA));
      { clObject L_2;
        clSetq(L_2, cl1MINUS_FUNC(right, clEOA));
        clSetq(i, clSplit1(v, left, L_2, x, pred, key, clEOA)); }
      cl_SETF_Aref(x, v, i, clEOA);
      clQuicksortVector(v, left, i, pred, key, clEOA);
      { clObject L_1;
        clSetq(L_1, cl1PLUS_FUNC(i, clEOA));
        return(clQuicksortVector(v, L_1, right, pred, key, clEOA)); } }
  else return(clValues1(v)); }

clObject clSort clVdecl(_ap)
{ clObject L_ap, sequence, predicate, L_keys, key;
  { clBeginParse(_ap);
    clSetq(sequence,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(predicate,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clNIL);
    clCheckKeys(L_keys, CONS_7, clEOA);
    clEndParse(_ap); }
  if (clTrue(clListp(sequence, clEOA)))
    { clObject L_3;
      clSetq(L_3, key);
      return(clQuicksortList(sequence,
                             clNIL,
                             predicate,
                             L_3,
                             clEOA)); }
  else
    { clObject L_4, L_2;
      clSetq(L_2, clLength(sequence, clEOA));
      clSetq(L_4, key);
      return(clQuicksortVector(sequence,
                               I_0,
                               L_2,
                               predicate,
                               L_4,
                               clEOA)); } }

void clInitSort __P((void)) 
{ clDbind(clstarPACKAGEstar);
  clDbind(clstarREADTABLEstar);
  clDbind(clstarLOAD_TRUENAMEstar);
  clDbind(clstarLOAD_PATHNAMEstar);
  clSetq(STR_QUALIFIERS__0,
         clCharpSimpleBaseString("QUALIFIERS"));
  clSetq(keyQUALIFIERS, clMakeKeyword(STR_QUALIFIERS__0, clEOA));
  clSetq(STR_LAMBDA_LIST__1,
         clCharpSimpleBaseString("LAMBDA-LIST"));
  clSetq(keyLAMBDA_LIST, clMakeKeyword(STR_LAMBDA_LIST__1, clEOA));
  clSetq(CONS_4, clCons(clKEY, clNIL, clEOA));
  clSetq(CONS_3, clCons(clPRED, CONS_4, clEOA));
  clSetq(CONS_2, clCons(clSEQUENCE2, CONS_3, clEOA));
  clSetq(CONS_1, clCons(clSEQUENCE1, CONS_2, clEOA));
  clSetq(CONS_0, clCons(clRESULT_VECTOR, CONS_1, clEOA));
  clSetq(STR_SPECIALIZERS__2,
         clCharpSimpleBaseString("SPECIALIZERS"));
  clSetq(keySPECIALIZERS, clMakeKeyword(STR_SPECIALIZERS__2, clEOA));
  clSetq(STR_FUNCTION__3,
         clCharpSimpleBaseString("FUNCTION"));
  clSetq(keyFUNCTION, clMakeKeyword(STR_FUNCTION__3, clEOA));
  clSetq(I_1, clIntFixnum(1));
  clSetq(I_2, clIntFixnum(2));
  clSetq(I_3, clIntFixnum(3));
  clSetq(I_4, clIntFixnum(4));
  clSetq(I_5, clIntFixnum(5));
  clSetq(I_0, clIntFixnum(0));
  clSetq(CONS_6, clCons(clELT, clNIL, clEOA));
  clSetq(CONS_5, clCons(clSETF, CONS_6, clEOA));
  clSetq(STR_DECLARATIONS__4,
         clCharpSimpleBaseString("DECLARATIONS"));
  clSetq(keyDECLARATIONS, clMakeKeyword(STR_DECLARATIONS__4, clEOA));
  clSetq(STR_DOCUMENTATION__5,
         clCharpSimpleBaseString("DOCUMENTATION"));
  clSetq(keyDOCUMENTATION, clMakeKeyword(STR_DOCUMENTATION__5, clEOA));
  clSetq(STR_KEY__6,
         clCharpSimpleBaseString("KEY"));
  clSetq(keyKEY, clMakeKeyword(STR_KEY__6, clEOA));
  clSetq(CONS_7, clCons(keyKEY, clNIL, clEOA));
  clSetq(STR_HEADER__7,
         clCharpSimpleBaseString("HEADER"));
  clSetq(keyHEADER, clMakeKeyword(STR_HEADER__7, clEOA));
  clSetq(I_6, clIntFixnum(6));

  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clVECTOR_MERGE, clEOA));
    { clObject L_3__R1, L_2__R1, L_1__R1, L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clT, clEOA));
      clSetq(L_1__R1, clCanonicalizeSpecializer(clT, clEOA));
      clSetq(L_2__R1, clCanonicalizeSpecializer(clT, clEOA));
      clSetq(L_3__R1, clCanonicalizeSpecializer(clT, clEOA));
      clSetq(L_6,
             clList(L_0__R1, L_1__R1, L_2__R1, L_3__R1,
                    clCanonicalizeSpecializer(clT, clEOA), clEOA)); }
    clSetq(L_8,
           clMakeClosure(0,
                         clVectorMerge_clT_clT_clT_clT_clT,
                         clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  clSetSymbolFunctionValue(clLIST_MERGE,
                           clMakeClosure(0, clListMerge, clNULL_HOOK));
  (void) clLIST_MERGE;
  clSetSymbolFunctionValue(clMERGE,
                           clMakeClosure(0, clMerge, clNULL_HOOK));
  (void) clMERGE;
  clSetSymbolFunctionValue(clLIST_MERGESORT,
                           clMakeClosure(0,
                                         clListMergesort,
                                         clNULL_HOOK));
  (void) clLIST_MERGESORT;
  clSetSymbolFunctionValue(clSTABLE_SORT,
                           clMakeClosure(0,
                                         clStableSort,
                                         clNULL_HOOK));
  (void) clSTABLE_SORT;
  clSetSymbolFunctionValue(clSPLIT1,
                           clMakeClosure(0, clSplit1, clNULL_HOOK));
  (void) clSPLIT1;
  clSetSymbolFunctionValue(clSPLIT2,
                           clMakeClosure(0, clSplit2, clNULL_HOOK));
  (void) clSPLIT2;
  clSetSymbolFunctionValue(clQUICKSORT_VECTOR,
                           clMakeClosure(0,
                                         clQuicksortVector,
                                         clNULL_HOOK));
  (void) clQUICKSORT_VECTOR;
  clSetSymbolFunctionValue(clSORT,
                           clMakeClosure(0, clSort, clNULL_HOOK));
  (void) clSORT;
  clUnwind(4); }