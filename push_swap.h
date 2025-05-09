#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft_all/libft.h"

extern 	int g_op_count;
void	lst_swap(t_list **lst);
void	lst_swap_a(t_list **lst);
void	lst_swap_b(t_list **lst);
void	lst_doble_swap(t_list **lst, t_list **lst_2);
void	lst_push_a(t_list **lst, t_list **lst_2);
void	lst_push_b(t_list **lst, t_list **lst_2);
void	lst_rotate(t_list **lst);
void	lst_rotate_a(t_list **lst);
void	lst_rotate_b(t_list **lst);
void	lst_doble_rotate(t_list **lst, t_list **lst_2);
void	lst_reverse_rotate(t_list **lst);
void	lst_reverse_rotate_a(t_list **lst);
void	lst_reverse_rotate_b(t_list **lst);
void	lst_doble_reverse_rotate(t_list **lst, t_list **lst_2);
int		check_arg_are_different(char **argv);
int		check_arg_is_nbr(char **argv);
int		check_nbr_range(char **argv);
t_list	*create_node(int nbr);
t_list	*parsing(char **argv, int i);
int		find_lowest_nbr_parsing(t_list *pile_a);
void	init_index(t_list *pile);
void	parse_index(t_list *pile);
int		find_lowest_nbr(t_list *pile_a);
void	rotate(t_list **pile_a);
void	dynamique_chunk(t_list **lst_a, t_list **lst_b);
int		find_highest_nbr(t_list *pile_b);
int		is_next_max(t_list *pile_b);
int		find_len_nbr(t_list *pile_b, int nbr);
void	fill_a(t_list **lst_a, t_list **lst_b);
int		dynamique_chunk_algo(t_list **lst_a, t_list **lst_b, int end);
void	count_push_max_or_nextmax(t_list **lst_a, t_list **lst_b);
void	push_nextmax_first(t_list **lst_a, t_list **lst_b, int next_max_val, int next_max_pos, int max_val);
void	push_max_first(t_list **lst_a, t_list **lst_b, int next_max_val, int next_max_pos, int max_val);
int 	find_next_max(t_list *lst_b, int current_max);
int		len_reach_top(t_list **lst_b, int len_node_in_lst);
void	launch(t_list **pile_a, t_list **pile_b);

#endif