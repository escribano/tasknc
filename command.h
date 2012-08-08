/*
 * vim: noet ts=4 sw=4 sts=4
 *
 * command.h
 * by mjheagle
 */

#ifndef _COMMAND_H
#define _COMMAND_H

#include <curses.h>
#include <stdbool.h>
#include "common.h"

void handle_command(char *);
void run_command_bind(char *);
void run_command_color(char *);
void run_command_unbind(char *);
void run_command_set(char *);
void run_command_show(const char *);
void run_command_source(const char *filepath);
void strip_quotes(char **, bool);

extern bool done;
extern bool redraw;
extern bool reload;
extern task *head;
extern FILE *logfp;
extern WINDOW *pager;
extern WINDOW *tasklist;

#endif