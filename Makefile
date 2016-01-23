.PHONY: clean All

All:
	@echo "----------Building project:[ SpikeSFML - Debug ]----------"
	@cd "SpikeSFML" && "$(MAKE)" -f  "SpikeSFML.mk"
clean:
	@echo "----------Cleaning project:[ SpikeSFML - Debug ]----------"
	@cd "SpikeSFML" && "$(MAKE)" -f  "SpikeSFML.mk" clean
