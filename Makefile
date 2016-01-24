.PHONY: clean All

All:
	@echo "----------Building project:[ JuegoAsteroides - Debug ]----------"
	@cd "JuegoAsteroides" && "$(MAKE)" -f  "JuegoAsteroides.mk"
clean:
	@echo "----------Cleaning project:[ JuegoAsteroides - Debug ]----------"
	@cd "JuegoAsteroides" && "$(MAKE)" -f  "JuegoAsteroides.mk" clean
