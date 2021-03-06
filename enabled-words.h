/*
Copyright (c) 2014-2016 stoyan shopov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#define DO_STORE_WORD_ENABLED	1	// do_store
#define DO_NUMBER_SIGN_WORD_ENABLED	1	// n
#define DO_NUMBER_SIGN_GREATER_WORD_ENABLED	1	// do_number_sign_greater
#define DO_NUMBER_SIGN_S_WORD_ENABLED	1	// do_number_sign_s
#define DO_TICK_WORD_ENABLED	1	// do_tick
#define DO_PAREN_WORD_ENABLED	1	// do_paren
#define DO_STAR_WORD_ENABLED	1	// do_star
#define DO_STAR_SLASH_WORD_ENABLED	1	// do_star_slash
#define DO_STAR_SLASH_MOD_WORD_ENABLED	1	// do_star_slash_mod
#define DO_PLUS_WORD_ENABLED	1	// do_plus
#define DO_PLUS_STORE_WORD_ENABLED	1	// do_plus_store
#define DO_PLUS_LOOP_WORD_ENABLED	1	// do_plus_loop
#define DO_COMMA_WORD_ENABLED	1	// do_comma
#define DO_MINUS_WORD_ENABLED	1	// do_minus
#define DO_DOT_WORD_ENABLED	1	// do_dot
#define DO_DOT_QUOTE_WORD_ENABLED	1	// do_dot_quote
#define DO_SLASH_WORD_ENABLED	1	// do_slash
#define DO_SLASH_MOD_WORD_ENABLED	1	// do_slash_mod
#define DO_ZERO_LESS_WORD_ENABLED	1	// do_zero_less
#define DO_ZERO_EQUALS_WORD_ENABLED	1	// do_zero_equals
#define DO_ONE_PLUS_WORD_ENABLED	1	// do_one_plus
#define DO_ONE_MINUS_WORD_ENABLED	1	// do_one_minus
#define DO_TWO_STORE_WORD_ENABLED	1	// do_two_store
#define DO_TWO_STAR_WORD_ENABLED	1	// do_two_star
#define DO_TWO_SLASH_WORD_ENABLED	1	// do_two_slash
#define DO_TWO_FETCH_WORD_ENABLED	1	// do_two_fetch
#define DO_TWO_DROP_WORD_ENABLED	1	// do_two_drop
#define DO_TWO_DUP_WORD_ENABLED	1	// do_two_dup
#define DO_TWO_OVER_WORD_ENABLED	1	// do_two_over
#define DO_TWO_SWAP_WORD_ENABLED	1	// do_two_swap
#define DO_COLON_WORD_ENABLED	1	// do_colon
#define DO_SEMICOLON_WORD_ENABLED	1	// do_semicolon
#define DO_LESS_THAN_WORD_ENABLED	1	// do_less_than
#define DO_LESS_NUMBER_SIGN_WORD_ENABLED	1	// do_less_number_sign
#define DO_EQUALS_WORD_ENABLED	1	// do_equals
#define DO_GREATER_THAN_WORD_ENABLED	1	// do_greater_than
#define DO_TO_BODY_WORD_ENABLED	1	// do_to_body
#define DO_TO_IN_WORD_ENABLED	1	// do_to_in
#define DO_TO_NUMBER_WORD_ENABLED	1	// do_to_number
#define DO_TO_R_WORD_ENABLED	1	// do_to_r
#define DO_QUESTION_DUP_WORD_ENABLED	1	// do_question_dup
#define DO_FETCH_WORD_ENABLED	1	// do_fetch
#define DO_ABORT_WORD_ENABLED	1	// do_abort
#define DO_ABORT_QUOTE_WORD_ENABLED	1	// do_abort_quote
#define DO_ABS_WORD_ENABLED	1	// do_abs
#define DO_ALIGN_WORD_ENABLED	1	// do_align
#define DO_ALIGNED_WORD_ENABLED	1	// do_aligned
#define DO_ALLOT_WORD_ENABLED	1	// do_allot
#define DO_AND_WORD_ENABLED	1	// do_and
#define DO_BASE_WORD_ENABLED	1	// do_base
#define DO_BEGIN_WORD_ENABLED	1	// do_begin
#define DO_BL_WORD_ENABLED	1	// do_bl
#define DO_C_STORE_WORD_ENABLED	1	// do_c_store
#define DO_C_COMMA_WORD_ENABLED	1	// do_c_comma
#define DO_C_FETCH_WORD_ENABLED	1	// do_c_fetch
#define DO_CELL_PLUS_WORD_ENABLED	1	// do_cell_plus
#define DO_CELLS_WORD_ENABLED	1	// do_cells
#define DO_CHAR_WORD_ENABLED	1	// do_char
#define DO_CHAR_PLUS_WORD_ENABLED	1	// do_char_plus
#define DO_CHARS_WORD_ENABLED	1	// do_chars
#define DO_CONSTANT_WORD_ENABLED	1	// do_constant
#define DO_COUNT_WORD_ENABLED	1	// do_count
#define DO_CR_WORD_ENABLED	1	// do_cr
#define DO_CREATE_WORD_ENABLED	1	// do_create
#define DO_DECIMAL_WORD_ENABLED	1	// do_decimal
#define DO_DEPTH_WORD_ENABLED	1	// do_depth
#define DO_DO_WORD_ENABLED	1	// do_do
#define DO_DOES_WORD_ENABLED	1	// do_does
#define DO_DROP_WORD_ENABLED	1	// do_drop
#define DO_DUP_WORD_ENABLED	1	// do_dup
#define DO_ELSE_WORD_ENABLED	1	// do_else
#define DO_EMIT_WORD_ENABLED	1	// do_emit
#define DO_EVALUATE_WORD_ENABLED	1	// do_evaluate
#define DO_EXECUTE_WORD_ENABLED	1	// do_execute
#define DO_EXIT_WORD_ENABLED	1	// do_exit
#define DO_FILL_WORD_ENABLED	1	// do_fill
#define DO_FIND_WORD_ENABLED	1	// do_find
#define DO_F_M_SLASH_MOD_WORD_ENABLED	1	// do_f_m_slash_mod
#define DO_HERE_WORD_ENABLED	1	// do_here
#define DO_HOLD_WORD_ENABLED	1	// do_hold
#define DO_I_WORD_ENABLED	1	// do_i
#define DO_IF_WORD_ENABLED	1	// do_if
#define DO_IMMEDIATE_WORD_ENABLED	1	// do_immediate
#define DO_INVERT_WORD_ENABLED	1	// do_invert
#define DO_J_WORD_ENABLED	1	// do_j
#define DO_LEAVE_WORD_ENABLED	1	// do_leave
#define DO_LITERAL_WORD_ENABLED	1	// do_literal
#define DO_LOOP_WORD_ENABLED	1	// do_loop
#define DO_LSHIFT_WORD_ENABLED	1	// do_lshift
#define DO_M_STAR_WORD_ENABLED	1	// do_m_star
#define DO_MAX_WORD_ENABLED	1	// do_max
#define DO_MIN_WORD_ENABLED	1	// do_min
#define DO_MOD_WORD_ENABLED	1	// do_mod
#define DO_MOVE_WORD_ENABLED	1	// do_move
#define DO_NEGATE_WORD_ENABLED	1	// do_negate
#define DO_OR_WORD_ENABLED	1	// do_or
#define DO_OVER_WORD_ENABLED	1	// do_over
#define DO_POSTPONE_WORD_ENABLED	1	// do_postpone
#define DO_QUIT_WORD_ENABLED	1	// do_quit
#define DO_R_FROM_WORD_ENABLED	1	// do_r_from
#define DO_R_FETCH_WORD_ENABLED	1	// do_r_fetch
#define DO_RECURSE_WORD_ENABLED	1	// do_recurse
#define DO_REPEAT_WORD_ENABLED	1	// do_repeat
#define DO_ROT_WORD_ENABLED	1	// do_rot
#define DO_RSHIFT_WORD_ENABLED	1	// do_rshift
#define DO_S_QUOTE_WORD_ENABLED	1	// do_s_quote
#define DO_S_TO_D_WORD_ENABLED	1	// do_s_to_d
#define DO_SIGN_WORD_ENABLED	1	// do_sign
#define DO_S_M_SLASH_REM_WORD_ENABLED	1	// do_s_m_slash_rem
#define DO_SOURCE_WORD_ENABLED	1	// do_source
#define DO_SPACE_WORD_ENABLED	1	// do_space
#define DO_SPACES_WORD_ENABLED	1	// do_spaces
#define DO_STATE_WORD_ENABLED	1	// do_state
#define DO_SWAP_WORD_ENABLED	1	// do_swap
#define DO_THEN_WORD_ENABLED	1	// do_then
#define DO_TYPE_WORD_ENABLED	1	// do_type
#define DO_U_DOT_WORD_ENABLED	1	// do_u_dot
#define DO_U_LESS_THAN_WORD_ENABLED	1	// do_u_less_than
#define DO_U_M_STAR_WORD_ENABLED	1	// do_u_m_star
#define DO_U_M_SLASH_MOD_WORD_ENABLED	1	// do_u_m_slash_mod
#define DO_UNLOOP_WORD_ENABLED	1	// do_unloop
#define DO_UNTIL_WORD_ENABLED	1	// do_until
#define DO_VARIABLE_WORD_ENABLED	1	// do_variable
#define DO_WHILE_WORD_ENABLED	1	// do_while
#define DO_WORD_WORD_ENABLED	1	// do_word
#define DO_XOR_WORD_ENABLED	1	// do_xor
#define DO_LEFT_BRACKET_WORD_ENABLED	1	// do_left_bracket
#define DO_BRACKET_TICK_WORD_ENABLED	1	// do_bracket_tick
#define DO_BRACKET_CHAR_WORD_ENABLED	1	// do_bracket_char
#define DO_RIGHT_BRACKET_WORD_ENABLED	1	// do_right_bracket
#define DO_DOT_PAREN_WORD_ENABLED	1	// do_dot_paren
#define DO_DOT_R_WORD_ENABLED	1	// do_dot_r
#define DO_ZERO_NOT_EQUALS_WORD_ENABLED	1	// do_zero_not_equals
#define DO_ZERO_GREATER_WORD_ENABLED	1	// do_zero_greater
#define DO_TWO_TO_R_WORD_ENABLED	1	// do_two_to_r
#define DO_TWO_R_FROM_WORD_ENABLED	1	// do_two_r_from
#define DO_TWO_R_FETCH_WORD_ENABLED	1	// do_two_r_fetch
#define DO_COLON_NO_NAME_WORD_ENABLED	1	// do_colon_no_name
#define DO_NOT_EQUALS_WORD_ENABLED	1	// do_not_equals
#define DO_QUESTION_DO_WORD_ENABLED	1	// do_question_do
#define DO_AGAIN_WORD_ENABLED	1	// do_again
#define DO_BUFFER_COLON_WORD_ENABLED	1	// do_buffer_colon
#define DO_C_QUOTE_WORD_ENABLED	1	// do_c_quote
#define DO_CASE_WORD_ENABLED	1	// do_case
#define DO_COMPILE_COMMA_WORD_ENABLED	1	// do_compile_comma
#define DO_ENDCASE_WORD_ENABLED	1	// do_endcase
#define DO_ENDOF_WORD_ENABLED	1	// do_endof
#define DO_ERASE_WORD_ENABLED	1	// do_erase
#define DO_FALSE_WORD_ENABLED	1	// do_false
#define DO_HEX_WORD_ENABLED	1	// do_hex
#define DO_MARKER_WORD_ENABLED	1	// do_marker
#define DO_NIP_WORD_ENABLED	1	// do_nip
#define DO_OF_WORD_ENABLED	1	// do_of
#define DO_PAD_WORD_ENABLED	1	// do_pad
#define DO_PARSE_WORD_ENABLED	1	// do_parse
#define DO_PARSE_NAME_WORD_ENABLED	1	// do_parse_name
#define DO_PICK_WORD_ENABLED	1	// do_pick
#define DO_REFILL_WORD_ENABLED	1	// do_refill
#define DO_RESTORE_INPUT_WORD_ENABLED	1	// do_restore_input
#define DO_ROLL_WORD_ENABLED	1	// do_roll
#define DO_S_BACKSLASH_QUOTE_WORD_ENABLED	1	// do_s_backslash_quote
#define DO_SAVE_INPUT_WORD_ENABLED	1	// do_save_input
#define DO_SOURCE_ID_WORD_ENABLED	1	// do_source_id
#define DO_TO_WORD_ENABLED	1	// do_to
#define DO_TRUE_WORD_ENABLED	1	// do_true
#define DO_TUCK_WORD_ENABLED	1	// do_tuck
#define DO_U_DOT_R_WORD_ENABLED	1	// do_u_dot_r
#define DO_U_GREATER_THAN_WORD_ENABLED	1	// do_u_greater_than
#define DO_UNUSED_WORD_ENABLED	1	// do_unused
#define DO_VALUE_WORD_ENABLED	1	// do_value
#define DO_WITHIN_WORD_ENABLED	1	// do_within
#define DO_BACKSLASH_WORD_ENABLED	1	// do_backslash
#define DO_AHEAD_WORD_ENABLED	1	// do_ahead
#define DO_BREAK_WORD_ENABLED	1	// do_break
#define DO_BYE_WORD_ENABLED	1	// do_bye
#define DO_LATEST_WORD_ENABLED	1	// do_latest
#define DO_JMPENV_WORD_ENABLED	1	// do_jmpenv
#define DO_INCLUDED_WORD_ENABLED	1	// do_included
#define DO_DOT_S_WORD_ENABLED	1	// do_dot_s
#define DO_TO_NAME_WORD_ENABLED	1	// do_to_name
#define DO_QUESTION_WORD_ENABLED	1	// do_question
#define DO_DUMP_WORD_ENABLED	1	// do_dump
#define DO_CR_ECHO_WORD_ENABLED	1	// do_cr_echo
#define DO_COLON_DEBUG_WORD_ENABLED	1	// do_colon_debug
#define DO_SMUDGE_WORD_ENABLED	1	// do_smudge
#define DO_UNSMUDGE_WORD_ENABLED	1	// do_unsmudge
#define SF_RESET_WORD_ENABLED	1	// sf_reset
